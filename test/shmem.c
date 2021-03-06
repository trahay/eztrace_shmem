#include <sys/time.h>
#include "shmem.h"

/* This is a dumb implementation of the SHmem API that does nothing */

#define DURATION(t1, t2) (t2.tv_sec - t1.tv_sec)*1e6+(t2.tv_usec - t1.tv_usec)

#define THRESHOLD 50

static void compute() {
  struct timeval t1, t2;
  gettimeofday(&t1, NULL);
  do {
    gettimeofday(&t2, NULL);
  } while(DURATION(t1, t2) < THRESHOLD);
}


void shmem_init () {
  compute();
}

void start_pes (int a) {
  compute();
}

int shmem_n_pes () {
  compute();
  return 1;
}

int shmem_my_pe () {
  compute();
  return 1;
}

int shmem_pe_accessible (int a) {
  compute();
  return 0;
}

int shmem_addr_accessible (void*  a1, int a2) {
  compute();
  return 0;
}

void * shmalloc (size_t a1) {
  compute();
  return NULL;
}

void * shmemalign (size_t a1, size_t a2) {
  compute();
  return NULL;
}

void * shrealloc (void*  a1, size_t a2) {
  compute();
  return NULL;
}

void shfree (void*  a1) {
  compute();
}


void * shmem_ptr (void*  a1, int a2) {
  compute();
  return NULL;
}


void shmem_short_p (short*  a1, short a2, int a3) {
  compute();
  
}


void shmem_int_p (int*  a1, int a2, int a3) {
  compute();
  
}


void shmem_long_p (long*  a1, long a2, int a3) {
  compute();
  
}

void shmem_float_p (float*  a1, float a2, int a3) {
  compute();
  
}

void shmem_double_p (double*  a1, double a2, int a3) {
  compute();
  
}

void shmem_longlong_p (long long*  a1, long long a2, int a3) {
  compute();
  
}

void shmem_longdouble_p (long double*  a1, long double a2, int a3) {
  compute();
  
}

