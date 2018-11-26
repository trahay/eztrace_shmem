/*
 * Copyright (C) CNRS, INRIA, Université Bordeaux 1, Télécom SudParis
 * See COPYING in top-level directory.
 */

#include "eztrace.h"
#include "eztrace_sampling.h"

#include "shmem_ev_codes.h"



void (*libstart_pes) (int a);

int (*libshmem_n_pes) ();

int (*libshmem_my_pe) ();

int (*libshmem_pe_accessible) (int a);

int (*libshmem_addr_accessible) (void*  a1, int a2);

void * (*libshmalloc) (size_t a1);

void * (*libshmemalign) (size_t a1, size_t a2);

void * (*libshrealloc) (void*  a1, size_t a2);

void (*libshfree) (void*  a1);

void * (*libshmem_ptr) (void*  a1, int a2);

void (*libshmem_short_p) (short*  a1, short a2, int a3);

void (*libshmem_int_p) (int*  a1, int a2, int a3);

void (*libshmem_long_p) (long*  a1, long a2, int a3);

void (*libshmem_float_p) (float*  a1, float a2, int a3);

void (*libshmem_double_p) (double*  a1, double a2, int a3);

void (*libshmem_longlong_p) (long long*  a1, long long a2, int a3);

void (*libshmem_longdouble_p) (long double*  a1, long double a2, int a3);

void (*libshmem_char_put) (char*  a1, const char*  a2, size_t a3, int a4);

void (*libshmem_short_put) (short*  a1, const short*  a2, size_t a3, int a4);

void (*libshmem_int_put) (int*  a1, const int*  a2, size_t a3, int a4);

void (*libshmem_long_put) (long*  a1, const long*  a2, size_t a3, int a4);

void (*libshmem_float_put) (float*  a1, const float*  a2, size_t a3, int a4);

void (*libshmem_double_put) (double*  a1, const double*  a2, size_t a3, int a4);

void (*libshmem_longlong_put) (long long*  a1, const long long*  a2, size_t a3, int a4);

void (*libshmem_longdouble_put) (long double*  a1, const long double*  a2, size_t a3, int a4);

void (*libshmem_put32) (void*  a1, const void*  a2, size_t a3, int a4);

void (*libshmem_put64) (void*  a1, const void*  a2, size_t a3, int a4);

void (*libshmem_put128) (void*  a1, const void*  a2, size_t a3, int a4);

void (*libshmem_putmem) (void*  a1, const void*  a2, size_t a3, int a4);

void (*libshmem_short_iput) (short*  a1, const short*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_int_iput) (int*  a1, const int*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_float_iput) (float*  a1, const float*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_long_iput) (long*  a1, const long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_double_iput) (double*  a1, const double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_longlong_iput) (long long*  a1, const long long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_longdouble_iput) (long double*  a1, const long double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_iput32) (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_iput64) (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_iput128) (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

short (*libshmem_short_g) (short*  a1, int a2);

int (*libshmem_int_g) (int*  a1, int a2);

long (*libshmem_long_g) (long*  a1, int a2);

float (*libshmem_float_g) (float*  a1, int a2);

double (*libshmem_double_g) (double*  a1, int a2);

long long (*libshmem_longlong_g) (long long*  a1, int a2);

long double (*libshmem_longdouble_g) (long double*  a1, int a2);

void (*libshmem_char_get) (char*  a1, const char*  a2, size_t a3, int a4);

void (*libshmem_short_get) (short*  a1, const short*  a2, size_t a3, int a4);

void (*libshmem_int_get) (int*  a1, const int*  a2, size_t a3, int a4);

void (*libshmem_long_get) (long*  a1, const long*  a2, size_t a3, int a4);

void (*libshmem_float_get) (float*  a1, const float*  a2, size_t a3, int a4);

void (*libshmem_double_get) (double*  a1, const double*  a2, size_t a3, int a4);

void (*libshmem_longlong_get) (long long*  a1, const long long*  a2, size_t a3, int a4);

void (*libshmem_longdouble_get) (long double*  a1, const long double*  a2, size_t a3, int a4);

void (*libshmem_get32) (void*  a1, const void*  a2, size_t a3, int a4);

void (*libshmem_get64) (void*  a1, const void*  a2, size_t a3, int a4);

void (*libshmem_get128) (void*  a1, const void*  a2, size_t a3, int a4);

void (*libshmem_getmem) (void*  a1, const void*  a2, size_t a3, int a4);

void (*libshmem_iget32) (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_iget64) (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_iget128) (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_short_iget) (short*  a1, const short*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_int_iget) (int*  a1, const int*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_long_iget) (long*  a1, const long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_double_iget) (double*  a1, const double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_float_iget) (float*  a1, const float*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_longlong_iget) (long long*  a1, const long long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

void (*libshmem_longdouble_iget) (long double*  a1, const long double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6);

short (*libshmem_short_swap) (short*  a1, short a2, int a3);

int (*libshmem_int_swap) (int*  a1, int a2, int a3);

long (*libshmem_long_swap) (long*  a1, long a2, int a3);

long (*libshmem_swap) (long*  a1, long a2, int a3);

long long (*libshmem_longlong_swap) (long long*  a1, long long a2, int a3);

float (*libshmem_float_swap) (float*  a1, float a2, int a3);

double (*libshmem_double_swap) (double*  a1, double a2, int a3);

short (*libshmem_short_cswap) (short*  a1, short a2, short a3, int a4);

int (*libshmem_int_cswap) (int*  a1, int a2, int a3, int a4);

long (*libshmem_long_cswap) (long*  a1, long a2, long a3, int a4);

long long (*libshmem_longlong_cswap) (long long*  a1, long long a2, long long a3, int a4);

short (*libshmem_short_fadd) (short*  a1, short a2, int a4);

int (*libshmem_int_fadd) (int*  a1, int a2, int a4);

long (*libshmem_long_fadd) (long*  a1, long a2, int a4);

long long (*libshmem_longlong_fadd) (long long*  a1, long long a2, int a4);

short (*libshmem_short_finc) (short*  a1, int a4);

int (*libshmem_int_finc) (int*  a1, int a4);

long (*libshmem_long_finc) (long*  a1, int a4);

long long (*libshmem_longlong_finc) (long long*  a1, int a4);

void (*libshmem_short_add) (short*  a1, short a2, int a4);

void (*libshmem_int_add) (int*  a1, int a2, int a4);

void (*libshmem_long_add) (long*  a1, long a2, int a4);

void (*libshmem_longlong_add) (long long*  a1, long long a2, int a4);

void (*libshmem_short_inc) (short*  a1, int a4);

void (*libshmem_int_inc) (int*  a1, int a4);

void (*libshmem_long_inc) (long*  a1, int a4);

void (*libshmem_longlong_inc) (long long*  a1, int a4);

void (*libshmem_short_wait) (short*  a1, short a4);

void (*libshmem_int_wait) (int*  a1, int a4);

void (*libshmem_long_wait) (long*  a1, long a4);

void (*libshmem_longlong_wait) (long long*  a1, long long a4);

void (*libshmem_wait) (long*  a1, long a4);

void (*libshmem_short_wait_until) (short*  a1, int a3, short a4);

void (*libshmem_int_wait_until) (int*  a1, int a2, int a4);

void (*libshmem_long_wait_until) (long*  a1, int a2, long a4);

void (*libshmem_longlong_wait_until) (long long*  a1, int a2, long long a4);

void (*libshmem_wait_until) (long*  a1, int a2, long a4);

void (*libshmem_barrier_all) ();

void (*libshmem_barrier) (int a1, int a2, int a3, long*  a4);

void (*libshmem_fence) ();

void (*libshmem_quiet) ();

void (*libshmem_short_and_to_all) (short*  a1, short*  a2, int a3, int b, int c, int d, short* e, long*  f);

void (*libshmem_int_and_to_all) (int*  a1, int*  a2, int a3, int b, int c, int d, int*  e, long*  f);

void (*libshmem_long_and_to_all) (long*  a1, long*  a2, int a3, int b, int c, int d, long*  e, long*  f);

void (*libshmem_longlong_and_to_all) (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long* g);

void (*libshmem_short_or_to_all) (short*  a1, short*  a2, int b, int c, int d, int e, short* f, long* g);

void (*libshmem_int_or_to_all) (int*  a1, int*  a2, int c, int d, int e, int f, int*  g, long*  h);

void (*libshmem_long_or_to_all) (long*  a1, long*  a2, int c, int d, int e, int f, long* g, long*  h);

void (*libshmem_longlong_or_to_all) (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g);

void (*libshmem_short_xor_to_all) (short*  a1, short*  a2, int b, int c, int d, int e, short*  f, long*  g);

void (*libshmem_int_xor_to_all) (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g);

void (*libshmem_long_xor_to_all) (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g);

void (*libshmem_longlong_xor_to_all) (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g);

void (*libshmem_short_max_to_all) (short*  a1, short*  a2, int b, int c, int d, int e, short*  f, long*  g);

void (*libshmem_int_max_to_all) (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g);

void (*libshmem_long_max_to_all) (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g);

void (*libshmem_float_max_to_all) (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g);

void (*libshmem_double_max_to_all) (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g);

void (*libshmem_longlong_max_to_all) (long long*  a1, long long*  a2, int b, int c, int d, int e, long long*  f, long*  g);

void (*libshmem_longdouble_max_to_all) (long double*  a1, long double*  a2, int b, int c, int d, int e, long double*  f, long*  g);

void (*libshmem_short_min_to_all) (short*  a1, short*  a2, int b, int c, int d, int e, short*  f, long*  g);

void (*libshmem_int_min_to_all) (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g);

void (*libshmem_long_min_to_all) (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g);

void (*libshmem_float_min_to_all) (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g);

void (*libshmem_double_min_to_all) (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g);

void (*libshmem_longlong_min_to_all) (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g);

void (*libshmem_longdouble_min_to_all) (long double*  a1, long double*  a2, int b, int c, int d, int e, long double* f, long*  g);

void (*libshmem_short_sum_to_all) (short*  a1, short*  a2, int b, int c, int d, int e, int*  f, long*  g);

void (*libshmem_int_sum_to_all) (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g);

void (*libshmem_long_sum_to_all) (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g);

void (*libshmem_float_sum_to_all) (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g);

void (*libshmem_double_sum_to_all) (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g);

void (*libshmem_longlong_sum_to_all) (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g);

void (*libshmem_longdouble_sum_to_all) (long double*  a1, long double*  a2, int b, int c, int d, int e, long double* f, long*  g);

void (*libshmem_short_prod_to_all) (short*  a1, short*  a2, int b, int c, int d, int e, int*  f, long*  g);

void (*libshmem_int_prod_to_all) (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g);

void (*libshmem_long_prod_to_all) (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g);

void (*libshmem_float_prod_to_all) (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g);

void (*libshmem_double_prod_to_all) (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g);

void (*libshmem_longlong_prod_to_all) (long long*  a1, long long*  a2, int b, int c, int d, int e, long long*  f, long*  g);

void (*libshmem_longdouble_prod_to_all) (long double*  a1, long double*  a2, int b, int c, int d, int e, long double* f, long*  g);

void (*libshmem_collect32) (void*  a1, const void*  a2, size_t b, int c, int d, int e, long* f);

void (*libshmem_collect64) (void*  a1, const void*  a2, size_t b, int c, int d, int e, long*  f);

void (*libshmem_short_collect) (short*  a1, const short*  a2, size_t b, int c, int d, int e, short*  f);

void (*libshmem_int_collect) (int*  a1, const int*  a2, size_t b, int c, int d, int e, int*  f);

void (*libshmem_long_collect) (long*  a1, const long*  a2, size_t b, int c, int d, int e, long*  f);

void (*libshmem_longlong_collect) (long long*  a1, const long long*  a2, size_t b, int c, int d, int e, long long*  f);

void (*libshmem_float_collect) (float*  a1, const float*  a2, size_t b, int c, int d, int e, float*  f);

void (*libshmem_double_collect) (double*  a1, const double*  a2, size_t b, int c, int d, int e, double*  f);

void (*libshmem_fcollect32) (void*  a1, const void*  a2, size_t b, int c, int d, int e, long*  f);

void (*libshmem_fcollect64) (void*  a1, const void*  a2, size_t b, int c, int d, int e, long*  f);

void (*libshmem_short_fcollect) (short*  a1, const short*  a2, size_t b, int c, int d, int e, short*  f);

void (*libshmem_int_fcollect) (int*  a1, const int*  a2, size_t b, int c, int d, int e, int*  f);

void (*libshmem_long_fcollect) (long*  a1, const long*  a2, size_t b, int c, int d, int e, long*  f);

void (*libshmem_longlong_fcollect) (long long*  a1, const long long*  a2, size_t b, int c, int d, int e, long long*  f);

void (*libshmem_float_fcollect) (float*  a1, const float*  a2, size_t b, int c, int d, int e, float*  f);

void (*libshmem_double_fcollect) (double*  a1, const double*  a2, size_t b, int c, int d, int e, double*  f);

void (*libshmem_broadcast32) (void*  a1, const void*  a2, size_t b, int c, int d, int e, int f, long* g);

void (*libshmem_broadcast64) (void*  a1, const void*  a2, size_t b, int c, int d, int e, int f, long* g);

void (*libshmem_short_broadcast) (short*  a1, const short*  a2, size_t b, int c, int d, int e, int f, short*  g);

void (*libshmem_int_broadcast) (int*  a1, const int*  a2, size_t b, int c, int d, int e, int f, int*  g);

void (*libshmem_long_broadcast) (long*  a1, const long*  a2, size_t b, int c, int d, int e, int f, long*  g);

void (*libshmem_longlong_broadcast) (long long*  a1, const long long*  a2, size_t b, int c, int d, int e, int f, long long*  g);

void (*libshmem_float_broadcast) (float*  a1, const float*  a2, size_t b, int c, int d, int e, int f, float*  g);

void (*libshmem_double_broadcast) (double*  a1, const double*  a2, size_t b, int c, int d, int e, int f, double*  g);

void (*libshmem_set_lock) (long*  a);

void (*libshmem_clear_lock) (long* a);

int (*libshmem_test_lock) (long*  a);



static int module_initialized = 0;


void start_pes (int a) {
  FUNCTION_ENTRY;
  if (!libstart_pes) { 
    libstart_pes = dlsym(RTLD_NEXT, "start_pes");
  }
  libstart_pes (a);
  int my_rank=shmem_my_pe();
  int comm_size=shmem_n_pes();

  char *filename= NULL;
  asprintf(&filename, "eztrace_log_rank_%s", my_rank);
  eztrace_set_filename(filename);

  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_start_pes_1, a, my_rank, comm_size);
  
  EZTRACE_EVENT_PACKED_1 (EZTRACE_shmem_start_pes_2, a);
}

int shmem_n_pes () {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_0 (EZTRACE_shmem_shmem_n_pes_3);
  if (!libshmem_n_pes) { 
    libshmem_n_pes = dlsym(RTLD_NEXT, "shmem_n_pes");
  }
  int ret = libshmem_n_pes ();
  EZTRACE_EVENT_PACKED_0 (EZTRACE_shmem_shmem_n_pes_4);
  return ret;
}

int shmem_my_pe () {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_0 (EZTRACE_shmem_shmem_my_pe_5);
  if (!libshmem_my_pe) { 
    libshmem_my_pe = dlsym(RTLD_NEXT, "shmem_my_pe");
  }
  int ret = libshmem_my_pe ();
  EZTRACE_EVENT_PACKED_0 (EZTRACE_shmem_shmem_my_pe_6);
  return ret;
}

int shmem_pe_accessible (int a) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_1 (EZTRACE_shmem_shmem_pe_accessible_7, a);
  if (!libshmem_pe_accessible) { 
    libshmem_pe_accessible = dlsym(RTLD_NEXT, "shmem_pe_accessible");
  }
  int ret = libshmem_pe_accessible (a);
  EZTRACE_EVENT_PACKED_1 (EZTRACE_shmem_shmem_pe_accessible_8, a);
  return ret;
}

