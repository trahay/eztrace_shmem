#include "shmem.h"
#include <stdio.h>
#include <pthread.h>
#include <sys/time.h>

#define DURATION(t1, t2) (t2.tv_sec - t1.tv_sec)*1e6+(t2.tv_usec - t1.tv_usec)


static void compute(int usec) {
  struct timeval t1, t2;
  gettimeofday(&t1, NULL);
  do {
    gettimeofday(&t2, NULL);
  } while(DURATION(t1, t2) < usec);
}

void* thread_function(void* arg) {
  struct timeval t1, t2;

  int test_duration=10*1e6;

  gettimeofday(&t1, NULL);
  do {

    int f = rand() % 10;
    switch(f) {
    case 0:
      shmalloc (1) ;
      break;
    case 1:
      shmemalign (1, 2);
      break;
    case 2:
      shrealloc (NULL, 2) ;
      break;
    case 3:
      shfree (NULL) ;
      break;
    case 4:
      shmem_ptr (NULL, 1) ;
      break;
    case 5:
      shmem_short_p (NULL, 1, 2);
      break;
    case 6:
      shmem_int_p (NULL, 1, 2);
      break;
    case 7:
      shmem_long_p (NULL, 1, 2);
      break;
    case 8:
      shmem_float_p (NULL, 1, 2);
      break;
    case 9:
      shmem_double_p (NULL, 1, 2);
      break;
    }

    compute(100);
    gettimeofday(&t2, NULL);
  } while(DURATION(t1, t2) < test_duration);

  return NULL;
}

int main(int argc, char**argv) {
  int nb_threads=4;
  pthread_t tid[nb_threads];
  
  shmem_init();
  for(int i=0; i<nb_threads; i++) {
    pthread_create(&tid[i], NULL, thread_function, NULL);
  }
  for(int i=0; i<nb_threads; i++) {
    pthread_join(tid[i], NULL);
  }
  return 0;  
}