void shmem_char_put (char*  a1, const char*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_short_put (short*  a1, const short*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_int_put (int*  a1, const int*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_long_put (long*  a1, const long*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_float_put (float*  a1, const float*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_double_put (double*  a1, const double*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_longlong_put (long long*  a1, const long long*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_longdouble_put (long double*  a1, const long double*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_put32 (void*  a1, const void*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_put64 (void*  a1, const void*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_put128 (void*  a1, const void*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_putmem (void*  a1, const void*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_short_iput (short*  a1, const short*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_int_iput (int*  a1, const int*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_float_iput (float*  a1, const float*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_long_iput (long*  a1, const long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_double_iput (double*  a1, const double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_longlong_iput (long long*  a1, const long long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_longdouble_iput (long double*  a1, const long double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_iput32 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_iput64 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_iput128 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

short shmem_short_g (short*  a1, int a2) {
  compute();
  return 0;
}

int shmem_int_g (int*  a1, int a2) {
  compute();
  return 0;
}

long shmem_long_g (long*  a1, int a2) {
  compute();
  return 0;
}

float shmem_float_g (float*  a1, int a2) {
  compute();
  return 0;
}

double shmem_double_g (double*  a1, int a2) {
  compute();
  return 0;
}

long long shmem_longlong_g (long long*  a1, int a2) {
  compute();
  return 0;
}

long double shmem_longdouble_g (long double*  a1, int a2) {
  compute();
  return 0;
}

void shmem_char_get (char*  a1, const char*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_short_get (short*  a1, const short*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_int_get (int*  a1, const int*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_long_get (long*  a1, const long*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_float_get (float*  a1, const float*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_double_get (double*  a1, const double*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_longlong_get (long long*  a1, const long long*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_longdouble_get (long double*  a1, const long double*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_get32 (void*  a1, const void*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_get64 (void*  a1, const void*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_get128 (void*  a1, const void*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_getmem (void*  a1, const void*  a2, size_t a3, int a4) {
  compute();
  
}

void shmem_iget32 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_iget64 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_iget128 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_short_iget (short*  a1, const short*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_int_iget (int*  a1, const int*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_long_iget (long*  a1, const long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_double_iget (double*  a1, const double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_float_iget (float*  a1, const float*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_longlong_iget (long long*  a1, const long long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

void shmem_longdouble_iget (long double*  a1, const long double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  compute();
  
}

short shmem_short_swap (short*  a1, short a2, int a3) {
  compute();
  return 0;
}

int shmem_int_swap (int*  a1, int a2, int a3) {
  compute();
  return 0;
}

long shmem_long_swap (long*  a1, long a2, int a3) {
  compute();
  return 0;
}

long shmem_swap (long*  a1, long a2, int a3) {
  compute();
  return 0;
}

long long shmem_longlong_swap (long long*  a1, long long a2, int a3) {
  compute();
  return 0;
}

float shmem_float_swap (float*  a1, float a2, int a3) {
  compute();
  return 0;
}

double shmem_double_swap (double*  a1, double a2, int a3) {
  compute();
  return 0;
}

short shmem_short_cswap (short*  a1, short a2, short a3, int a4) {
  compute();
  return 0;
}

int shmem_int_cswap (int*  a1, int a2, int a3, int a4) {
  compute();
  return 0;
}

long shmem_long_cswap (long*  a1, long a2, long a3, int a4) {
  compute();
  return 0;
}

long long shmem_longlong_cswap (long long*  a1, long long a2, long long a3, int a4) {
  compute();
  return 0;
}

short shmem_short_fadd (short*  a1, short a2, int a4) {
  compute();
  return 0;
}

int shmem_int_fadd (int*  a1, int a2, int a4) {
  compute();
  return 0;
}

long shmem_long_fadd (long*  a1, long a2, int a4) {
  compute();
  return 0;
}

long long shmem_longlong_fadd (long long*  a1, long long a2, int a4) {
  compute();
  return 0;
}

short shmem_short_finc (short*  a1, int a4) {
  compute();
  return 0;
}

int shmem_int_finc (int*  a1, int a4) {
  compute();
  return 0;
}

long shmem_long_finc (long*  a1, int a4) {
  compute();
  return 0;
}

long long shmem_longlong_finc (long long*  a1, int a4) {
  compute();
  return 0;
}

void shmem_short_add (short*  a1, short a2, int a4) {
  compute();
  
}

void shmem_int_add (int*  a1, int a2, int a4) {
  compute();
  
}

void shmem_long_add (long*  a1, long a2, int a4) {
  compute();
  
}

void shmem_longlong_add (long long*  a1, long long a2, int a4) {
  compute();
  
}

void shmem_short_inc (short*  a1, int a4) {
  compute();
  
}

void shmem_int_inc (int*  a1, int a4) {
  compute();
  
}

void shmem_long_inc (long*  a1, int a4) {
  compute();
  
}

void shmem_longlong_inc (long long*  a1, int a4) {
  compute();
  
}

void shmem_short_wait (short*  a1, short a4) {
  compute();
  
}

void shmem_int_wait (int*  a1, int a4) {
  compute();
  
}

void shmem_long_wait (long*  a1, long a4) {
  compute();
  
}

void shmem_longlong_wait (long long*  a1, long long a4) {
  compute();
  
}

void shmem_wait (long*  a1, long a4) {
  compute();
  
}

void shmem_short_wait_until (short*  a1, int a3, short a4) {
  compute();
  
}

void shmem_int_wait_until (int*  a1, int a2, int a4) {
  compute();
  
}

void shmem_long_wait_until (long*  a1, int a2, long a4) {
  compute();
  
}

void shmem_longlong_wait_until (long long*  a1, int a2, long long a4) {
  compute();
  
}

void shmem_wait_until (long*  a1, int a2, long a4) {
  compute();
  
}

void shmem_barrier_all () {
  compute();
  
}

void shmem_barrier (int a1, int a2, int a3, long*  a4) {
  compute();
  
}

void shmem_fence () {
  compute();
  
}

void shmem_quiet () {
  compute();
  
}

void shmem_short_and_to_all (short*  a1, short*  a2, int a3, int b, int c, int d, short* e, long*  f) {
  compute();
  
}

void shmem_int_and_to_all (int*  a1, int*  a2, int a3, int b, int c, int d, int*  e, long*  f) {
  compute();
  
}

void shmem_long_and_to_all (long*  a1, long*  a2, int a3, int b, int c, int d, long*  e, long*  f) {
  compute();
  
}

void shmem_longlong_and_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long* g) {
  compute();
  
}

void shmem_short_or_to_all (short*  a1, short*  a2, int b, int c, int d, int e, short* f, long* g) {
  compute();
  
}

void shmem_int_or_to_all (int*  a1, int*  a2, int c, int d, int e, int f, int*  g, long*  h) {
  compute();
  
}

void shmem_long_or_to_all (long*  a1, long*  a2, int c, int d, int e, int f, long* g, long*  h) {
  compute();
  
}

void shmem_longlong_or_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g) {
  compute();
  
}

void shmem_short_xor_to_all (short*  a1, short*  a2, int b, int c, int d, int e, short*  f, long*  g) {
  compute();
  
}

void shmem_int_xor_to_all (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  compute();
  
}

void shmem_long_xor_to_all (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g) {
  compute();
  
}

void shmem_longlong_xor_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g) {
  compute();
  
}

void shmem_short_max_to_all (short*  a1, short*  a2, int b, int c, int d, int e, short*  f, long*  g) {
  compute();
  
}

void shmem_int_max_to_all (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  compute();
  
}

void shmem_long_max_to_all (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g) {
  compute();
  
}

void shmem_float_max_to_all (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g) {
  compute();
  
}

void shmem_double_max_to_all (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g) {
  compute();
  
}

void shmem_longlong_max_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long*  f, long*  g) {
  compute();
  
}

void shmem_longdouble_max_to_all (long double*  a1, long double*  a2, int b, int c, int d, int e, long double*  f, long*  g) {
  compute();
  
}

void shmem_short_min_to_all (short*  a1, short*  a2, int b, int c, int d, int e, short*  f, long*  g) {
  compute();
  
}

void shmem_int_min_to_all (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  compute();
  
}

void shmem_long_min_to_all (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g) {
  compute();
  
}

void shmem_float_min_to_all (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g) {
  compute();
  
}

void shmem_double_min_to_all (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g) {
  compute();
  
}

void shmem_longlong_min_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g) {
  compute();
  
}

void shmem_longdouble_min_to_all (long double*  a1, long double*  a2, int b, int c, int d, int e, long double* f, long*  g) {
  compute();
  
}

void shmem_short_sum_to_all (short*  a1, short*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  compute();
  
}

void shmem_int_sum_to_all (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  compute();
  
}

void shmem_long_sum_to_all (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g) {
  compute();
  
}

void shmem_float_sum_to_all (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g) {
  compute();
  
}

void shmem_double_sum_to_all (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g) {
  compute();
  
}

void shmem_longlong_sum_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g) {
  compute();
  
}

void shmem_longdouble_sum_to_all (long double*  a1, long double*  a2, int b, int c, int d, int e, long double* f, long*  g) {
  compute();
  
}

void shmem_short_prod_to_all (short*  a1, short*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  compute();
  
}

void shmem_int_prod_to_all (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  compute();
  
}

void shmem_long_prod_to_all (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g) {
  compute();
  
}

void shmem_float_prod_to_all (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g) {
  compute();
  
}

void shmem_double_prod_to_all (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g) {
  compute();
  
}

void shmem_longlong_prod_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long*  f, long*  g) {
  compute();
  
}

void shmem_longdouble_prod_to_all (long double*  a1, long double*  a2, int b, int c, int d, int e, long double* f, long*  g) {
  compute();
  
}

void shmem_collect32 (void*  a1, const void*  a2, size_t b, int c, int d, int e, long* f) {
  compute();
  
}

void shmem_collect64 (void*  a1, const void*  a2, size_t b, int c, int d, int e, long*  f) {
  compute();
  
}

void shmem_short_collect (short*  a1, const short*  a2, size_t b, int c, int d, int e, short*  f) {
  compute();
  
}

void shmem_int_collect (int*  a1, const int*  a2, size_t b, int c, int d, int e, int*  f) {
  compute();
  
}

void shmem_long_collect (long*  a1, const long*  a2, size_t b, int c, int d, int e, long*  f) {
  compute();
  
}

void shmem_longlong_collect (long long*  a1, const long long*  a2, size_t b, int c, int d, int e, long long*  f) {
  compute();
  
}

void shmem_float_collect (float*  a1, const float*  a2, size_t b, int c, int d, int e, float*  f) {
  compute();
  
}

void shmem_double_collect (double*  a1, const double*  a2, size_t b, int c, int d, int e, double*  f) {
  compute();
  
}

void shmem_fcollect32 (void*  a1, const void*  a2, size_t b, int c, int d, int e, long*  f) {
  compute();
  
}

void shmem_fcollect64 (void*  a1, const void*  a2, size_t b, int c, int d, int e, long*  f) {
  compute();
  
}

void shmem_short_fcollect (short*  a1, const short*  a2, size_t b, int c, int d, int e, short*  f) {
  compute();
  
}

void shmem_int_fcollect (int*  a1, const int*  a2, size_t b, int c, int d, int e, int*  f) {
  compute();
  
}

void shmem_long_fcollect (long*  a1, const long*  a2, size_t b, int c, int d, int e, long*  f) {
  compute();
  
}

void shmem_longlong_fcollect (long long*  a1, const long long*  a2, size_t b, int c, int d, int e, long long*  f) {
  compute();
  
}

void shmem_float_fcollect (float*  a1, const float*  a2, size_t b, int c, int d, int e, float*  f) {
  compute();
  
}

void shmem_double_fcollect (double*  a1, const double*  a2, size_t b, int c, int d, int e, double*  f) {
  compute();
  
}

void shmem_broadcast32 (void*  a1, const void*  a2, size_t b, int c, int d, int e, int f, long* g) {
  compute();
  
}

void shmem_broadcast64 (void*  a1, const void*  a2, size_t b, int c, int d, int e, int f, long* g) {
  compute();
  
}

void shmem_short_broadcast (short*  a1, const short*  a2, size_t b, int c, int d, int e, int f, short*  g) {
  compute();
  
}

void shmem_int_broadcast (int*  a1, const int*  a2, size_t b, int c, int d, int e, int f, int*  g) {
  compute();
  
}

void shmem_long_broadcast (long*  a1, const long*  a2, size_t b, int c, int d, int e, int f, long*  g) {
  compute();
  
}

void shmem_longlong_broadcast (long long*  a1, const long long*  a2, size_t b, int c, int d, int e, int f, long long*  g) {
  compute();
  
}

void shmem_float_broadcast (float*  a1, const float*  a2, size_t b, int c, int d, int e, int f, float*  g) {
  compute();
  
}

void shmem_double_broadcast (double*  a1, const double*  a2, size_t b, int c, int d, int e, int f, double*  g) {
  compute();
  
}

void shmem_set_lock (long*  a) {
  compute();
  
}

void shmem_clear_lock (long* a) {
  compute();
  
}

int shmem_test_lock (long*  a) {
  compute();
  return 0;
}