int shmem_addr_accessible (void*  a1, int a2) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_addr_accessible_9, a1, a2);
  if (!libshmem_addr_accessible) { 
    libshmem_addr_accessible = dlsym(RTLD_NEXT, "shmem_addr_accessible");
  }
  int ret = libshmem_addr_accessible (a1, a2);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_addr_accessible_10, a1, a2);
  return ret;
}

void * shmalloc (size_t a1) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_1 (EZTRACE_shmem_shmalloc_11, a1);
  if (!libshmalloc) { 
    libshmalloc = dlsym(RTLD_NEXT, "shmalloc");
  }
  libshmalloc (a1);
  EZTRACE_EVENT_PACKED_1 (EZTRACE_shmem_shmalloc_12, a1);
}

void * shmemalign (size_t a1, size_t a2) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmemalign_13, a1, a2);
  if (!libshmemalign) { 
    libshmemalign = dlsym(RTLD_NEXT, "shmemalign");
  }
  libshmemalign (a1, a2);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmemalign_14, a1, a2);
}

void * shrealloc (void*  a1, size_t a2) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shrealloc_15, a1, a2);
  if (!libshrealloc) { 
    libshrealloc = dlsym(RTLD_NEXT, "shrealloc");
  }
  libshrealloc (a1, a2);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shrealloc_16, a1, a2);
}

void shfree (void*  a1) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_1 (EZTRACE_shmem_shfree_17, a1);
  if (!libshfree) { 
    libshfree = dlsym(RTLD_NEXT, "shfree");
  }
  libshfree (a1);
  EZTRACE_EVENT_PACKED_1 (EZTRACE_shmem_shfree_18, a1);
}

void * shmem_ptr (void*  a1, int a2) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_ptr_19, a1, a2);
  if (!libshmem_ptr) { 
    libshmem_ptr = dlsym(RTLD_NEXT, "shmem_ptr");
  }
  libshmem_ptr (a1, a2);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_ptr_20, a1, a2);
}

void shmem_short_p (short*  a1, short a2, int a3) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_short_p_21, a1, a2, a3);
  if (!libshmem_short_p) { 
    libshmem_short_p = dlsym(RTLD_NEXT, "shmem_short_p");
  }
  libshmem_short_p (a1, a2, a3);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_short_p_22, a1, a2, a3);
}

void shmem_int_p (int*  a1, int a2, int a3) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_int_p_23, a1, a2, a3);
  if (!libshmem_int_p) { 
    libshmem_int_p = dlsym(RTLD_NEXT, "shmem_int_p");
  }
  libshmem_int_p (a1, a2, a3);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_int_p_24, a1, a2, a3);
}

void shmem_long_p (long*  a1, long a2, int a3) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_long_p_25, a1, a2, a3);
  if (!libshmem_long_p) { 
    libshmem_long_p = dlsym(RTLD_NEXT, "shmem_long_p");
  }
  libshmem_long_p (a1, a2, a3);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_long_p_26, a1, a2, a3);
}

void shmem_float_p (float*  a1, float a2, int a3) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_float_p_27, a1, a2, a3);
  if (!libshmem_float_p) { 
    libshmem_float_p = dlsym(RTLD_NEXT, "shmem_float_p");
  }
  libshmem_float_p (a1, a2, a3);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_float_p_28, a1, a2, a3);
}

void shmem_double_p (double*  a1, double a2, int a3) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_double_p_29, a1, a2, a3);
  if (!libshmem_double_p) { 
    libshmem_double_p = dlsym(RTLD_NEXT, "shmem_double_p");
  }
  libshmem_double_p (a1, a2, a3);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_double_p_30, a1, a2, a3);
}

void shmem_longlong_p (long long*  a1, long long a2, int a3) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_longlong_p_31, a1, a2, a3);
  if (!libshmem_longlong_p) { 
    libshmem_longlong_p = dlsym(RTLD_NEXT, "shmem_longlong_p");
  }
  libshmem_longlong_p (a1, a2, a3);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_longlong_p_32, a1, a2, a3);
}

void shmem_longdouble_p (long double*  a1, long double a2, int a3) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_longdouble_p_33, a1, a2, a3);
  if (!libshmem_longdouble_p) { 
    libshmem_longdouble_p = dlsym(RTLD_NEXT, "shmem_longdouble_p");
  }
  libshmem_longdouble_p (a1, a2, a3);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_longdouble_p_34, a1, a2, a3);
}

void shmem_char_put (char*  a1, const char*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_char_put_35, a1, a2, a3, a4);
  if (!libshmem_char_put) { 
    libshmem_char_put = dlsym(RTLD_NEXT, "shmem_char_put");
  }
  libshmem_char_put (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_char_put_36, a1, a2, a3, a4);
}

void shmem_short_put (short*  a1, const short*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_put_37, a1, a2, a3, a4);
  if (!libshmem_short_put) { 
    libshmem_short_put = dlsym(RTLD_NEXT, "shmem_short_put");
  }
  libshmem_short_put (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_put_38, a1, a2, a3, a4);
}

void shmem_int_put (int*  a1, const int*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_put_39, a1, a2, a3, a4);
  if (!libshmem_int_put) { 
    libshmem_int_put = dlsym(RTLD_NEXT, "shmem_int_put");
  }
  libshmem_int_put (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_put_40, a1, a2, a3, a4);
}

void shmem_long_put (long*  a1, const long*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_put_41, a1, a2, a3, a4);
  if (!libshmem_long_put) { 
    libshmem_long_put = dlsym(RTLD_NEXT, "shmem_long_put");
  }
  libshmem_long_put (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_put_42, a1, a2, a3, a4);
}

void shmem_float_put (float*  a1, const float*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_put_43, a1, a2, a3, a4);
  if (!libshmem_float_put) { 
    libshmem_float_put = dlsym(RTLD_NEXT, "shmem_float_put");
  }
  libshmem_float_put (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_put_44, a1, a2, a3, a4);
}

void shmem_double_put (double*  a1, const double*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_put_45, a1, a2, a3, a4);
  if (!libshmem_double_put) { 
    libshmem_double_put = dlsym(RTLD_NEXT, "shmem_double_put");
  }
  libshmem_double_put (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_put_46, a1, a2, a3, a4);
}

void shmem_longlong_put (long long*  a1, const long long*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_put_47, a1, a2, a3, a4);
  if (!libshmem_longlong_put) { 
    libshmem_longlong_put = dlsym(RTLD_NEXT, "shmem_longlong_put");
  }
  libshmem_longlong_put (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_put_48, a1, a2, a3, a4);
}

void shmem_longdouble_put (long double*  a1, const long double*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_put_49, a1, a2, a3, a4);
  if (!libshmem_longdouble_put) { 
    libshmem_longdouble_put = dlsym(RTLD_NEXT, "shmem_longdouble_put");
  }
  libshmem_longdouble_put (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_put_50, a1, a2, a3, a4);
}

void shmem_put32 (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_put32_51, a1, a2, a3, a4);
  if (!libshmem_put32) { 
    libshmem_put32 = dlsym(RTLD_NEXT, "shmem_put32");
  }
  libshmem_put32 (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_put32_52, a1, a2, a3, a4);
}

void shmem_put64 (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_put64_53, a1, a2, a3, a4);
  if (!libshmem_put64) { 
    libshmem_put64 = dlsym(RTLD_NEXT, "shmem_put64");
  }
  libshmem_put64 (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_put64_54, a1, a2, a3, a4);
}

void shmem_put128 (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_put128_55, a1, a2, a3, a4);
  if (!libshmem_put128) { 
    libshmem_put128 = dlsym(RTLD_NEXT, "shmem_put128");
  }
  libshmem_put128 (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_put128_56, a1, a2, a3, a4);
}

void shmem_putmem (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_putmem_57, a1, a2, a3, a4);
  if (!libshmem_putmem) { 
    libshmem_putmem = dlsym(RTLD_NEXT, "shmem_putmem");
  }
  libshmem_putmem (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_putmem_58, a1, a2, a3, a4);
}

void shmem_short_iput (short*  a1, const short*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_iput_59, a1, a2, a3, a4);
  if (!libshmem_short_iput) { 
    libshmem_short_iput = dlsym(RTLD_NEXT, "shmem_short_iput");
  }
  libshmem_short_iput (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_iput_60, a1, a2, a3, a4);
}

void shmem_int_iput (int*  a1, const int*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_iput_61, a1, a2, a3, a4);
  if (!libshmem_int_iput) { 
    libshmem_int_iput = dlsym(RTLD_NEXT, "shmem_int_iput");
  }
  libshmem_int_iput (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_iput_62, a1, a2, a3, a4);
}

void shmem_float_iput (float*  a1, const float*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_iput_63, a1, a2, a3, a4);
  if (!libshmem_float_iput) { 
    libshmem_float_iput = dlsym(RTLD_NEXT, "shmem_float_iput");
  }
  libshmem_float_iput (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_iput_64, a1, a2, a3, a4);
}

void shmem_long_iput (long*  a1, const long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_iput_65, a1, a2, a3, a4);
  if (!libshmem_long_iput) { 
    libshmem_long_iput = dlsym(RTLD_NEXT, "shmem_long_iput");
  }
  libshmem_long_iput (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_iput_66, a1, a2, a3, a4);
}

void shmem_double_iput (double*  a1, const double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_iput_67, a1, a2, a3, a4);
  if (!libshmem_double_iput) { 
    libshmem_double_iput = dlsym(RTLD_NEXT, "shmem_double_iput");
  }
  libshmem_double_iput (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_iput_68, a1, a2, a3, a4);
}

void shmem_longlong_iput (long long*  a1, const long long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_iput_69, a1, a2, a3, a4);
  if (!libshmem_longlong_iput) { 
    libshmem_longlong_iput = dlsym(RTLD_NEXT, "shmem_longlong_iput");
  }
  libshmem_longlong_iput (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_iput_70, a1, a2, a3, a4);
}

void shmem_longdouble_iput (long double*  a1, const long double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_iput_71, a1, a2, a3, a4);
  if (!libshmem_longdouble_iput) { 
    libshmem_longdouble_iput = dlsym(RTLD_NEXT, "shmem_longdouble_iput");
  }
  libshmem_longdouble_iput (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_iput_72, a1, a2, a3, a4);
}

void shmem_iput32 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_iput32_73, a1, a2, a3, a4);
  if (!libshmem_iput32) { 
    libshmem_iput32 = dlsym(RTLD_NEXT, "shmem_iput32");
  }
  libshmem_iput32 (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_iput32_74, a1, a2, a3, a4);
}

void shmem_iput64 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_iput64_75, a1, a2, a3, a4);
  if (!libshmem_iput64) { 
    libshmem_iput64 = dlsym(RTLD_NEXT, "shmem_iput64");
  }
  libshmem_iput64 (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_iput64_76, a1, a2, a3, a4);
}

void shmem_iput128 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_iput128_77, a1, a2, a3, a4);
  if (!libshmem_iput128) { 
    libshmem_iput128 = dlsym(RTLD_NEXT, "shmem_iput128");
  }
  libshmem_iput128 (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_iput128_78, a1, a2, a3, a4);
}

short shmem_short_g (short*  a1, int a2) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_short_g_79, a1, a2);
  if (!libshmem_short_g) { 
    libshmem_short_g = dlsym(RTLD_NEXT, "shmem_short_g");
  }
  short ret = libshmem_short_g (a1, a2);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_short_g_80, a1, a2);
  return ret;
}

int shmem_int_g (int*  a1, int a2) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_int_g_81, a1, a2);
  if (!libshmem_int_g) { 
    libshmem_int_g = dlsym(RTLD_NEXT, "shmem_int_g");
  }
  int ret = libshmem_int_g (a1, a2);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_int_g_82, a1, a2);
  return ret;
}

long shmem_long_g (long*  a1, int a2) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_long_g_83, a1, a2);
  if (!libshmem_long_g) { 
    libshmem_long_g = dlsym(RTLD_NEXT, "shmem_long_g");
  }
  long ret = libshmem_long_g (a1, a2);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_long_g_84, a1, a2);
  return ret;
}

float shmem_float_g (float*  a1, int a2) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_float_g_85, a1, a2);
  if (!libshmem_float_g) { 
    libshmem_float_g = dlsym(RTLD_NEXT, "shmem_float_g");
  }
  float ret = libshmem_float_g (a1, a2);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_float_g_86, a1, a2);
  return ret;
}

double shmem_double_g (double*  a1, int a2) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_double_g_87, a1, a2);
  if (!libshmem_double_g) { 
    libshmem_double_g = dlsym(RTLD_NEXT, "shmem_double_g");
  }
  double ret = libshmem_double_g (a1, a2);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_double_g_88, a1, a2);
  return ret;
}

long long shmem_longlong_g (long long*  a1, int a2) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_longlong_g_89, a1, a2);
  if (!libshmem_longlong_g) { 
    libshmem_longlong_g = dlsym(RTLD_NEXT, "shmem_longlong_g");
  }
  long long ret = libshmem_longlong_g (a1, a2);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_longlong_g_90, a1, a2);
  return ret;
}

long double shmem_longdouble_g (long double*  a1, int a2) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_longdouble_g_91, a1, a2);
  if (!libshmem_longdouble_g) { 
    libshmem_longdouble_g = dlsym(RTLD_NEXT, "shmem_longdouble_g");
  }
  long double ret = libshmem_longdouble_g (a1, a2);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_longdouble_g_92, a1, a2);
  return ret;
}

void shmem_char_get (char*  a1, const char*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_char_get_93, a1, a2, a3, a4);
  if (!libshmem_char_get) { 
    libshmem_char_get = dlsym(RTLD_NEXT, "shmem_char_get");
  }
  libshmem_char_get (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_char_get_94, a1, a2, a3, a4);
}

void shmem_short_get (short*  a1, const short*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_get_95, a1, a2, a3, a4);
  if (!libshmem_short_get) { 
    libshmem_short_get = dlsym(RTLD_NEXT, "shmem_short_get");
  }
  libshmem_short_get (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_get_96, a1, a2, a3, a4);
}

void shmem_int_get (int*  a1, const int*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_get_97, a1, a2, a3, a4);
  if (!libshmem_int_get) { 
    libshmem_int_get = dlsym(RTLD_NEXT, "shmem_int_get");
  }
  libshmem_int_get (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_get_98, a1, a2, a3, a4);
}

void shmem_long_get (long*  a1, const long*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_get_99, a1, a2, a3, a4);
  if (!libshmem_long_get) { 
    libshmem_long_get = dlsym(RTLD_NEXT, "shmem_long_get");
  }
  libshmem_long_get (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_get_100, a1, a2, a3, a4);
}

void shmem_float_get (float*  a1, const float*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_get_101, a1, a2, a3, a4);
  if (!libshmem_float_get) { 
    libshmem_float_get = dlsym(RTLD_NEXT, "shmem_float_get");
  }
  libshmem_float_get (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_get_102, a1, a2, a3, a4);
}

void shmem_double_get (double*  a1, const double*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_get_103, a1, a2, a3, a4);
  if (!libshmem_double_get) { 
    libshmem_double_get = dlsym(RTLD_NEXT, "shmem_double_get");
  }
  libshmem_double_get (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_get_104, a1, a2, a3, a4);
}

void shmem_longlong_get (long long*  a1, const long long*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_get_105, a1, a2, a3, a4);
  if (!libshmem_longlong_get) { 
    libshmem_longlong_get = dlsym(RTLD_NEXT, "shmem_longlong_get");
  }
  libshmem_longlong_get (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_get_106, a1, a2, a3, a4);
}

void shmem_longdouble_get (long double*  a1, const long double*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_get_107, a1, a2, a3, a4);
  if (!libshmem_longdouble_get) { 
    libshmem_longdouble_get = dlsym(RTLD_NEXT, "shmem_longdouble_get");
  }
  libshmem_longdouble_get (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_get_108, a1, a2, a3, a4);
}

void shmem_get32 (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_get32_109, a1, a2, a3, a4);
  if (!libshmem_get32) { 
    libshmem_get32 = dlsym(RTLD_NEXT, "shmem_get32");
  }
  libshmem_get32 (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_get32_110, a1, a2, a3, a4);
}

void shmem_get64 (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_get64_111, a1, a2, a3, a4);
  if (!libshmem_get64) { 
    libshmem_get64 = dlsym(RTLD_NEXT, "shmem_get64");
  }
  libshmem_get64 (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_get64_112, a1, a2, a3, a4);
}

void shmem_get128 (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_get128_113, a1, a2, a3, a4);
  if (!libshmem_get128) { 
    libshmem_get128 = dlsym(RTLD_NEXT, "shmem_get128");
  }
  libshmem_get128 (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_get128_114, a1, a2, a3, a4);
}

void shmem_getmem (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_getmem_115, a1, a2, a3, a4);
  if (!libshmem_getmem) { 
    libshmem_getmem = dlsym(RTLD_NEXT, "shmem_getmem");
  }
  libshmem_getmem (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_getmem_116, a1, a2, a3, a4);
}

void shmem_iget32 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_iget32_117, a1, a2, a3, a4);
  if (!libshmem_iget32) { 
    libshmem_iget32 = dlsym(RTLD_NEXT, "shmem_iget32");
  }
  libshmem_iget32 (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_iget32_118, a1, a2, a3, a4);
}

void shmem_iget64 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_iget64_119, a1, a2, a3, a4);
  if (!libshmem_iget64) { 
    libshmem_iget64 = dlsym(RTLD_NEXT, "shmem_iget64");
  }
  libshmem_iget64 (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_iget64_120, a1, a2, a3, a4);
}

void shmem_iget128 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_iget128_121, a1, a2, a3, a4);
  if (!libshmem_iget128) { 
    libshmem_iget128 = dlsym(RTLD_NEXT, "shmem_iget128");
  }
  libshmem_iget128 (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_iget128_122, a1, a2, a3, a4);
}

void shmem_short_iget (short*  a1, const short*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_iget_123, a1, a2, a3, a4);
  if (!libshmem_short_iget) { 
    libshmem_short_iget = dlsym(RTLD_NEXT, "shmem_short_iget");
  }
  libshmem_short_iget (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_iget_124, a1, a2, a3, a4);
}

void shmem_int_iget (int*  a1, const int*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_iget_125, a1, a2, a3, a4);
  if (!libshmem_int_iget) { 
    libshmem_int_iget = dlsym(RTLD_NEXT, "shmem_int_iget");
  }
  libshmem_int_iget (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_iget_126, a1, a2, a3, a4);
}

void shmem_long_iget (long*  a1, const long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_iget_127, a1, a2, a3, a4);
  if (!libshmem_long_iget) { 
    libshmem_long_iget = dlsym(RTLD_NEXT, "shmem_long_iget");
  }
  libshmem_long_iget (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_iget_128, a1, a2, a3, a4);
}

void shmem_double_iget (double*  a1, const double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_iget_129, a1, a2, a3, a4);
  if (!libshmem_double_iget) { 
    libshmem_double_iget = dlsym(RTLD_NEXT, "shmem_double_iget");
  }
  libshmem_double_iget (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_iget_130, a1, a2, a3, a4);
}

void shmem_float_iget (float*  a1, const float*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_iget_131, a1, a2, a3, a4);
  if (!libshmem_float_iget) { 
    libshmem_float_iget = dlsym(RTLD_NEXT, "shmem_float_iget");
  }
  libshmem_float_iget (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_iget_132, a1, a2, a3, a4);
}

void shmem_longlong_iget (long long*  a1, const long long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_iget_133, a1, a2, a3, a4);
  if (!libshmem_longlong_iget) { 
    libshmem_longlong_iget = dlsym(RTLD_NEXT, "shmem_longlong_iget");
  }
  libshmem_longlong_iget (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_iget_134, a1, a2, a3, a4);
}

void shmem_longdouble_iget (long double*  a1, const long double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_iget_135, a1, a2, a3, a4);
  if (!libshmem_longdouble_iget) { 
    libshmem_longdouble_iget = dlsym(RTLD_NEXT, "shmem_longdouble_iget");
  }
  libshmem_longdouble_iget (a1, a2, a3, a4, a5, a6);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_iget_136, a1, a2, a3, a4);
}

short shmem_short_swap (short*  a1, short a2, int a3) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_short_swap_137, a1, a2, a3);
  if (!libshmem_short_swap) { 
    libshmem_short_swap = dlsym(RTLD_NEXT, "shmem_short_swap");
  }
  short ret = libshmem_short_swap (a1, a2, a3);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_short_swap_138, a1, a2, a3);
  return ret;
}

int shmem_int_swap (int*  a1, int a2, int a3) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_int_swap_139, a1, a2, a3);
  if (!libshmem_int_swap) { 
    libshmem_int_swap = dlsym(RTLD_NEXT, "shmem_int_swap");
  }
  int ret = libshmem_int_swap (a1, a2, a3);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_int_swap_140, a1, a2, a3);
  return ret;
}

long shmem_long_swap (long*  a1, long a2, int a3) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_long_swap_141, a1, a2, a3);
  if (!libshmem_long_swap) { 
    libshmem_long_swap = dlsym(RTLD_NEXT, "shmem_long_swap");
  }
  long ret = libshmem_long_swap (a1, a2, a3);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_long_swap_142, a1, a2, a3);
  return ret;
}

long shmem_swap (long*  a1, long a2, int a3) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_swap_143, a1, a2, a3);
  if (!libshmem_swap) { 
    libshmem_swap = dlsym(RTLD_NEXT, "shmem_swap");
  }
  long ret = libshmem_swap (a1, a2, a3);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_swap_144, a1, a2, a3);
  return ret;
}

long long shmem_longlong_swap (long long*  a1, long long a2, int a3) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_longlong_swap_145, a1, a2, a3);
  if (!libshmem_longlong_swap) { 
    libshmem_longlong_swap = dlsym(RTLD_NEXT, "shmem_longlong_swap");
  }
  long long ret = libshmem_longlong_swap (a1, a2, a3);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_longlong_swap_146, a1, a2, a3);
  return ret;
}

float shmem_float_swap (float*  a1, float a2, int a3) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_float_swap_147, a1, a2, a3);
  if (!libshmem_float_swap) { 
    libshmem_float_swap = dlsym(RTLD_NEXT, "shmem_float_swap");
  }
  float ret = libshmem_float_swap (a1, a2, a3);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_float_swap_148, a1, a2, a3);
  return ret;
}

double shmem_double_swap (double*  a1, double a2, int a3) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_double_swap_149, a1, a2, a3);
  if (!libshmem_double_swap) { 
    libshmem_double_swap = dlsym(RTLD_NEXT, "shmem_double_swap");
  }
  double ret = libshmem_double_swap (a1, a2, a3);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_double_swap_150, a1, a2, a3);
  return ret;
}

short shmem_short_cswap (short*  a1, short a2, short a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_cswap_151, a1, a2, a3, a4);
  if (!libshmem_short_cswap) { 
    libshmem_short_cswap = dlsym(RTLD_NEXT, "shmem_short_cswap");
  }
  short ret = libshmem_short_cswap (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_cswap_152, a1, a2, a3, a4);
  return ret;
}

int shmem_int_cswap (int*  a1, int a2, int a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_cswap_153, a1, a2, a3, a4);
  if (!libshmem_int_cswap) { 
    libshmem_int_cswap = dlsym(RTLD_NEXT, "shmem_int_cswap");
  }
  int ret = libshmem_int_cswap (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_cswap_154, a1, a2, a3, a4);
  return ret;
}

long shmem_long_cswap (long*  a1, long a2, long a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_cswap_155, a1, a2, a3, a4);
  if (!libshmem_long_cswap) { 
    libshmem_long_cswap = dlsym(RTLD_NEXT, "shmem_long_cswap");
  }
  long ret = libshmem_long_cswap (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_cswap_156, a1, a2, a3, a4);
  return ret;
}

long long shmem_longlong_cswap (long long*  a1, long long a2, long long a3, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_cswap_157, a1, a2, a3, a4);
  if (!libshmem_longlong_cswap) { 
    libshmem_longlong_cswap = dlsym(RTLD_NEXT, "shmem_longlong_cswap");
  }
  long long ret = libshmem_longlong_cswap (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_cswap_158, a1, a2, a3, a4);
  return ret;
}

short shmem_short_fadd (short*  a1, short a2, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_short_fadd_159, a1, a2, a4);
  if (!libshmem_short_fadd) { 
    libshmem_short_fadd = dlsym(RTLD_NEXT, "shmem_short_fadd");
  }
  short ret = libshmem_short_fadd (a1, a2, a4);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_short_fadd_160, a1, a2, a4);
  return ret;
}

int shmem_int_fadd (int*  a1, int a2, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_int_fadd_161, a1, a2, a4);
  if (!libshmem_int_fadd) { 
    libshmem_int_fadd = dlsym(RTLD_NEXT, "shmem_int_fadd");
  }
  int ret = libshmem_int_fadd (a1, a2, a4);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_int_fadd_162, a1, a2, a4);
  return ret;
}

long shmem_long_fadd (long*  a1, long a2, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_long_fadd_163, a1, a2, a4);
  if (!libshmem_long_fadd) { 
    libshmem_long_fadd = dlsym(RTLD_NEXT, "shmem_long_fadd");
  }
  long ret = libshmem_long_fadd (a1, a2, a4);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_long_fadd_164, a1, a2, a4);
  return ret;
}

long long shmem_longlong_fadd (long long*  a1, long long a2, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_longlong_fadd_165, a1, a2, a4);
  if (!libshmem_longlong_fadd) { 
    libshmem_longlong_fadd = dlsym(RTLD_NEXT, "shmem_longlong_fadd");
  }
  long long ret = libshmem_longlong_fadd (a1, a2, a4);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_longlong_fadd_166, a1, a2, a4);
  return ret;
}

short shmem_short_finc (short*  a1, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_short_finc_167, a1, a4);
  if (!libshmem_short_finc) { 
    libshmem_short_finc = dlsym(RTLD_NEXT, "shmem_short_finc");
  }
  short ret = libshmem_short_finc (a1, a4);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_short_finc_168, a1, a4);
  return ret;
}

int shmem_int_finc (int*  a1, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_int_finc_169, a1, a4);
  if (!libshmem_int_finc) { 
    libshmem_int_finc = dlsym(RTLD_NEXT, "shmem_int_finc");
  }
  int ret = libshmem_int_finc (a1, a4);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_int_finc_170, a1, a4);
  return ret;
}

long shmem_long_finc (long*  a1, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_long_finc_171, a1, a4);
  if (!libshmem_long_finc) { 
    libshmem_long_finc = dlsym(RTLD_NEXT, "shmem_long_finc");
  }
  long ret = libshmem_long_finc (a1, a4);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_long_finc_172, a1, a4);
  return ret;
}

long long shmem_longlong_finc (long long*  a1, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_longlong_finc_173, a1, a4);
  if (!libshmem_longlong_finc) { 
    libshmem_longlong_finc = dlsym(RTLD_NEXT, "shmem_longlong_finc");
  }
  long long ret = libshmem_longlong_finc (a1, a4);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_longlong_finc_174, a1, a4);
  return ret;
}

void shmem_short_add (short*  a1, short a2, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_short_add_175, a1, a2, a4);
  if (!libshmem_short_add) { 
    libshmem_short_add = dlsym(RTLD_NEXT, "shmem_short_add");
  }
  libshmem_short_add (a1, a2, a4);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_short_add_176, a1, a2, a4);
}

void shmem_int_add (int*  a1, int a2, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_int_add_177, a1, a2, a4);
  if (!libshmem_int_add) { 
    libshmem_int_add = dlsym(RTLD_NEXT, "shmem_int_add");
  }
  libshmem_int_add (a1, a2, a4);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_int_add_178, a1, a2, a4);
}

void shmem_long_add (long*  a1, long a2, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_long_add_179, a1, a2, a4);
  if (!libshmem_long_add) { 
    libshmem_long_add = dlsym(RTLD_NEXT, "shmem_long_add");
  }
  libshmem_long_add (a1, a2, a4);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_long_add_180, a1, a2, a4);
}

void shmem_longlong_add (long long*  a1, long long a2, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_longlong_add_181, a1, a2, a4);
  if (!libshmem_longlong_add) { 
    libshmem_longlong_add = dlsym(RTLD_NEXT, "shmem_longlong_add");
  }
  libshmem_longlong_add (a1, a2, a4);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_longlong_add_182, a1, a2, a4);
}

void shmem_short_inc (short*  a1, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_short_inc_183, a1, a4);
  if (!libshmem_short_inc) { 
    libshmem_short_inc = dlsym(RTLD_NEXT, "shmem_short_inc");
  }
  libshmem_short_inc (a1, a4);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_short_inc_184, a1, a4);
}

void shmem_int_inc (int*  a1, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_int_inc_185, a1, a4);
  if (!libshmem_int_inc) { 
    libshmem_int_inc = dlsym(RTLD_NEXT, "shmem_int_inc");
  }
  libshmem_int_inc (a1, a4);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_int_inc_186, a1, a4);
}

void shmem_long_inc (long*  a1, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_long_inc_187, a1, a4);
  if (!libshmem_long_inc) { 
    libshmem_long_inc = dlsym(RTLD_NEXT, "shmem_long_inc");
  }
  libshmem_long_inc (a1, a4);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_long_inc_188, a1, a4);
}

void shmem_longlong_inc (long long*  a1, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_longlong_inc_189, a1, a4);
  if (!libshmem_longlong_inc) { 
    libshmem_longlong_inc = dlsym(RTLD_NEXT, "shmem_longlong_inc");
  }
  libshmem_longlong_inc (a1, a4);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_longlong_inc_190, a1, a4);
}

void shmem_short_wait (short*  a1, short a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_short_wait_191, a1, a4);
  if (!libshmem_short_wait) { 
    libshmem_short_wait = dlsym(RTLD_NEXT, "shmem_short_wait");
  }
  libshmem_short_wait (a1, a4);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_short_wait_192, a1, a4);
}

void shmem_int_wait (int*  a1, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_int_wait_193, a1, a4);
  if (!libshmem_int_wait) { 
    libshmem_int_wait = dlsym(RTLD_NEXT, "shmem_int_wait");
  }
  libshmem_int_wait (a1, a4);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_int_wait_194, a1, a4);
}

void shmem_long_wait (long*  a1, long a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_long_wait_195, a1, a4);
  if (!libshmem_long_wait) { 
    libshmem_long_wait = dlsym(RTLD_NEXT, "shmem_long_wait");
  }
  libshmem_long_wait (a1, a4);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_long_wait_196, a1, a4);
}

void shmem_longlong_wait (long long*  a1, long long a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_longlong_wait_197, a1, a4);
  if (!libshmem_longlong_wait) { 
    libshmem_longlong_wait = dlsym(RTLD_NEXT, "shmem_longlong_wait");
  }
  libshmem_longlong_wait (a1, a4);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_longlong_wait_198, a1, a4);
}

void shmem_wait (long*  a1, long a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_wait_199, a1, a4);
  if (!libshmem_wait) { 
    libshmem_wait = dlsym(RTLD_NEXT, "shmem_wait");
  }
  libshmem_wait (a1, a4);
  EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_wait_200, a1, a4);
}

void shmem_short_wait_until (short*  a1, int a3, short a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_short_wait_until_201, a1, a3, a4);
  if (!libshmem_short_wait_until) { 
    libshmem_short_wait_until = dlsym(RTLD_NEXT, "shmem_short_wait_until");
  }
  libshmem_short_wait_until (a1, a3, a4);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_short_wait_until_202, a1, a3, a4);
}

void shmem_int_wait_until (int*  a1, int a2, int a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_int_wait_until_203, a1, a2, a4);
  if (!libshmem_int_wait_until) { 
    libshmem_int_wait_until = dlsym(RTLD_NEXT, "shmem_int_wait_until");
  }
  libshmem_int_wait_until (a1, a2, a4);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_int_wait_until_204, a1, a2, a4);
}

void shmem_long_wait_until (long*  a1, int a2, long a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_long_wait_until_205, a1, a2, a4);
  if (!libshmem_long_wait_until) { 
    libshmem_long_wait_until = dlsym(RTLD_NEXT, "shmem_long_wait_until");
  }
  libshmem_long_wait_until (a1, a2, a4);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_long_wait_until_206, a1, a2, a4);
}

void shmem_longlong_wait_until (long long*  a1, int a2, long long a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_longlong_wait_until_207, a1, a2, a4);
  if (!libshmem_longlong_wait_until) { 
    libshmem_longlong_wait_until = dlsym(RTLD_NEXT, "shmem_longlong_wait_until");
  }
  libshmem_longlong_wait_until (a1, a2, a4);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_longlong_wait_until_208, a1, a2, a4);
}

void shmem_wait_until (long*  a1, int a2, long a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_wait_until_209, a1, a2, a4);
  if (!libshmem_wait_until) { 
    libshmem_wait_until = dlsym(RTLD_NEXT, "shmem_wait_until");
  }
  libshmem_wait_until (a1, a2, a4);
  EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_shmem_wait_until_210, a1, a2, a4);
}

void shmem_barrier_all () {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_0 (EZTRACE_shmem_shmem_barrier_all_211);
  if (!libshmem_barrier_all) { 
    libshmem_barrier_all = dlsym(RTLD_NEXT, "shmem_barrier_all");
  }
  libshmem_barrier_all ();
  EZTRACE_EVENT_PACKED_0 (EZTRACE_shmem_shmem_barrier_all_212);
}

void shmem_barrier (int a1, int a2, int a3, long*  a4) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_barrier_213, a1, a2, a3, a4);
  if (!libshmem_barrier) { 
    libshmem_barrier = dlsym(RTLD_NEXT, "shmem_barrier");
  }
  libshmem_barrier (a1, a2, a3, a4);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_barrier_214, a1, a2, a3, a4);
}

void shmem_fence () {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_0 (EZTRACE_shmem_shmem_fence_215);
  if (!libshmem_fence) { 
    libshmem_fence = dlsym(RTLD_NEXT, "shmem_fence");
  }
  libshmem_fence ();
  EZTRACE_EVENT_PACKED_0 (EZTRACE_shmem_shmem_fence_216);
}

void shmem_quiet () {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_0 (EZTRACE_shmem_shmem_quiet_217);
  if (!libshmem_quiet) { 
    libshmem_quiet = dlsym(RTLD_NEXT, "shmem_quiet");
  }
  libshmem_quiet ();
  EZTRACE_EVENT_PACKED_0 (EZTRACE_shmem_shmem_quiet_218);
}

void shmem_short_and_to_all (short*  a1, short*  a2, int a3, int b, int c, int d, short* e, long*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_and_to_all_219, a1, a2, a3, b);
  if (!libshmem_short_and_to_all) { 
    libshmem_short_and_to_all = dlsym(RTLD_NEXT, "shmem_short_and_to_all");
  }
  libshmem_short_and_to_all (a1, a2, a3, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_and_to_all_220, a1, a2, a3, b);
}

void shmem_int_and_to_all (int*  a1, int*  a2, int a3, int b, int c, int d, int*  e, long*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_and_to_all_221, a1, a2, a3, b);
  if (!libshmem_int_and_to_all) { 
    libshmem_int_and_to_all = dlsym(RTLD_NEXT, "shmem_int_and_to_all");
  }
  libshmem_int_and_to_all (a1, a2, a3, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_and_to_all_222, a1, a2, a3, b);
}

void shmem_long_and_to_all (long*  a1, long*  a2, int a3, int b, int c, int d, long*  e, long*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_and_to_all_223, a1, a2, a3, b);
  if (!libshmem_long_and_to_all) { 
    libshmem_long_and_to_all = dlsym(RTLD_NEXT, "shmem_long_and_to_all");
  }
  libshmem_long_and_to_all (a1, a2, a3, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_and_to_all_224, a1, a2, a3, b);
}

void shmem_longlong_and_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long* g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_and_to_all_225, a1, a2, b, c);
  if (!libshmem_longlong_and_to_all) { 
    libshmem_longlong_and_to_all = dlsym(RTLD_NEXT, "shmem_longlong_and_to_all");
  }
  libshmem_longlong_and_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_and_to_all_226, a1, a2, b, c);
}

void shmem_short_or_to_all (short*  a1, short*  a2, int b, int c, int d, int e, short* f, long* g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_or_to_all_227, a1, a2, b, c);
  if (!libshmem_short_or_to_all) { 
    libshmem_short_or_to_all = dlsym(RTLD_NEXT, "shmem_short_or_to_all");
  }
  libshmem_short_or_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_or_to_all_228, a1, a2, b, c);
}

void shmem_int_or_to_all (int*  a1, int*  a2, int c, int d, int e, int f, int*  g, long*  h) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_or_to_all_229, a1, a2, c, d);
  if (!libshmem_int_or_to_all) { 
    libshmem_int_or_to_all = dlsym(RTLD_NEXT, "shmem_int_or_to_all");
  }
  libshmem_int_or_to_all (a1, a2, c, d, e, f, g, h);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_or_to_all_230, a1, a2, c, d);
}

void shmem_long_or_to_all (long*  a1, long*  a2, int c, int d, int e, int f, long* g, long*  h) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_or_to_all_231, a1, a2, c, d);
  if (!libshmem_long_or_to_all) { 
    libshmem_long_or_to_all = dlsym(RTLD_NEXT, "shmem_long_or_to_all");
  }
  libshmem_long_or_to_all (a1, a2, c, d, e, f, g, h);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_or_to_all_232, a1, a2, c, d);
}

void shmem_longlong_or_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_or_to_all_233, a1, a2, b, c);
  if (!libshmem_longlong_or_to_all) { 
    libshmem_longlong_or_to_all = dlsym(RTLD_NEXT, "shmem_longlong_or_to_all");
  }
  libshmem_longlong_or_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_or_to_all_234, a1, a2, b, c);
}

void shmem_short_xor_to_all (short*  a1, short*  a2, int b, int c, int d, int e, short*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_xor_to_all_235, a1, a2, b, c);
  if (!libshmem_short_xor_to_all) { 
    libshmem_short_xor_to_all = dlsym(RTLD_NEXT, "shmem_short_xor_to_all");
  }
  libshmem_short_xor_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_xor_to_all_236, a1, a2, b, c);
}

void shmem_int_xor_to_all (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_xor_to_all_237, a1, a2, b, c);
  if (!libshmem_int_xor_to_all) { 
    libshmem_int_xor_to_all = dlsym(RTLD_NEXT, "shmem_int_xor_to_all");
  }
  libshmem_int_xor_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_xor_to_all_238, a1, a2, b, c);
}

void shmem_long_xor_to_all (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_xor_to_all_239, a1, a2, b, c);
  if (!libshmem_long_xor_to_all) { 
    libshmem_long_xor_to_all = dlsym(RTLD_NEXT, "shmem_long_xor_to_all");
  }
  libshmem_long_xor_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_xor_to_all_240, a1, a2, b, c);
}

void shmem_longlong_xor_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_xor_to_all_241, a1, a2, b, c);
  if (!libshmem_longlong_xor_to_all) { 
    libshmem_longlong_xor_to_all = dlsym(RTLD_NEXT, "shmem_longlong_xor_to_all");
  }
  libshmem_longlong_xor_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_xor_to_all_242, a1, a2, b, c);
}

void shmem_short_max_to_all (short*  a1, short*  a2, int b, int c, int d, int e, short*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_max_to_all_243, a1, a2, b, c);
  if (!libshmem_short_max_to_all) { 
    libshmem_short_max_to_all = dlsym(RTLD_NEXT, "shmem_short_max_to_all");
  }
  libshmem_short_max_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_max_to_all_244, a1, a2, b, c);
}

void shmem_int_max_to_all (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_max_to_all_245, a1, a2, b, c);
  if (!libshmem_int_max_to_all) { 
    libshmem_int_max_to_all = dlsym(RTLD_NEXT, "shmem_int_max_to_all");
  }
  libshmem_int_max_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_max_to_all_246, a1, a2, b, c);
}

void shmem_long_max_to_all (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_max_to_all_247, a1, a2, b, c);
  if (!libshmem_long_max_to_all) { 
    libshmem_long_max_to_all = dlsym(RTLD_NEXT, "shmem_long_max_to_all");
  }
  libshmem_long_max_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_max_to_all_248, a1, a2, b, c);
}

void shmem_float_max_to_all (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_max_to_all_249, a1, a2, b, c);
  if (!libshmem_float_max_to_all) { 
    libshmem_float_max_to_all = dlsym(RTLD_NEXT, "shmem_float_max_to_all");
  }
  libshmem_float_max_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_max_to_all_250, a1, a2, b, c);
}

void shmem_double_max_to_all (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_max_to_all_251, a1, a2, b, c);
  if (!libshmem_double_max_to_all) { 
    libshmem_double_max_to_all = dlsym(RTLD_NEXT, "shmem_double_max_to_all");
  }
  libshmem_double_max_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_max_to_all_252, a1, a2, b, c);
}

void shmem_longlong_max_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_max_to_all_253, a1, a2, b, c);
  if (!libshmem_longlong_max_to_all) { 
    libshmem_longlong_max_to_all = dlsym(RTLD_NEXT, "shmem_longlong_max_to_all");
  }
  libshmem_longlong_max_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_max_to_all_254, a1, a2, b, c);
}

void shmem_longdouble_max_to_all (long double*  a1, long double*  a2, int b, int c, int d, int e, long double*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_max_to_all_255, a1, a2, b, c);
  if (!libshmem_longdouble_max_to_all) { 
    libshmem_longdouble_max_to_all = dlsym(RTLD_NEXT, "shmem_longdouble_max_to_all");
  }
  libshmem_longdouble_max_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_max_to_all_256, a1, a2, b, c);
}

void shmem_short_min_to_all (short*  a1, short*  a2, int b, int c, int d, int e, short*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_min_to_all_257, a1, a2, b, c);
  if (!libshmem_short_min_to_all) { 
    libshmem_short_min_to_all = dlsym(RTLD_NEXT, "shmem_short_min_to_all");
  }
  libshmem_short_min_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_min_to_all_258, a1, a2, b, c);
}

void shmem_int_min_to_all (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_min_to_all_259, a1, a2, b, c);
  if (!libshmem_int_min_to_all) { 
    libshmem_int_min_to_all = dlsym(RTLD_NEXT, "shmem_int_min_to_all");
  }
  libshmem_int_min_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_min_to_all_260, a1, a2, b, c);
}

void shmem_long_min_to_all (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_min_to_all_261, a1, a2, b, c);
  if (!libshmem_long_min_to_all) { 
    libshmem_long_min_to_all = dlsym(RTLD_NEXT, "shmem_long_min_to_all");
  }
  libshmem_long_min_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_min_to_all_262, a1, a2, b, c);
}

void shmem_float_min_to_all (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_min_to_all_263, a1, a2, b, c);
  if (!libshmem_float_min_to_all) { 
    libshmem_float_min_to_all = dlsym(RTLD_NEXT, "shmem_float_min_to_all");
  }
  libshmem_float_min_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_min_to_all_264, a1, a2, b, c);
}

void shmem_double_min_to_all (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_min_to_all_265, a1, a2, b, c);
  if (!libshmem_double_min_to_all) { 
    libshmem_double_min_to_all = dlsym(RTLD_NEXT, "shmem_double_min_to_all");
  }
  libshmem_double_min_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_min_to_all_266, a1, a2, b, c);
}

void shmem_longlong_min_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_min_to_all_267, a1, a2, b, c);
  if (!libshmem_longlong_min_to_all) { 
    libshmem_longlong_min_to_all = dlsym(RTLD_NEXT, "shmem_longlong_min_to_all");
  }
  libshmem_longlong_min_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_min_to_all_268, a1, a2, b, c);
}

void shmem_longdouble_min_to_all (long double*  a1, long double*  a2, int b, int c, int d, int e, long double* f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_min_to_all_269, a1, a2, b, c);
  if (!libshmem_longdouble_min_to_all) { 
    libshmem_longdouble_min_to_all = dlsym(RTLD_NEXT, "shmem_longdouble_min_to_all");
  }
  libshmem_longdouble_min_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_min_to_all_270, a1, a2, b, c);
}

void shmem_short_sum_to_all (short*  a1, short*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_sum_to_all_271, a1, a2, b, c);
  if (!libshmem_short_sum_to_all) { 
    libshmem_short_sum_to_all = dlsym(RTLD_NEXT, "shmem_short_sum_to_all");
  }
  libshmem_short_sum_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_sum_to_all_272, a1, a2, b, c);
}

void shmem_int_sum_to_all (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_sum_to_all_273, a1, a2, b, c);
  if (!libshmem_int_sum_to_all) { 
    libshmem_int_sum_to_all = dlsym(RTLD_NEXT, "shmem_int_sum_to_all");
  }
  libshmem_int_sum_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_sum_to_all_274, a1, a2, b, c);
}

void shmem_long_sum_to_all (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_sum_to_all_275, a1, a2, b, c);
  if (!libshmem_long_sum_to_all) { 
    libshmem_long_sum_to_all = dlsym(RTLD_NEXT, "shmem_long_sum_to_all");
  }
  libshmem_long_sum_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_sum_to_all_276, a1, a2, b, c);
}

void shmem_float_sum_to_all (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_sum_to_all_277, a1, a2, b, c);
  if (!libshmem_float_sum_to_all) { 
    libshmem_float_sum_to_all = dlsym(RTLD_NEXT, "shmem_float_sum_to_all");
  }
  libshmem_float_sum_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_sum_to_all_278, a1, a2, b, c);
}

void shmem_double_sum_to_all (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_sum_to_all_279, a1, a2, b, c);
  if (!libshmem_double_sum_to_all) { 
    libshmem_double_sum_to_all = dlsym(RTLD_NEXT, "shmem_double_sum_to_all");
  }
  libshmem_double_sum_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_sum_to_all_280, a1, a2, b, c);
}

void shmem_longlong_sum_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_sum_to_all_281, a1, a2, b, c);
  if (!libshmem_longlong_sum_to_all) { 
    libshmem_longlong_sum_to_all = dlsym(RTLD_NEXT, "shmem_longlong_sum_to_all");
  }
  libshmem_longlong_sum_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_sum_to_all_282, a1, a2, b, c);
}

void shmem_longdouble_sum_to_all (long double*  a1, long double*  a2, int b, int c, int d, int e, long double* f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_sum_to_all_283, a1, a2, b, c);
  if (!libshmem_longdouble_sum_to_all) { 
    libshmem_longdouble_sum_to_all = dlsym(RTLD_NEXT, "shmem_longdouble_sum_to_all");
  }
  libshmem_longdouble_sum_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_sum_to_all_284, a1, a2, b, c);
}

void shmem_short_prod_to_all (short*  a1, short*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_prod_to_all_285, a1, a2, b, c);
  if (!libshmem_short_prod_to_all) { 
    libshmem_short_prod_to_all = dlsym(RTLD_NEXT, "shmem_short_prod_to_all");
  }
  libshmem_short_prod_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_prod_to_all_286, a1, a2, b, c);
}

void shmem_int_prod_to_all (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_prod_to_all_287, a1, a2, b, c);
  if (!libshmem_int_prod_to_all) { 
    libshmem_int_prod_to_all = dlsym(RTLD_NEXT, "shmem_int_prod_to_all");
  }
  libshmem_int_prod_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_prod_to_all_288, a1, a2, b, c);
}

void shmem_long_prod_to_all (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_prod_to_all_289, a1, a2, b, c);
  if (!libshmem_long_prod_to_all) { 
    libshmem_long_prod_to_all = dlsym(RTLD_NEXT, "shmem_long_prod_to_all");
  }
  libshmem_long_prod_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_prod_to_all_290, a1, a2, b, c);
}

void shmem_float_prod_to_all (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_prod_to_all_291, a1, a2, b, c);
  if (!libshmem_float_prod_to_all) { 
    libshmem_float_prod_to_all = dlsym(RTLD_NEXT, "shmem_float_prod_to_all");
  }
  libshmem_float_prod_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_prod_to_all_292, a1, a2, b, c);
}

void shmem_double_prod_to_all (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_prod_to_all_293, a1, a2, b, c);
  if (!libshmem_double_prod_to_all) { 
    libshmem_double_prod_to_all = dlsym(RTLD_NEXT, "shmem_double_prod_to_all");
  }
  libshmem_double_prod_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_prod_to_all_294, a1, a2, b, c);
}

void shmem_longlong_prod_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long*  f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_prod_to_all_295, a1, a2, b, c);
  if (!libshmem_longlong_prod_to_all) { 
    libshmem_longlong_prod_to_all = dlsym(RTLD_NEXT, "shmem_longlong_prod_to_all");
  }
  libshmem_longlong_prod_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_prod_to_all_296, a1, a2, b, c);
}

void shmem_longdouble_prod_to_all (long double*  a1, long double*  a2, int b, int c, int d, int e, long double* f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_prod_to_all_297, a1, a2, b, c);
  if (!libshmem_longdouble_prod_to_all) { 
    libshmem_longdouble_prod_to_all = dlsym(RTLD_NEXT, "shmem_longdouble_prod_to_all");
  }
  libshmem_longdouble_prod_to_all (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longdouble_prod_to_all_298, a1, a2, b, c);
}

void shmem_collect32 (void*  a1, const void*  a2, size_t b, int c, int d, int e, long* f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_collect32_299, a1, a2, b, c);
  if (!libshmem_collect32) { 
    libshmem_collect32 = dlsym(RTLD_NEXT, "shmem_collect32");
  }
  libshmem_collect32 (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_collect32_300, a1, a2, b, c);
}

void shmem_collect64 (void*  a1, const void*  a2, size_t b, int c, int d, int e, long*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_collect64_301, a1, a2, b, c);
  if (!libshmem_collect64) { 
    libshmem_collect64 = dlsym(RTLD_NEXT, "shmem_collect64");
  }
  libshmem_collect64 (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_collect64_302, a1, a2, b, c);
}

void shmem_short_collect (short*  a1, const short*  a2, size_t b, int c, int d, int e, short*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_collect_303, a1, a2, b, c);
  if (!libshmem_short_collect) { 
    libshmem_short_collect = dlsym(RTLD_NEXT, "shmem_short_collect");
  }
  libshmem_short_collect (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_collect_304, a1, a2, b, c);
}

void shmem_int_collect (int*  a1, const int*  a2, size_t b, int c, int d, int e, int*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_collect_305, a1, a2, b, c);
  if (!libshmem_int_collect) { 
    libshmem_int_collect = dlsym(RTLD_NEXT, "shmem_int_collect");
  }
  libshmem_int_collect (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_collect_306, a1, a2, b, c);
}

void shmem_long_collect (long*  a1, const long*  a2, size_t b, int c, int d, int e, long*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_collect_307, a1, a2, b, c);
  if (!libshmem_long_collect) { 
    libshmem_long_collect = dlsym(RTLD_NEXT, "shmem_long_collect");
  }
  libshmem_long_collect (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_collect_308, a1, a2, b, c);
}

void shmem_longlong_collect (long long*  a1, const long long*  a2, size_t b, int c, int d, int e, long long*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_collect_309, a1, a2, b, c);
  if (!libshmem_longlong_collect) { 
    libshmem_longlong_collect = dlsym(RTLD_NEXT, "shmem_longlong_collect");
  }
  libshmem_longlong_collect (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_collect_310, a1, a2, b, c);
}

void shmem_float_collect (float*  a1, const float*  a2, size_t b, int c, int d, int e, float*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_collect_311, a1, a2, b, c);
  if (!libshmem_float_collect) { 
    libshmem_float_collect = dlsym(RTLD_NEXT, "shmem_float_collect");
  }
  libshmem_float_collect (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_collect_312, a1, a2, b, c);
}

void shmem_double_collect (double*  a1, const double*  a2, size_t b, int c, int d, int e, double*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_collect_313, a1, a2, b, c);
  if (!libshmem_double_collect) { 
    libshmem_double_collect = dlsym(RTLD_NEXT, "shmem_double_collect");
  }
  libshmem_double_collect (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_collect_314, a1, a2, b, c);
}

void shmem_fcollect32 (void*  a1, const void*  a2, size_t b, int c, int d, int e, long*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_fcollect32_315, a1, a2, b, c);
  if (!libshmem_fcollect32) { 
    libshmem_fcollect32 = dlsym(RTLD_NEXT, "shmem_fcollect32");
  }
  libshmem_fcollect32 (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_fcollect32_316, a1, a2, b, c);
}

void shmem_fcollect64 (void*  a1, const void*  a2, size_t b, int c, int d, int e, long*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_fcollect64_317, a1, a2, b, c);
  if (!libshmem_fcollect64) { 
    libshmem_fcollect64 = dlsym(RTLD_NEXT, "shmem_fcollect64");
  }
  libshmem_fcollect64 (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_fcollect64_318, a1, a2, b, c);
}

void shmem_short_fcollect (short*  a1, const short*  a2, size_t b, int c, int d, int e, short*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_fcollect_319, a1, a2, b, c);
  if (!libshmem_short_fcollect) { 
    libshmem_short_fcollect = dlsym(RTLD_NEXT, "shmem_short_fcollect");
  }
  libshmem_short_fcollect (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_fcollect_320, a1, a2, b, c);
}

void shmem_int_fcollect (int*  a1, const int*  a2, size_t b, int c, int d, int e, int*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_fcollect_321, a1, a2, b, c);
  if (!libshmem_int_fcollect) { 
    libshmem_int_fcollect = dlsym(RTLD_NEXT, "shmem_int_fcollect");
  }
  libshmem_int_fcollect (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_fcollect_322, a1, a2, b, c);
}

void shmem_long_fcollect (long*  a1, const long*  a2, size_t b, int c, int d, int e, long*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_fcollect_323, a1, a2, b, c);
  if (!libshmem_long_fcollect) { 
    libshmem_long_fcollect = dlsym(RTLD_NEXT, "shmem_long_fcollect");
  }
  libshmem_long_fcollect (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_fcollect_324, a1, a2, b, c);
}

void shmem_longlong_fcollect (long long*  a1, const long long*  a2, size_t b, int c, int d, int e, long long*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_fcollect_325, a1, a2, b, c);
  if (!libshmem_longlong_fcollect) { 
    libshmem_longlong_fcollect = dlsym(RTLD_NEXT, "shmem_longlong_fcollect");
  }
  libshmem_longlong_fcollect (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_fcollect_326, a1, a2, b, c);
}

void shmem_float_fcollect (float*  a1, const float*  a2, size_t b, int c, int d, int e, float*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_fcollect_327, a1, a2, b, c);
  if (!libshmem_float_fcollect) { 
    libshmem_float_fcollect = dlsym(RTLD_NEXT, "shmem_float_fcollect");
  }
  libshmem_float_fcollect (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_fcollect_328, a1, a2, b, c);
}

void shmem_double_fcollect (double*  a1, const double*  a2, size_t b, int c, int d, int e, double*  f) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_fcollect_329, a1, a2, b, c);
  if (!libshmem_double_fcollect) { 
    libshmem_double_fcollect = dlsym(RTLD_NEXT, "shmem_double_fcollect");
  }
  libshmem_double_fcollect (a1, a2, b, c, d, e, f);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_fcollect_330, a1, a2, b, c);
}

void shmem_broadcast32 (void*  a1, const void*  a2, size_t b, int c, int d, int e, int f, long* g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_broadcast32_331, a1, a2, b, c);
  if (!libshmem_broadcast32) { 
    libshmem_broadcast32 = dlsym(RTLD_NEXT, "shmem_broadcast32");
  }
  libshmem_broadcast32 (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_broadcast32_332, a1, a2, b, c);
}

void shmem_broadcast64 (void*  a1, const void*  a2, size_t b, int c, int d, int e, int f, long* g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_broadcast64_333, a1, a2, b, c);
  if (!libshmem_broadcast64) { 
    libshmem_broadcast64 = dlsym(RTLD_NEXT, "shmem_broadcast64");
  }
  libshmem_broadcast64 (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_broadcast64_334, a1, a2, b, c);
}

void shmem_short_broadcast (short*  a1, const short*  a2, size_t b, int c, int d, int e, int f, short*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_broadcast_335, a1, a2, b, c);
  if (!libshmem_short_broadcast) { 
    libshmem_short_broadcast = dlsym(RTLD_NEXT, "shmem_short_broadcast");
  }
  libshmem_short_broadcast (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_short_broadcast_336, a1, a2, b, c);
}

void shmem_int_broadcast (int*  a1, const int*  a2, size_t b, int c, int d, int e, int f, int*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_broadcast_337, a1, a2, b, c);
  if (!libshmem_int_broadcast) { 
    libshmem_int_broadcast = dlsym(RTLD_NEXT, "shmem_int_broadcast");
  }
  libshmem_int_broadcast (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_int_broadcast_338, a1, a2, b, c);
}

void shmem_long_broadcast (long*  a1, const long*  a2, size_t b, int c, int d, int e, int f, long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_broadcast_339, a1, a2, b, c);
  if (!libshmem_long_broadcast) { 
    libshmem_long_broadcast = dlsym(RTLD_NEXT, "shmem_long_broadcast");
  }
  libshmem_long_broadcast (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_long_broadcast_340, a1, a2, b, c);
}

void shmem_longlong_broadcast (long long*  a1, const long long*  a2, size_t b, int c, int d, int e, int f, long long*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_broadcast_341, a1, a2, b, c);
  if (!libshmem_longlong_broadcast) { 
    libshmem_longlong_broadcast = dlsym(RTLD_NEXT, "shmem_longlong_broadcast");
  }
  libshmem_longlong_broadcast (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_longlong_broadcast_342, a1, a2, b, c);
}

void shmem_float_broadcast (float*  a1, const float*  a2, size_t b, int c, int d, int e, int f, float*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_broadcast_343, a1, a2, b, c);
  if (!libshmem_float_broadcast) { 
    libshmem_float_broadcast = dlsym(RTLD_NEXT, "shmem_float_broadcast");
  }
  libshmem_float_broadcast (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_float_broadcast_344, a1, a2, b, c);
}

void shmem_double_broadcast (double*  a1, const double*  a2, size_t b, int c, int d, int e, int f, double*  g) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_broadcast_345, a1, a2, b, c);
  if (!libshmem_double_broadcast) { 
    libshmem_double_broadcast = dlsym(RTLD_NEXT, "shmem_double_broadcast");
  }
  libshmem_double_broadcast (a1, a2, b, c, d, e, f, g);
  EZTRACE_EVENT_PACKED_4 (EZTRACE_shmem_shmem_double_broadcast_346, a1, a2, b, c);
}

void shmem_set_lock (long*  a) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_1 (EZTRACE_shmem_shmem_set_lock_347, a);
  if (!libshmem_set_lock) { 
    libshmem_set_lock = dlsym(RTLD_NEXT, "shmem_set_lock");
  }
  libshmem_set_lock (a);
  EZTRACE_EVENT_PACKED_1 (EZTRACE_shmem_shmem_set_lock_348, a);
}

void shmem_clear_lock (long* a) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_1 (EZTRACE_shmem_shmem_clear_lock_349, a);
  if (!libshmem_clear_lock) { 
    libshmem_clear_lock = dlsym(RTLD_NEXT, "shmem_clear_lock");
  }
  libshmem_clear_lock (a);
  EZTRACE_EVENT_PACKED_1 (EZTRACE_shmem_shmem_clear_lock_350, a);
}

int shmem_test_lock (long*  a) {
  FUNCTION_ENTRY;
  EZTRACE_EVENT_PACKED_1 (EZTRACE_shmem_shmem_test_lock_351, a);
  if (!libshmem_test_lock) { 
    libshmem_test_lock = dlsym(RTLD_NEXT, "shmem_test_lock");
  }
  int ret = libshmem_test_lock (a);
  EZTRACE_EVENT_PACKED_1 (EZTRACE_shmem_shmem_test_lock_352, a);
  return ret;
}



START_INTERCEPT
INTERCEPT2("start_pes", libstart_pes)

  INTERCEPT2("shmem_n_pes", libshmem_n_pes)

  INTERCEPT2("shmem_my_pe", libshmem_my_pe)

  INTERCEPT2("shmem_pe_accessible", libshmem_pe_accessible)

  INTERCEPT2("shmem_addr_accessible", libshmem_addr_accessible)

  INTERCEPT2("shmalloc", libshmalloc)

  INTERCEPT2("shmemalign", libshmemalign)

  INTERCEPT2("shrealloc", libshrealloc)

  INTERCEPT2("shfree", libshfree)

  INTERCEPT2("shmem_ptr", libshmem_ptr)

  INTERCEPT2("shmem_short_p", libshmem_short_p)

  INTERCEPT2("shmem_int_p", libshmem_int_p)

  INTERCEPT2("shmem_long_p", libshmem_long_p)

  INTERCEPT2("shmem_float_p", libshmem_float_p)

  INTERCEPT2("shmem_double_p", libshmem_double_p)

  INTERCEPT2("shmem_longlong_p", libshmem_longlong_p)

INTERCEPT2("shmem_longdouble_p", libshmem_longdouble_p)

INTERCEPT2("shmem_char_put", libshmem_char_put)

INTERCEPT2("shmem_short_put", libshmem_short_put)

INTERCEPT2("shmem_int_put", libshmem_int_put)

INTERCEPT2("shmem_long_put", libshmem_long_put)

INTERCEPT2("shmem_float_put", libshmem_float_put)

INTERCEPT2("shmem_double_put", libshmem_double_put)

INTERCEPT2("shmem_longlong_put", libshmem_longlong_put)

INTERCEPT2("shmem_longdouble_put", libshmem_longdouble_put)

INTERCEPT2("shmem_put32", libshmem_put32)

INTERCEPT2("shmem_put64", libshmem_put64)

INTERCEPT2("shmem_put128", libshmem_put128)

INTERCEPT2("shmem_putmem", libshmem_putmem)

INTERCEPT2("shmem_short_iput", libshmem_short_iput)

INTERCEPT2("shmem_int_iput", libshmem_int_iput)

INTERCEPT2("shmem_float_iput", libshmem_float_iput)

INTERCEPT2("shmem_long_iput", libshmem_long_iput)

INTERCEPT2("shmem_double_iput", libshmem_double_iput)

INTERCEPT2("shmem_longlong_iput", libshmem_longlong_iput)

INTERCEPT2("shmem_longdouble_iput", libshmem_longdouble_iput)

INTERCEPT2("shmem_iput32", libshmem_iput32)

INTERCEPT2("shmem_iput64", libshmem_iput64)

INTERCEPT2("shmem_iput128", libshmem_iput128)

INTERCEPT2("shmem_short_g", libshmem_short_g)

INTERCEPT2("shmem_int_g", libshmem_int_g)

INTERCEPT2("shmem_long_g", libshmem_long_g)

INTERCEPT2("shmem_float_g", libshmem_float_g)

INTERCEPT2("shmem_double_g", libshmem_double_g)

INTERCEPT2("shmem_longlong_g", libshmem_longlong_g)

INTERCEPT2("shmem_longdouble_g", libshmem_longdouble_g)

INTERCEPT2("shmem_char_get", libshmem_char_get)

INTERCEPT2("shmem_short_get", libshmem_short_get)

INTERCEPT2("shmem_int_get", libshmem_int_get)

INTERCEPT2("shmem_long_get", libshmem_long_get)

INTERCEPT2("shmem_float_get", libshmem_float_get)

INTERCEPT2("shmem_double_get", libshmem_double_get)

INTERCEPT2("shmem_longlong_get", libshmem_longlong_get)

INTERCEPT2("shmem_longdouble_get", libshmem_longdouble_get)

INTERCEPT2("shmem_get32", libshmem_get32)

INTERCEPT2("shmem_get64", libshmem_get64)

INTERCEPT2("shmem_get128", libshmem_get128)

INTERCEPT2("shmem_getmem", libshmem_getmem)

INTERCEPT2("shmem_iget32", libshmem_iget32)

INTERCEPT2("shmem_iget64", libshmem_iget64)

INTERCEPT2("shmem_iget128", libshmem_iget128)

INTERCEPT2("shmem_short_iget", libshmem_short_iget)

INTERCEPT2("shmem_int_iget", libshmem_int_iget)

INTERCEPT2("shmem_long_iget", libshmem_long_iget)

INTERCEPT2("shmem_double_iget", libshmem_double_iget)

INTERCEPT2("shmem_float_iget", libshmem_float_iget)

INTERCEPT2("shmem_longlong_iget", libshmem_longlong_iget)

INTERCEPT2("shmem_longdouble_iget", libshmem_longdouble_iget)

INTERCEPT2("shmem_short_swap", libshmem_short_swap)

INTERCEPT2("shmem_int_swap", libshmem_int_swap)

INTERCEPT2("shmem_long_swap", libshmem_long_swap)

INTERCEPT2("shmem_swap", libshmem_swap)

INTERCEPT2("shmem_longlong_swap", libshmem_longlong_swap)

INTERCEPT2("shmem_float_swap", libshmem_float_swap)

INTERCEPT2("shmem_double_swap", libshmem_double_swap)

INTERCEPT2("shmem_short_cswap", libshmem_short_cswap)

INTERCEPT2("shmem_int_cswap", libshmem_int_cswap)

INTERCEPT2("shmem_long_cswap", libshmem_long_cswap)

INTERCEPT2("shmem_longlong_cswap", libshmem_longlong_cswap)

INTERCEPT2("shmem_short_fadd", libshmem_short_fadd)

INTERCEPT2("shmem_int_fadd", libshmem_int_fadd)

INTERCEPT2("shmem_long_fadd", libshmem_long_fadd)

INTERCEPT2("shmem_longlong_fadd", libshmem_longlong_fadd)

INTERCEPT2("shmem_short_finc", libshmem_short_finc)

INTERCEPT2("shmem_int_finc", libshmem_int_finc)

INTERCEPT2("shmem_long_finc", libshmem_long_finc)

INTERCEPT2("shmem_longlong_finc", libshmem_longlong_finc)

INTERCEPT2("shmem_short_add", libshmem_short_add)

INTERCEPT2("shmem_int_add", libshmem_int_add)

INTERCEPT2("shmem_long_add", libshmem_long_add)

INTERCEPT2("shmem_longlong_add", libshmem_longlong_add)

INTERCEPT2("shmem_short_inc", libshmem_short_inc)

INTERCEPT2("shmem_int_inc", libshmem_int_inc)

INTERCEPT2("shmem_long_inc", libshmem_long_inc)

INTERCEPT2("shmem_longlong_inc", libshmem_longlong_inc)

INTERCEPT2("shmem_short_wait", libshmem_short_wait)

INTERCEPT2("shmem_int_wait", libshmem_int_wait)

INTERCEPT2("shmem_long_wait", libshmem_long_wait)

INTERCEPT2("shmem_longlong_wait", libshmem_longlong_wait)

INTERCEPT2("shmem_wait", libshmem_wait)

INTERCEPT2("shmem_short_wait_until", libshmem_short_wait_until)

INTERCEPT2("shmem_int_wait_until", libshmem_int_wait_until)

INTERCEPT2("shmem_long_wait_until", libshmem_long_wait_until)

INTERCEPT2("shmem_longlong_wait_until", libshmem_longlong_wait_until)

INTERCEPT2("shmem_wait_until", libshmem_wait_until)

INTERCEPT2("shmem_barrier_all", libshmem_barrier_all)

INTERCEPT2("shmem_barrier", libshmem_barrier)

INTERCEPT2("shmem_fence", libshmem_fence)

INTERCEPT2("shmem_quiet", libshmem_quiet)

INTERCEPT2("shmem_short_and_to_all", libshmem_short_and_to_all)

INTERCEPT2("shmem_int_and_to_all", libshmem_int_and_to_all)

INTERCEPT2("shmem_long_and_to_all", libshmem_long_and_to_all)

INTERCEPT2("shmem_longlong_and_to_all", libshmem_longlong_and_to_all)

INTERCEPT2("shmem_short_or_to_all", libshmem_short_or_to_all)

INTERCEPT2("shmem_int_or_to_all", libshmem_int_or_to_all)

INTERCEPT2("shmem_long_or_to_all", libshmem_long_or_to_all)

INTERCEPT2("shmem_longlong_or_to_all", libshmem_longlong_or_to_all)

INTERCEPT2("shmem_short_xor_to_all", libshmem_short_xor_to_all)

INTERCEPT2("shmem_int_xor_to_all", libshmem_int_xor_to_all)

INTERCEPT2("shmem_long_xor_to_all", libshmem_long_xor_to_all)

INTERCEPT2("shmem_longlong_xor_to_all", libshmem_longlong_xor_to_all)

INTERCEPT2("shmem_short_max_to_all", libshmem_short_max_to_all)

INTERCEPT2("shmem_int_max_to_all", libshmem_int_max_to_all)

INTERCEPT2("shmem_long_max_to_all", libshmem_long_max_to_all)

INTERCEPT2("shmem_float_max_to_all", libshmem_float_max_to_all)

INTERCEPT2("shmem_double_max_to_all", libshmem_double_max_to_all)

INTERCEPT2("shmem_longlong_max_to_all", libshmem_longlong_max_to_all)

INTERCEPT2("shmem_longdouble_max_to_all", libshmem_longdouble_max_to_all)

INTERCEPT2("shmem_short_min_to_all", libshmem_short_min_to_all)

INTERCEPT2("shmem_int_min_to_all", libshmem_int_min_to_all)

INTERCEPT2("shmem_long_min_to_all", libshmem_long_min_to_all)

INTERCEPT2("shmem_float_min_to_all", libshmem_float_min_to_all)

INTERCEPT2("shmem_double_min_to_all", libshmem_double_min_to_all)

INTERCEPT2("shmem_longlong_min_to_all", libshmem_longlong_min_to_all)

INTERCEPT2("shmem_longdouble_min_to_all", libshmem_longdouble_min_to_all)

INTERCEPT2("shmem_short_sum_to_all", libshmem_short_sum_to_all)

INTERCEPT2("shmem_int_sum_to_all", libshmem_int_sum_to_all)

INTERCEPT2("shmem_long_sum_to_all", libshmem_long_sum_to_all)

INTERCEPT2("shmem_float_sum_to_all", libshmem_float_sum_to_all)

INTERCEPT2("shmem_double_sum_to_all", libshmem_double_sum_to_all)

INTERCEPT2("shmem_longlong_sum_to_all", libshmem_longlong_sum_to_all)

INTERCEPT2("shmem_longdouble_sum_to_all", libshmem_longdouble_sum_to_all)

INTERCEPT2("shmem_short_prod_to_all", libshmem_short_prod_to_all)

INTERCEPT2("shmem_int_prod_to_all", libshmem_int_prod_to_all)

INTERCEPT2("shmem_long_prod_to_all", libshmem_long_prod_to_all)

INTERCEPT2("shmem_float_prod_to_all", libshmem_float_prod_to_all)

INTERCEPT2("shmem_double_prod_to_all", libshmem_double_prod_to_all)

INTERCEPT2("shmem_longlong_prod_to_all", libshmem_longlong_prod_to_all)

INTERCEPT2("shmem_longdouble_prod_to_all", libshmem_longdouble_prod_to_all)

INTERCEPT2("shmem_collect32", libshmem_collect32)

INTERCEPT2("shmem_collect64", libshmem_collect64)

INTERCEPT2("shmem_short_collect", libshmem_short_collect)

INTERCEPT2("shmem_int_collect", libshmem_int_collect)

INTERCEPT2("shmem_long_collect", libshmem_long_collect)

INTERCEPT2("shmem_longlong_collect", libshmem_longlong_collect)

INTERCEPT2("shmem_float_collect", libshmem_float_collect)

INTERCEPT2("shmem_double_collect", libshmem_double_collect)

INTERCEPT2("shmem_fcollect32", libshmem_fcollect32)

INTERCEPT2("shmem_fcollect64", libshmem_fcollect64)

INTERCEPT2("shmem_short_fcollect", libshmem_short_fcollect)

INTERCEPT2("shmem_int_fcollect", libshmem_int_fcollect)

INTERCEPT2("shmem_long_fcollect", libshmem_long_fcollect)

INTERCEPT2("shmem_longlong_fcollect", libshmem_longlong_fcollect)

INTERCEPT2("shmem_float_fcollect", libshmem_float_fcollect)

INTERCEPT2("shmem_double_fcollect", libshmem_double_fcollect)

INTERCEPT2("shmem_broadcast32", libshmem_broadcast32)

INTERCEPT2("shmem_broadcast64", libshmem_broadcast64)

INTERCEPT2("shmem_short_broadcast", libshmem_short_broadcast)

INTERCEPT2("shmem_int_broadcast", libshmem_int_broadcast)

INTERCEPT2("shmem_long_broadcast", libshmem_long_broadcast)

INTERCEPT2("shmem_longlong_broadcast", libshmem_longlong_broadcast)

INTERCEPT2("shmem_float_broadcast", libshmem_float_broadcast)

INTERCEPT2("shmem_double_broadcast", libshmem_double_broadcast)

INTERCEPT2("shmem_set_lock", libshmem_set_lock)

INTERCEPT2("shmem_clear_lock", libshmem_clear_lock)

INTERCEPT2("shmem_test_lock", libshmem_test_lock)


END_INTERCEPT

static void __shmem_init (void) __attribute__ ((constructor));
/* Initialize the current library */
static void
__shmem_init (void)
{
  DYNAMIC_INTERCEPT_ALL();

  /* start event recording */
#ifdef EZTRACE_AUTOSTART
  eztrace_start ();
#endif
  module_initialized = 1;
  
}

static void __shmem_conclude (void) __attribute__ ((destructor));
static void
__shmem_conclude (void)
{
  /* stop event recording */
  eztrace_stop ();
}
