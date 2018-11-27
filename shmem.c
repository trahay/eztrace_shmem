/*
 * Copyright (C) CNRS, INRIA, Université Bordeaux 1, Télécom SudParis
 * See COPYING in top-level directory.
 */
#include <assert.h>
#include "eztrace.h"
#include "eztrace_sampling.h"

#include "shmem_ev_codes.h"



void (*libshmem_init) ();

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


enum function {
  function_shmem_init,
  function_start_pes,
  function_shmem_n_pes,
  function_shmem_my_pe,
  function_shmem_pe_accessible,
  function_shmem_addr_accessible,
  function_shmalloc,
  function_shmemalign,
  function_shrealloc,
  function_shfree,
  function_shmem_ptr,
  function_shmem_short_p,
  function_shmem_int_p,
  function_shmem_long_p,
  function_shmem_float_p,
  function_shmem_double_p,
  function_shmem_longlong_p,
  function_shmem_longdouble_p,
  function_shmem_char_put,
  function_shmem_short_put,
  function_shmem_int_put,
  function_shmem_long_put,
  function_shmem_float_put,
  function_shmem_double_put,
  function_shmem_longlong_put,
  function_shmem_longdouble_put,
  function_shmem_put32,
  function_shmem_put64,
  function_shmem_put128,
  function_shmem_putmem,
  function_shmem_short_iput,
  function_shmem_int_iput,
  function_shmem_float_iput,
  function_shmem_long_iput,
  function_shmem_double_iput,
  function_shmem_longlong_iput,
  function_shmem_longdouble_iput,
  function_shmem_iput32,
  function_shmem_iput64,
  function_shmem_iput128,
  function_shmem_short_g,
  function_shmem_int_g,
  function_shmem_long_g,
  function_shmem_float_g,
  function_shmem_double_g,
  function_shmem_longlong_g,
  function_shmem_longdouble_g,
  function_shmem_char_get,
  function_shmem_short_get,
  function_shmem_int_get,
  function_shmem_long_get,
  function_shmem_float_get,
  function_shmem_double_get,
  function_shmem_longlong_get,
  function_shmem_longdouble_get,
  function_shmem_get32,
  function_shmem_get64,
  function_shmem_get128,
  function_shmem_getmem,
  function_shmem_iget32,
  function_shmem_iget64,
  function_shmem_iget128,
  function_shmem_short_iget,
  function_shmem_int_iget,
  function_shmem_long_iget,
  function_shmem_double_iget,
  function_shmem_float_iget,
  function_shmem_longlong_iget,
  function_shmem_longdouble_iget,
  function_shmem_short_swap,
  function_shmem_int_swap,
  function_shmem_long_swap,
  function_shmem_swap,
  function_shmem_longlong_swap,
  function_shmem_float_swap,
  function_shmem_double_swap,
  function_shmem_short_cswap,
  function_shmem_int_cswap,
  function_shmem_long_cswap,
  function_shmem_longlong_cswap,
  function_shmem_short_fadd,
  function_shmem_int_fadd,
  function_shmem_long_fadd,
  function_shmem_longlong_fadd,
  function_shmem_short_finc,
  function_shmem_int_finc,
  function_shmem_long_finc,
  function_shmem_longlong_finc,
  function_shmem_short_add,
  function_shmem_int_add,
  function_shmem_long_add,
  function_shmem_longlong_add,
  function_shmem_short_inc,
  function_shmem_int_inc,
  function_shmem_long_inc,
  function_shmem_longlong_inc,
  function_shmem_short_wait,
  function_shmem_int_wait,
  function_shmem_long_wait,
  function_shmem_longlong_wait,
  function_shmem_wait,
  function_shmem_short_wait_until,
  function_shmem_int_wait_until,
  function_shmem_long_wait_until,
  function_shmem_longlong_wait_until,
  function_shmem_wait_until,
  function_shmem_barrier_all,
  function_shmem_barrier,
  function_shmem_fence,
  function_shmem_quiet,
  function_shmem_short_and_to_all,
  function_shmem_int_and_to_all,
  function_shmem_long_and_to_all,
  function_shmem_longlong_and_to_all,
  function_shmem_short_or_to_all,
  function_shmem_int_or_to_all,
  function_shmem_long_or_to_all,
  function_shmem_longlong_or_to_all,
  function_shmem_short_xor_to_all,
  function_shmem_int_xor_to_all,
  function_shmem_long_xor_to_all,
  function_shmem_longlong_xor_to_all,
  function_shmem_short_max_to_all,
  function_shmem_int_max_to_all,
  function_shmem_long_max_to_all,
  function_shmem_float_max_to_all,
  function_shmem_double_max_to_all,
  function_shmem_longlong_max_to_all,
  function_shmem_longdouble_max_to_all,
  function_shmem_short_min_to_all,
  function_shmem_int_min_to_all,
  function_shmem_long_min_to_all,
  function_shmem_float_min_to_all,
  function_shmem_double_min_to_all,
  function_shmem_longlong_min_to_all,
  function_shmem_longdouble_min_to_all,
  function_shmem_short_sum_to_all,
  function_shmem_int_sum_to_all,
  function_shmem_long_sum_to_all,
  function_shmem_float_sum_to_all,
  function_shmem_double_sum_to_all,
  function_shmem_longlong_sum_to_all,
  function_shmem_longdouble_sum_to_all,
  function_shmem_short_prod_to_all,
  function_shmem_int_prod_to_all,
  function_shmem_long_prod_to_all,
  function_shmem_float_prod_to_all,
  function_shmem_double_prod_to_all,
  function_shmem_longlong_prod_to_all,
  function_shmem_longdouble_prod_to_all,
  function_shmem_collect32,
  function_shmem_collect64,
  function_shmem_short_collect,
  function_shmem_int_collect,
  function_shmem_long_collect,
  function_shmem_longlong_collect,
  function_shmem_float_collect,
  function_shmem_double_collect,
  function_shmem_fcollect32,
  function_shmem_fcollect64,
  function_shmem_short_fcollect,
  function_shmem_int_fcollect,
  function_shmem_long_fcollect,
  function_shmem_longlong_fcollect,
  function_shmem_float_fcollect,
  function_shmem_double_fcollect,
  function_shmem_broadcast32,
  function_shmem_broadcast64,
  function_shmem_short_broadcast,
  function_shmem_int_broadcast,
  function_shmem_long_broadcast,
  function_shmem_longlong_broadcast,
  function_shmem_float_broadcast,
  function_shmem_double_broadcast,
  function_shmem_set_lock,
  function_shmem_clear_lock,
  function_shmem_test_lock,
  FUNCTIONS_MAX,
};

typedef double timestamp_t;
struct function_stat{
  int nb_call;
  double total_time;
  double min_time;
  double max_time;
};

void init_function_stat(struct function_stat*f) {
  f->nb_call=0;
  f->total_time=0;
  f->min_time=-1;
  f->max_time=0;
}

#define MAX_THREADS 256

struct function_stat thread_stats[MAX_THREADS];
__thread int thread_rank=-1;
int nb_threads = 0;
int process_rank = 0;
FILE* profile_file=NULL;

/* flush period (in ns): 1 second */
#define FLUSH_PERIOD (1e9)
/* get a timestamp */
#define GET_TIME(t) clock_gettime(CLOCK_THREAD_CPUTIME_ID, (t))

/* duration (in ns) between t1 and t2 */
#define GET_DURATION(t1, t2) (((t2).tv_sec - (t1).tv_sec)*1e9+((t2).tv_nsec - (t1).tv_nsec))

// set the EZT_SHMEM_TRACE environment variable to enable tracing and disabled profiling
static int profiling_enabled=1;
static int tracing_enabled=0;

#define RECORD_EVENT(event_code) do {		\
    if(tracing_enabled) {			\
      EZTRACE_EVENT_PACKED_0 (event_code);	\
    }						\
}while(0)

#define enter_function(func)				\
  struct timespec t_enter, t_leave;			\
  do {							\
    if(profiling_enabled) {				\
      assert(func<FUNCTIONS_MAX);			\
      if(thread_rank < 0) {				\
	/* we need to initialize this thread */		\
	thread_rank = nb_threads++;			\
	assert(thread_rank<MAX_THREADS);		\
	init_function_stat(&thread_stats[thread_rank]);	\
      }							\
      GET_TIME(&t_enter);				\
    }							\
  }while(0)

#define leave_function(func) do {				\
    if(profiling_enabled) {					\
      assert(func<FUNCTIONS_MAX);				\
      GET_TIME(&t_leave);					\
      struct function_stat*f=&thread_stats[thread_rank];	\
      f->nb_call++;						\
      double duration=GET_DURATION(t_enter, t_leave);		\
      f->total_time+=duration;					\
      if(f->min_time > duration || f->min_time < 0)		\
	f->min_time = duration;					\
      if(f->max_time < duration || f->max_time < 0)		\
	f->max_time = duration;					\
      collect_durations(t_leave);				\
    }								\
    } while(0)

/* print the average duration */
void flush_stats() {
  /* first, reduce */
  struct function_stat global_stats;
  init_function_stat(&global_stats);

  for(int i=0; i<nb_threads; i++) {
    /* warning ! the threads may be recording new events while we browse them.
     * let's considere we don't care about precision and we prefer to avoid blocking
     * the other threads.
     */
    global_stats.nb_call += thread_stats[i].nb_call;
    if(thread_stats[i].nb_call) {
      global_stats.total_time += thread_stats[i].total_time;
 
      if(thread_stats[i].min_time < global_stats.min_time)
	global_stats.min_time += thread_stats[i].min_time  ;

      if(thread_stats[i].max_time < global_stats.max_time)
	global_stats.max_time += thread_stats[i].max_time  ;
    }
    init_function_stat(&thread_stats[i]);
  }


  /* then, print */
  struct timeval t;
  gettimeofday(&t, NULL);
  double cur_date = (t.tv_sec*1e6+t.tv_usec)/1e6;
  double average_time=(global_stats.nb_call ? global_stats.total_time/global_stats.nb_call : 0);

  static int first_time=1;
  if(first_time) {
    first_time=0;
    char filename [1024];
    sprintf(filename, "ezt_shmem_profile_%d", process_rank);
    profile_file=fopen(filename, "w");
    if(!profile_file) {
      fprintf(stderr, "Cannot open file %s !\n", filename);
      abort();
    }
    fprintf(profile_file, "#timestamp\tprocess_rank\tnb_calls\t average duration per call (ns)\n");
  }
  fprintf(profile_file, "%f\t%d\t%d\t%f\n", cur_date, process_rank, global_stats.nb_call, average_time);  
}

/* check if we should print the average duration */
void collect_durations(struct timespec current_timestamp) {
  static struct timespec last_flush = {.tv_sec=0, .tv_nsec=0} ;
  static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
  if(GET_DURATION(last_flush, current_timestamp)  > FLUSH_PERIOD) {
    /* make sure the isn't another thread doing the same thing  */
    if(! pthread_mutex_trylock(&mutex)) {
      /* check again to make sure that noone flushed */
      if(GET_DURATION(last_flush, current_timestamp)  > FLUSH_PERIOD) {
	flush_stats();
	last_flush.tv_sec = current_timestamp.tv_sec;
	last_flush.tv_nsec = current_timestamp.tv_nsec;
      }
      pthread_mutex_unlock(&mutex);
	  
    } /* else: another thread is doing the job */
  }
}

static int module_initialized = 0;

void shmem_init () {
  FUNCTION_ENTRY;
  if (!libshmem_init) { 
    libshmem_init = dlsym(RTLD_NEXT, "shmem_init");
  }
  libshmem_init();

  if (!libshmem_my_pe) {
    libshmem_my_pe = dlsym(RTLD_NEXT, "shmem_my_pe");
  }
  int my_rank=libshmem_my_pe();
  process_rank = my_rank;

  if (!libshmem_n_pes) {
    libshmem_n_pes = dlsym(RTLD_NEXT, "shmem_n_pes");
  }
  int comm_size=libshmem_n_pes();

  char *filename= NULL;
  asprintf(&filename, "eztrace_log_rank_%d", my_rank);
  eztrace_set_filename(filename);

  if(tracing_enabled) {
    EZTRACE_EVENT_PACKED_2 (EZTRACE_shmem_shmem_init_1, my_rank, comm_size);
    EZTRACE_EVENT_PACKED_0 (EZTRACE_shmem_shmem_init_2);
  }
}

void start_pes (int a) {
  FUNCTION_ENTRY;
  if (!libstart_pes) { 
    libstart_pes = dlsym(RTLD_NEXT, "start_pes");
  }
  libstart_pes (a);

  if (!libshmem_my_pe) {
    libshmem_my_pe = dlsym(RTLD_NEXT, "shmem_my_pe");
  }
  int my_rank=libshmem_my_pe();

  if (!libshmem_n_pes) {
    libshmem_n_pes = dlsym(RTLD_NEXT, "shmem_n_pes");
  }
  int comm_size=libshmem_n_pes();

  char *filename= NULL;
  asprintf(&filename, "eztrace_log_rank_%d", my_rank);
  eztrace_set_filename(filename);

  if(tracing_enabled) {
    EZTRACE_EVENT_PACKED_3 (EZTRACE_shmem_start_pes_1, a, my_rank, comm_size);  
    EZTRACE_EVENT_PACKED_1 (EZTRACE_shmem_start_pes_2, a);
  }
}

int shmem_n_pes () {
  FUNCTION_ENTRY;
  if (!libshmem_n_pes) { 
    libshmem_n_pes = dlsym(RTLD_NEXT, "shmem_n_pes");
  }
  int ret = libshmem_n_pes ();
  return ret;
}

int shmem_my_pe () {
  FUNCTION_ENTRY;
  if (!libshmem_my_pe) { 
    libshmem_my_pe = dlsym(RTLD_NEXT, "shmem_my_pe");
  }
  int ret = libshmem_my_pe ();
  return ret;
}

int shmem_pe_accessible (int a) {
  FUNCTION_ENTRY;
  if (!libshmem_pe_accessible) { 
    libshmem_pe_accessible = dlsym(RTLD_NEXT, "shmem_pe_accessible");
  }
  enter_function(function_shmem_pe_accessible);
  RECORD_EVENT(EZTRACE_shmem_shmem_pe_accessible_7);
  int ret = libshmem_pe_accessible (a);
  RECORD_EVENT(EZTRACE_shmem_shmem_pe_accessible_8);
  leave_function(function_shmem_pe_accessible);
  return ret;
}

int shmem_addr_accessible (void*  a1, int a2) {
  FUNCTION_ENTRY;
  if (!libshmem_addr_accessible) { 
    libshmem_addr_accessible = dlsym(RTLD_NEXT, "shmem_addr_accessible");
  }
  enter_function(function_shmem_addr_accessible);
  RECORD_EVENT(EZTRACE_shmem_shmem_addr_accessible_9);
  int ret = libshmem_addr_accessible (a1, a2);
  RECORD_EVENT(EZTRACE_shmem_shmem_addr_accessible_10);
  leave_function(function_shmem_addr_accessible);
  return ret;
}

void * shmalloc (size_t a1) {
  FUNCTION_ENTRY;
  if (!libshmalloc) { 
    libshmalloc = dlsym(RTLD_NEXT, "shmalloc");
  }
  enter_function(function_shmalloc);
  RECORD_EVENT(EZTRACE_shmem_shmalloc_11);
  void* ret = libshmalloc (a1);
  RECORD_EVENT(EZTRACE_shmem_shmalloc_12);
  leave_function(function_shmalloc);
  return ret;
}

void * shmemalign (size_t a1, size_t a2) {
  FUNCTION_ENTRY;
  if (!libshmemalign) { 
    libshmemalign = dlsym(RTLD_NEXT, "shmemalign");
  }
  enter_function(function_shmemalign);
  RECORD_EVENT(EZTRACE_shmem_shmemalign_13);
  void* ret = libshmemalign (a1, a2);
  RECORD_EVENT(EZTRACE_shmem_shmemalign_14);
  leave_function(function_shmemalign);
  return ret;
}

void * shrealloc (void*  a1, size_t a2) {
  FUNCTION_ENTRY;
  if (!libshrealloc) { 
    libshrealloc = dlsym(RTLD_NEXT, "shrealloc");
  }
  enter_function(function_shrealloc);
  RECORD_EVENT(EZTRACE_shmem_shrealloc_15);
  void* ret = libshrealloc (a1, a2);
  RECORD_EVENT(EZTRACE_shmem_shrealloc_16);
  leave_function(function_shrealloc);
  return ret;
}

void shfree (void*  a1) {
  FUNCTION_ENTRY;
  if (!libshfree) { 
    libshfree = dlsym(RTLD_NEXT, "shfree");
  }
  RECORD_EVENT(EZTRACE_shmem_shfree_17);
  enter_function(function_shfree);
  libshfree (a1);
  RECORD_EVENT(EZTRACE_shmem_shfree_18);
  leave_function(function_shfree);
}


void * shmem_ptr (void*  a1, int a2) {
  FUNCTION_ENTRY;
  if (!libshmem_ptr) { 
    libshmem_ptr = dlsym(RTLD_NEXT, "shmem_ptr");
  }
  enter_function(function_shmem_ptr);
  RECORD_EVENT(EZTRACE_shmem_shmem_ptr_19);
  void* ret = libshmem_ptr (a1, a2);
  RECORD_EVENT(EZTRACE_shmem_shmem_ptr_20);
  leave_function(function_shmem_ptr);
  return ret;
}


void shmem_short_p (short*  a1, short a2, int a3) {
  FUNCTION_ENTRY;
  if (!libshmem_short_p) { 
    libshmem_short_p = dlsym(RTLD_NEXT, "shmem_short_p");
  }
  enter_function(function_shmem_short_p);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_p_21);
  libshmem_short_p (a1, a2, a3);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_p_22);
  leave_function(function_shmem_short_p);
}


void shmem_int_p (int*  a1, int a2, int a3) {
  FUNCTION_ENTRY;
  if (!libshmem_int_p) { 
    libshmem_int_p = dlsym(RTLD_NEXT, "shmem_int_p");
  }
  enter_function(function_shmem_int_p);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_p_23);
  libshmem_int_p (a1, a2, a3);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_p_24);
  leave_function(function_shmem_int_p);
}


void shmem_long_p (long*  a1, long a2, int a3) {
  FUNCTION_ENTRY;
  if (!libshmem_long_p) { 
    libshmem_long_p = dlsym(RTLD_NEXT, "shmem_long_p");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_p_25);
  enter_function(function_shmem_long_p);
  libshmem_long_p (a1, a2, a3);
  leave_function(function_shmem_long_p);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_p_26);
}

void shmem_float_p (float*  a1, float a2, int a3) {
  FUNCTION_ENTRY;
  if (!libshmem_float_p) { 
    libshmem_float_p = dlsym(RTLD_NEXT, "shmem_float_p");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_float_p_27);
  enter_function(function_shmem_float_p);
  libshmem_float_p (a1, a2, a3);
  leave_function(function_shmem_float_p);
  RECORD_EVENT(EZTRACE_shmem_shmem_float_p_28);
}

void shmem_double_p (double*  a1, double a2, int a3) {
  FUNCTION_ENTRY;
  if (!libshmem_double_p) { 
    libshmem_double_p = dlsym(RTLD_NEXT, "shmem_double_p");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_double_p_29);
  enter_function(function_shmem_double_p);
  libshmem_double_p (a1, a2, a3);
  leave_function(function_shmem_double_p);
  RECORD_EVENT(EZTRACE_shmem_shmem_double_p_30);
}

void shmem_longlong_p (long long*  a1, long long a2, int a3) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_p) { 
    libshmem_longlong_p = dlsym(RTLD_NEXT, "shmem_longlong_p");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_p_31);
  enter_function(function_shmem_longlong_p);
  libshmem_longlong_p (a1, a2, a3);
  leave_function(function_shmem_longlong_p);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_p_32);
}

void shmem_longdouble_p (long double*  a1, long double a2, int a3) {
  FUNCTION_ENTRY;
  if (!libshmem_longdouble_p) { 
    libshmem_longdouble_p = dlsym(RTLD_NEXT, "shmem_longdouble_p");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_p_33);
  enter_function(function_shmem_longdouble_p);
  libshmem_longdouble_p (a1, a2, a3);
  leave_function(function_shmem_longdouble_p);
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_p_34);
}

void shmem_char_put (char*  a1, const char*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_char_put) { 
    libshmem_char_put = dlsym(RTLD_NEXT, "shmem_char_put");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_char_put_35);
  enter_function(function_shmem_char_put);
  libshmem_char_put (a1, a2, a3, a4);
  leave_function(function_shmem_char_put);
  RECORD_EVENT(EZTRACE_shmem_shmem_char_put_36);
}

void shmem_short_put (short*  a1, const short*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_short_put) { 
    libshmem_short_put = dlsym(RTLD_NEXT, "shmem_short_put");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_put_37);
  enter_function(function_shmem_short_put);
  libshmem_short_put (a1, a2, a3, a4);
  leave_function(function_shmem_short_put);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_put_38);
}

void shmem_int_put (int*  a1, const int*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_int_put) { 
    libshmem_int_put = dlsym(RTLD_NEXT, "shmem_int_put");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_put_39);
  enter_function(function_shmem_int_put);
  libshmem_int_put (a1, a2, a3, a4);
  leave_function(function_shmem_int_put);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_put_40);
}

void shmem_long_put (long*  a1, const long*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_long_put) { 
    libshmem_long_put = dlsym(RTLD_NEXT, "shmem_long_put");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_put_41);
  enter_function(function_shmem_long_put);
  libshmem_long_put (a1, a2, a3, a4);
  leave_function(function_shmem_long_put);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_put_42);
}

void shmem_float_put (float*  a1, const float*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_float_put) { 
    libshmem_float_put = dlsym(RTLD_NEXT, "shmem_float_put");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_float_put_43);
  enter_function(function_shmem_float_put);
  libshmem_float_put (a1, a2, a3, a4);
  leave_function(function_shmem_float_put);
  RECORD_EVENT(EZTRACE_shmem_shmem_float_put_44);
}

void shmem_double_put (double*  a1, const double*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_double_put) { 
    libshmem_double_put = dlsym(RTLD_NEXT, "shmem_double_put");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_double_put_45);
  enter_function(function_shmem_double_put);
  libshmem_double_put (a1, a2, a3, a4);
  leave_function(function_shmem_double_put);
  RECORD_EVENT(EZTRACE_shmem_shmem_double_put_46);
}

void shmem_longlong_put (long long*  a1, const long long*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_put) { 
    libshmem_longlong_put = dlsym(RTLD_NEXT, "shmem_longlong_put");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_put_47);
  enter_function(function_shmem_longlong_put);
  libshmem_longlong_put (a1, a2, a3, a4);
  leave_function(function_shmem_longlong_put);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_put_48);
}

void shmem_longdouble_put (long double*  a1, const long double*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_longdouble_put) { 
    libshmem_longdouble_put = dlsym(RTLD_NEXT, "shmem_longdouble_put");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_put_49);
  enter_function(function_shmem_longdouble_put);
  libshmem_longdouble_put (a1, a2, a3, a4);
  leave_function(function_shmem_longdouble_put);
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_put_50);
}

void shmem_put32 (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_put32) { 
    libshmem_put32 = dlsym(RTLD_NEXT, "shmem_put32");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_put32_51);
  enter_function(function_shmem_put32);
  libshmem_put32 (a1, a2, a3, a4);
  leave_function(function_shmem_put32);
  RECORD_EVENT(EZTRACE_shmem_shmem_put32_52);
}

void shmem_put64 (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_put64) { 
    libshmem_put64 = dlsym(RTLD_NEXT, "shmem_put64");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_put64_53);
  enter_function(function_shmem_put64);
  libshmem_put64 (a1, a2, a3, a4);
  leave_function(function_shmem_put64);
  RECORD_EVENT(EZTRACE_shmem_shmem_put64_54);
}

void shmem_put128 (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_put128) { 
    libshmem_put128 = dlsym(RTLD_NEXT, "shmem_put128");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_put128_55);
  enter_function(function_shmem_put128);
  libshmem_put128 (a1, a2, a3, a4);
  leave_function(function_shmem_put128);
  RECORD_EVENT(EZTRACE_shmem_shmem_put128_56);
}

void shmem_putmem (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_putmem) { 
    libshmem_putmem = dlsym(RTLD_NEXT, "shmem_putmem");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_putmem_57);
  enter_function(function_shmem_putmem);
  libshmem_putmem (a1, a2, a3, a4);
  leave_function(function_shmem_putmem);
  RECORD_EVENT(EZTRACE_shmem_shmem_putmem_58);
}

void shmem_short_iput (short*  a1, const short*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_short_iput) { 
    libshmem_short_iput = dlsym(RTLD_NEXT, "shmem_short_iput");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_iput_59);
  enter_function(function_shmem_short_iput);
  libshmem_short_iput (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_short_iput);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_iput_60);
}

void shmem_int_iput (int*  a1, const int*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_int_iput) { 
    libshmem_int_iput = dlsym(RTLD_NEXT, "shmem_int_iput");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_iput_61);
  enter_function(function_shmem_int_iput);
  libshmem_int_iput (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_int_iput);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_iput_62);
}

void shmem_float_iput (float*  a1, const float*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_float_iput) { 
    libshmem_float_iput = dlsym(RTLD_NEXT, "shmem_float_iput");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_float_iput_63);
  enter_function(function_shmem_float_iput);
  libshmem_float_iput (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_float_iput);
  RECORD_EVENT(EZTRACE_shmem_shmem_float_iput_64);
}

void shmem_long_iput (long*  a1, const long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_long_iput) { 
    libshmem_long_iput = dlsym(RTLD_NEXT, "shmem_long_iput");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_iput_65);
  enter_function(function_shmem_long_iput);
  libshmem_long_iput (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_long_iput);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_iput_66);
}

void shmem_double_iput (double*  a1, const double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_double_iput) { 
    libshmem_double_iput = dlsym(RTLD_NEXT, "shmem_double_iput");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_double_iput_67);
  enter_function(function_shmem_double_iput);
  libshmem_double_iput (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_double_iput);
  RECORD_EVENT(EZTRACE_shmem_shmem_double_iput_68);
}

void shmem_longlong_iput (long long*  a1, const long long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_iput) { 
    libshmem_longlong_iput = dlsym(RTLD_NEXT, "shmem_longlong_iput");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_iput_69);
  enter_function(function_shmem_longlong_iput);
  libshmem_longlong_iput (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_longlong_iput);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_iput_70);
}

void shmem_longdouble_iput (long double*  a1, const long double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_longdouble_iput) { 
    libshmem_longdouble_iput = dlsym(RTLD_NEXT, "shmem_longdouble_iput");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_iput_71);
  enter_function(function_shmem_longdouble_iput);
  libshmem_longdouble_iput (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_longdouble_iput);
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_iput_72);
}

void shmem_iput32 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_iput32) { 
    libshmem_iput32 = dlsym(RTLD_NEXT, "shmem_iput32");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_iput32_73);
  enter_function(function_shmem_iput32);
  libshmem_iput32 (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_iput32);
  RECORD_EVENT(EZTRACE_shmem_shmem_iput32_74);
}

void shmem_iput64 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_iput64) { 
    libshmem_iput64 = dlsym(RTLD_NEXT, "shmem_iput64");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_iput64_75);
  enter_function(function_shmem_iput64);
  libshmem_iput64 (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_iput64);
  RECORD_EVENT(EZTRACE_shmem_shmem_iput64_76);
}

void shmem_iput128 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_iput128) { 
    libshmem_iput128 = dlsym(RTLD_NEXT, "shmem_iput128");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_iput128_77);
  enter_function(function_shmem_iput128);
  libshmem_iput128 (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_iput128);
  RECORD_EVENT(EZTRACE_shmem_shmem_iput128_78);
}

short shmem_short_g (short*  a1, int a2) {
  FUNCTION_ENTRY;
  if (!libshmem_short_g) { 
    libshmem_short_g = dlsym(RTLD_NEXT, "shmem_short_g");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_g_79);
  enter_function(function_shmem_short_g);
  short ret = libshmem_short_g (a1, a2);
  leave_function(function_shmem_short_g);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_g_80);
  return ret;
}

int shmem_int_g (int*  a1, int a2) {
  FUNCTION_ENTRY;
  if (!libshmem_int_g) { 
    libshmem_int_g = dlsym(RTLD_NEXT, "shmem_int_g");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_g_81);
  enter_function(function_shmem_int_g);
  int ret = libshmem_int_g (a1, a2);
  leave_function(function_shmem_int_g);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_g_82);
  return ret;
}

long shmem_long_g (long*  a1, int a2) {
  FUNCTION_ENTRY;
  if (!libshmem_long_g) { 
    libshmem_long_g = dlsym(RTLD_NEXT, "shmem_long_g");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_g_83);
  enter_function(function_shmem_long_g);
  long ret = libshmem_long_g (a1, a2);
  leave_function(function_shmem_long_g);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_g_84);
  return ret;
}

float shmem_float_g (float*  a1, int a2) {
  FUNCTION_ENTRY;
  if (!libshmem_float_g) { 
    libshmem_float_g = dlsym(RTLD_NEXT, "shmem_float_g");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_float_g_85);
  enter_function(function_shmem_float_g);
  float ret = libshmem_float_g (a1, a2);
  leave_function(function_shmem_float_g);
  RECORD_EVENT(EZTRACE_shmem_shmem_float_g_86);
  return ret;
}

double shmem_double_g (double*  a1, int a2) {
  FUNCTION_ENTRY;
  if (!libshmem_double_g) { 
    libshmem_double_g = dlsym(RTLD_NEXT, "shmem_double_g");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_double_g_87);
  enter_function(function_shmem_double_g);
  double ret = libshmem_double_g (a1, a2);
  leave_function(function_shmem_double_g);
  RECORD_EVENT(EZTRACE_shmem_shmem_double_g_88);
  return ret;
}

long long shmem_longlong_g (long long*  a1, int a2) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_g) { 
    libshmem_longlong_g = dlsym(RTLD_NEXT, "shmem_longlong_g");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_g_89);
  enter_function(function_shmem_longlong_g);
  long long ret = libshmem_longlong_g (a1, a2);
  leave_function(function_shmem_longlong_g);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_g_90);
  return ret;
}

long double shmem_longdouble_g (long double*  a1, int a2) {
  FUNCTION_ENTRY;
  if (!libshmem_longdouble_g) { 
    libshmem_longdouble_g = dlsym(RTLD_NEXT, "shmem_longdouble_g");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_g_91);
  enter_function(function_shmem_longdouble_g);
  long double ret = libshmem_longdouble_g (a1, a2);
  leave_function(function_shmem_longdouble_g);
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_g_92);
  return ret;
}

void shmem_char_get (char*  a1, const char*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_char_get) { 
    libshmem_char_get = dlsym(RTLD_NEXT, "shmem_char_get");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_char_get_93);
  enter_function(function_shmem_char_get);
  libshmem_char_get (a1, a2, a3, a4);
  leave_function(function_shmem_char_get);
  RECORD_EVENT(EZTRACE_shmem_shmem_char_get_94);
}

void shmem_short_get (short*  a1, const short*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_short_get) { 
    libshmem_short_get = dlsym(RTLD_NEXT, "shmem_short_get");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_get_95);
  enter_function(function_shmem_short_get);
  libshmem_short_get (a1, a2, a3, a4);
  leave_function(function_shmem_short_get);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_get_96);
}

void shmem_int_get (int*  a1, const int*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_int_get) { 
    libshmem_int_get = dlsym(RTLD_NEXT, "shmem_int_get");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_get_97);
  enter_function(function_shmem_int_get);
  libshmem_int_get (a1, a2, a3, a4);
  leave_function(function_shmem_int_get);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_get_98);
}

void shmem_long_get (long*  a1, const long*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_long_get) { 
    libshmem_long_get = dlsym(RTLD_NEXT, "shmem_long_get");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_get_99);
  enter_function(function_shmem_long_get);
  libshmem_long_get (a1, a2, a3, a4);
  leave_function(function_shmem_long_get);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_get_100);
}

void shmem_float_get (float*  a1, const float*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_float_get) { 
    libshmem_float_get = dlsym(RTLD_NEXT, "shmem_float_get");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_float_get_101);
  enter_function(function_shmem_float_get);
  libshmem_float_get (a1, a2, a3, a4);
  leave_function(function_shmem_float_get);
  RECORD_EVENT(EZTRACE_shmem_shmem_float_get_102);
}

void shmem_double_get (double*  a1, const double*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_double_get) { 
    libshmem_double_get = dlsym(RTLD_NEXT, "shmem_double_get");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_double_get_103);
  enter_function(function_shmem_double_get);
  libshmem_double_get (a1, a2, a3, a4);
  leave_function(function_shmem_double_get);
  RECORD_EVENT(EZTRACE_shmem_shmem_double_get_104);
}

void shmem_longlong_get (long long*  a1, const long long*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_get) { 
    libshmem_longlong_get = dlsym(RTLD_NEXT, "shmem_longlong_get");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_get_105);
  enter_function(function_shmem_longlong_get);
  libshmem_longlong_get (a1, a2, a3, a4);
  leave_function(function_shmem_longlong_get);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_get_106);
}

void shmem_longdouble_get (long double*  a1, const long double*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_longdouble_get) { 
    libshmem_longdouble_get = dlsym(RTLD_NEXT, "shmem_longdouble_get");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_get_107);
  enter_function(function_shmem_longdouble_get);
  libshmem_longdouble_get (a1, a2, a3, a4);
  leave_function(function_shmem_longdouble_get);
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_get_108);
}

void shmem_get32 (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_get32) { 
    libshmem_get32 = dlsym(RTLD_NEXT, "shmem_get32");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_get32_109);
  enter_function(function_shmem_get32);
  libshmem_get32 (a1, a2, a3, a4);
  leave_function(function_shmem_get32);
  RECORD_EVENT(EZTRACE_shmem_shmem_get32_110);
}

void shmem_get64 (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_get64) { 
    libshmem_get64 = dlsym(RTLD_NEXT, "shmem_get64");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_get64_111);
  enter_function(function_shmem_get64);
  libshmem_get64 (a1, a2, a3, a4);
  leave_function(function_shmem_get64);
  RECORD_EVENT(EZTRACE_shmem_shmem_get64_112);
}

void shmem_get128 (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_get128) { 
    libshmem_get128 = dlsym(RTLD_NEXT, "shmem_get128");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_get128_113);
  enter_function(function_shmem_get128);
  libshmem_get128 (a1, a2, a3, a4);
  leave_function(function_shmem_get128);
  RECORD_EVENT(EZTRACE_shmem_shmem_get128_114);
}

void shmem_getmem (void*  a1, const void*  a2, size_t a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_getmem) { 
    libshmem_getmem = dlsym(RTLD_NEXT, "shmem_getmem");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_getmem_115);
  enter_function(function_shmem_getmem);
  libshmem_getmem (a1, a2, a3, a4);
  leave_function(function_shmem_getmem);
  RECORD_EVENT(EZTRACE_shmem_shmem_getmem_116);
}

void shmem_iget32 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_iget32) { 
    libshmem_iget32 = dlsym(RTLD_NEXT, "shmem_iget32");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_iget32_117);
  enter_function(function_shmem_iget32);
  libshmem_iget32 (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_iget32);
  RECORD_EVENT(EZTRACE_shmem_shmem_iget32_118);
}

void shmem_iget64 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_iget64) { 
    libshmem_iget64 = dlsym(RTLD_NEXT, "shmem_iget64");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_iget64_119);
  enter_function(function_shmem_iget64);
  libshmem_iget64 (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_iget64);
  RECORD_EVENT(EZTRACE_shmem_shmem_iget64_120);
}

void shmem_iget128 (void*  a1, const void*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_iget128) { 
    libshmem_iget128 = dlsym(RTLD_NEXT, "shmem_iget128");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_iget128_121);
  enter_function(function_shmem_iget128);
  libshmem_iget128 (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_iget128);
  RECORD_EVENT(EZTRACE_shmem_shmem_iget128_122);
}

void shmem_short_iget (short*  a1, const short*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_short_iget) { 
    libshmem_short_iget = dlsym(RTLD_NEXT, "shmem_short_iget");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_iget_123);
  enter_function(function_shmem_short_iget);
  libshmem_short_iget (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_short_iget);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_iget_124);
}

void shmem_int_iget (int*  a1, const int*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_int_iget) { 
    libshmem_int_iget = dlsym(RTLD_NEXT, "shmem_int_iget");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_iget_125);
  enter_function(function_shmem_int_iget);
  libshmem_int_iget (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_int_iget);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_iget_126);
}

void shmem_long_iget (long*  a1, const long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_long_iget) { 
    libshmem_long_iget = dlsym(RTLD_NEXT, "shmem_long_iget");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_iget_127);
  enter_function(function_shmem_long_iget);
  libshmem_long_iget (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_long_iget);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_iget_128);
}

void shmem_double_iget (double*  a1, const double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_double_iget) { 
    libshmem_double_iget = dlsym(RTLD_NEXT, "shmem_double_iget");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_double_iget_129);
  enter_function(function_shmem_double_iget);
  libshmem_double_iget (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_double_iget);
  RECORD_EVENT(EZTRACE_shmem_shmem_double_iget_130);
}

void shmem_float_iget (float*  a1, const float*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_float_iget) { 
    libshmem_float_iget = dlsym(RTLD_NEXT, "shmem_float_iget");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_float_iget_131);
  enter_function(function_shmem_float_iget);
  libshmem_float_iget (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_float_iget);
  RECORD_EVENT(EZTRACE_shmem_shmem_float_iget_132);
}

void shmem_longlong_iget (long long*  a1, const long long*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_iget) { 
    libshmem_longlong_iget = dlsym(RTLD_NEXT, "shmem_longlong_iget");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_iget_133);
  enter_function(function_shmem_longlong_iget);
  libshmem_longlong_iget (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_longlong_iget);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_iget_134);
}

void shmem_longdouble_iget (long double*  a1, const long double*  a2, ptrdiff_t a3, ptrdiff_t a4, size_t a5, int a6) {
  FUNCTION_ENTRY;
  if (!libshmem_longdouble_iget) { 
    libshmem_longdouble_iget = dlsym(RTLD_NEXT, "shmem_longdouble_iget");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_iget_135);
  enter_function(function_shmem_longdouble_iget);
  libshmem_longdouble_iget (a1, a2, a3, a4, a5, a6);
  leave_function(function_shmem_longdouble_iget);
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_iget_136);
}

short shmem_short_swap (short*  a1, short a2, int a3) {
  FUNCTION_ENTRY;
  if (!libshmem_short_swap) { 
    libshmem_short_swap = dlsym(RTLD_NEXT, "shmem_short_swap");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_swap_137);
  enter_function(function_shmem_short_swap);
  short ret = libshmem_short_swap (a1, a2, a3);
  leave_function(function_shmem_short_swap);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_swap_138);
  return ret;
}

int shmem_int_swap (int*  a1, int a2, int a3) {
  FUNCTION_ENTRY;
  if (!libshmem_int_swap) { 
    libshmem_int_swap = dlsym(RTLD_NEXT, "shmem_int_swap");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_swap_139);
  enter_function(function_shmem_int_swap);
  int ret = libshmem_int_swap (a1, a2, a3);
  leave_function(function_shmem_int_swap);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_swap_140);
  return ret;
}

long shmem_long_swap (long*  a1, long a2, int a3) {
  FUNCTION_ENTRY;
  if (!libshmem_long_swap) { 
    libshmem_long_swap = dlsym(RTLD_NEXT, "shmem_long_swap");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_swap_141);
  enter_function(function_shmem_long_swap);
  long ret = libshmem_long_swap (a1, a2, a3);
  leave_function(function_shmem_long_swap);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_swap_142);
  return ret;
}

long shmem_swap (long*  a1, long a2, int a3) {
  FUNCTION_ENTRY;
  if (!libshmem_swap) { 
    libshmem_swap = dlsym(RTLD_NEXT, "shmem_swap");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_swap_143);
  enter_function(function_shmem_swap);
  long ret = libshmem_swap (a1, a2, a3);
  leave_function(function_shmem_swap);
  RECORD_EVENT(EZTRACE_shmem_shmem_swap_144);
  return ret;
}

long long shmem_longlong_swap (long long*  a1, long long a2, int a3) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_swap) { 
    libshmem_longlong_swap = dlsym(RTLD_NEXT, "shmem_longlong_swap");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_swap_145);
  enter_function(function_shmem_longlong_swap);
  long long ret = libshmem_longlong_swap (a1, a2, a3);
  leave_function(function_shmem_longlong_swap);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_swap_146);
  return ret;
}

float shmem_float_swap (float*  a1, float a2, int a3) {
  FUNCTION_ENTRY;
  if (!libshmem_float_swap) { 
    libshmem_float_swap = dlsym(RTLD_NEXT, "shmem_float_swap");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_float_swap_147);
  enter_function(function_shmem_float_swap);
  float ret = libshmem_float_swap (a1, a2, a3);
  leave_function(function_shmem_float_swap);
  RECORD_EVENT(EZTRACE_shmem_shmem_float_swap_148);
  return ret;
}

double shmem_double_swap (double*  a1, double a2, int a3) {
  FUNCTION_ENTRY;
  if (!libshmem_double_swap) { 
    libshmem_double_swap = dlsym(RTLD_NEXT, "shmem_double_swap");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_double_swap_149);
  enter_function(function_shmem_double_swap);
  double ret = libshmem_double_swap (a1, a2, a3);
  leave_function(function_shmem_double_swap);
  RECORD_EVENT(EZTRACE_shmem_shmem_double_swap_150);
  return ret;
}

short shmem_short_cswap (short*  a1, short a2, short a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_short_cswap) { 
    libshmem_short_cswap = dlsym(RTLD_NEXT, "shmem_short_cswap");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_cswap_151);
  enter_function(function_shmem_short_cswap);
  short ret = libshmem_short_cswap (a1, a2, a3, a4);
  leave_function(function_shmem_short_cswap);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_cswap_152);
  return ret;
}

int shmem_int_cswap (int*  a1, int a2, int a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_int_cswap) { 
    libshmem_int_cswap = dlsym(RTLD_NEXT, "shmem_int_cswap");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_cswap_153);
  enter_function(function_shmem_int_cswap);
  int ret = libshmem_int_cswap (a1, a2, a3, a4);
  leave_function(function_shmem_int_cswap);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_cswap_154);
  return ret;
}

long shmem_long_cswap (long*  a1, long a2, long a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_long_cswap) { 
    libshmem_long_cswap = dlsym(RTLD_NEXT, "shmem_long_cswap");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_cswap_155);
  enter_function(function_shmem_long_cswap);
  long ret = libshmem_long_cswap (a1, a2, a3, a4);
  leave_function(function_shmem_long_cswap);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_cswap_156);
  return ret;
}

long long shmem_longlong_cswap (long long*  a1, long long a2, long long a3, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_cswap) { 
    libshmem_longlong_cswap = dlsym(RTLD_NEXT, "shmem_longlong_cswap");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_cswap_157);
  enter_function(function_shmem_longlong_cswap);
  long long ret = libshmem_longlong_cswap (a1, a2, a3, a4);
  leave_function(function_shmem_longlong_cswap);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_cswap_158);
  return ret;
}

short shmem_short_fadd (short*  a1, short a2, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_short_fadd) { 
    libshmem_short_fadd = dlsym(RTLD_NEXT, "shmem_short_fadd");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_fadd_159);
  enter_function(function_shmem_short_fadd);
  short ret = libshmem_short_fadd (a1, a2, a4);
  leave_function(function_shmem_short_fadd);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_fadd_160);
  return ret;
}

int shmem_int_fadd (int*  a1, int a2, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_int_fadd) { 
    libshmem_int_fadd = dlsym(RTLD_NEXT, "shmem_int_fadd");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_fadd_161);
  enter_function(function_shmem_int_fadd);
  int ret = libshmem_int_fadd (a1, a2, a4);
  leave_function(function_shmem_int_fadd);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_fadd_162);
  return ret;
}

long shmem_long_fadd (long*  a1, long a2, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_long_fadd) { 
    libshmem_long_fadd = dlsym(RTLD_NEXT, "shmem_long_fadd");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_fadd_163);
  enter_function(function_shmem_long_fadd);
  long ret = libshmem_long_fadd (a1, a2, a4);
  leave_function(function_shmem_long_fadd);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_fadd_164);
  return ret;
}

long long shmem_longlong_fadd (long long*  a1, long long a2, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_fadd) { 
    libshmem_longlong_fadd = dlsym(RTLD_NEXT, "shmem_longlong_fadd");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_fadd_165);
  enter_function(function_shmem_longlong_fadd);
  long long ret = libshmem_longlong_fadd (a1, a2, a4);
  leave_function(function_shmem_longlong_fadd);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_fadd_166);
  return ret;
}

short shmem_short_finc (short*  a1, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_short_finc) { 
    libshmem_short_finc = dlsym(RTLD_NEXT, "shmem_short_finc");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_finc_167);
  enter_function(function_shmem_short_finc);
  short ret = libshmem_short_finc (a1, a4);
  leave_function(function_shmem_short_finc);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_finc_168);
  return ret;
}

int shmem_int_finc (int*  a1, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_int_finc) { 
    libshmem_int_finc = dlsym(RTLD_NEXT, "shmem_int_finc");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_finc_169);
  enter_function(function_shmem_int_finc);
  int ret = libshmem_int_finc (a1, a4);
  leave_function(function_shmem_int_finc);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_finc_170);
  return ret;
}

long shmem_long_finc (long*  a1, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_long_finc) { 
    libshmem_long_finc = dlsym(RTLD_NEXT, "shmem_long_finc");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_finc_171);
  enter_function(function_shmem_long_finc);
  long ret = libshmem_long_finc (a1, a4);
  leave_function(function_shmem_long_finc);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_finc_172);
  return ret;
}

long long shmem_longlong_finc (long long*  a1, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_finc) { 
    libshmem_longlong_finc = dlsym(RTLD_NEXT, "shmem_longlong_finc");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_finc_173);
  enter_function(function_shmem_longlong_finc);
  long long ret = libshmem_longlong_finc (a1, a4);
  leave_function(function_shmem_longlong_finc);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_finc_174);
  return ret;
}

void shmem_short_add (short*  a1, short a2, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_short_add) { 
    libshmem_short_add = dlsym(RTLD_NEXT, "shmem_short_add");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_add_175);
  enter_function(function_shmem_short_add);
  libshmem_short_add (a1, a2, a4);
  leave_function(function_shmem_short_add);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_add_176);
}

void shmem_int_add (int*  a1, int a2, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_int_add) { 
    libshmem_int_add = dlsym(RTLD_NEXT, "shmem_int_add");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_add_177);
  enter_function(function_shmem_int_add);
  libshmem_int_add (a1, a2, a4);
  leave_function(function_shmem_int_add);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_add_178);
}

void shmem_long_add (long*  a1, long a2, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_long_add) { 
    libshmem_long_add = dlsym(RTLD_NEXT, "shmem_long_add");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_add_179);
  enter_function(function_shmem_long_add);
  libshmem_long_add (a1, a2, a4);
  leave_function(function_shmem_long_add);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_add_180);
}

void shmem_longlong_add (long long*  a1, long long a2, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_add) { 
    libshmem_longlong_add = dlsym(RTLD_NEXT, "shmem_longlong_add");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_add_181);
  enter_function(function_shmem_longlong_add);
  libshmem_longlong_add (a1, a2, a4);
  leave_function(function_shmem_longlong_add);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_add_182);
}

void shmem_short_inc (short*  a1, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_short_inc) { 
    libshmem_short_inc = dlsym(RTLD_NEXT, "shmem_short_inc");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_inc_183);
  enter_function(function_shmem_short_inc);
  libshmem_short_inc (a1, a4);
  leave_function(function_shmem_short_inc);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_inc_184);
}

void shmem_int_inc (int*  a1, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_int_inc) { 
    libshmem_int_inc = dlsym(RTLD_NEXT, "shmem_int_inc");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_inc_185);
  enter_function(function_shmem_int_inc);
  libshmem_int_inc (a1, a4);
  leave_function(function_shmem_int_inc);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_inc_186);
}

void shmem_long_inc (long*  a1, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_long_inc) { 
    libshmem_long_inc = dlsym(RTLD_NEXT, "shmem_long_inc");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_inc_187);
  enter_function(function_shmem_long_inc);
  libshmem_long_inc (a1, a4);
  leave_function(function_shmem_long_inc);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_inc_188);
}

void shmem_longlong_inc (long long*  a1, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_inc) { 
    libshmem_longlong_inc = dlsym(RTLD_NEXT, "shmem_longlong_inc");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_inc_189);
  enter_function(function_shmem_longlong_inc);
  libshmem_longlong_inc (a1, a4);
  leave_function(function_shmem_longlong_inc);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_inc_190);
}

void shmem_short_wait (short*  a1, short a4) {
  FUNCTION_ENTRY;
  if (!libshmem_short_wait) { 
    libshmem_short_wait = dlsym(RTLD_NEXT, "shmem_short_wait");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_wait_191);
  enter_function(function_shmem_short_wait);
  libshmem_short_wait (a1, a4);
  leave_function(function_shmem_short_wait);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_wait_192);
}

void shmem_int_wait (int*  a1, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_int_wait) { 
    libshmem_int_wait = dlsym(RTLD_NEXT, "shmem_int_wait");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_wait_193);
  enter_function(function_shmem_int_wait);
  libshmem_int_wait (a1, a4);
  leave_function(function_shmem_int_wait);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_wait_194);
}

void shmem_long_wait (long*  a1, long a4) {
  FUNCTION_ENTRY;
  if (!libshmem_long_wait) { 
    libshmem_long_wait = dlsym(RTLD_NEXT, "shmem_long_wait");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_wait_195);
  enter_function(function_shmem_long_wait);
  libshmem_long_wait (a1, a4);
  leave_function(function_shmem_long_wait);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_wait_196);
}

void shmem_longlong_wait (long long*  a1, long long a4) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_wait) { 
    libshmem_longlong_wait = dlsym(RTLD_NEXT, "shmem_longlong_wait");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_wait_197);
  enter_function(function_shmem_longlong_wait);
  libshmem_longlong_wait (a1, a4);
  leave_function(function_shmem_longlong_wait);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_wait_198);
}

void shmem_wait (long*  a1, long a4) {
  FUNCTION_ENTRY;
  if (!libshmem_wait) { 
    libshmem_wait = dlsym(RTLD_NEXT, "shmem_wait");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_wait_199);
  enter_function(function_shmem_wait);
  libshmem_wait (a1, a4);
  leave_function(function_shmem_wait);
  RECORD_EVENT(EZTRACE_shmem_shmem_wait_200);
}

void shmem_short_wait_until (short*  a1, int a3, short a4) {
  FUNCTION_ENTRY;
  if (!libshmem_short_wait_until) { 
    libshmem_short_wait_until = dlsym(RTLD_NEXT, "shmem_short_wait_until");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_wait_until_201);
  enter_function(function_shmem_short_wait_until);
  libshmem_short_wait_until (a1, a3, a4);
  leave_function(function_shmem_short_wait_until);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_wait_until_202);
}

void shmem_int_wait_until (int*  a1, int a2, int a4) {
  FUNCTION_ENTRY;
  if (!libshmem_int_wait_until) { 
    libshmem_int_wait_until = dlsym(RTLD_NEXT, "shmem_int_wait_until");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_wait_until_203);
  enter_function(function_shmem_int_wait_until);
  libshmem_int_wait_until (a1, a2, a4);
  leave_function(function_shmem_int_wait_until);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_wait_until_204);
}

void shmem_long_wait_until (long*  a1, int a2, long a4) {
  FUNCTION_ENTRY;
  if (!libshmem_long_wait_until) { 
    libshmem_long_wait_until = dlsym(RTLD_NEXT, "shmem_long_wait_until");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_wait_until_205);
  enter_function(function_shmem_long_wait_until);
  libshmem_long_wait_until (a1, a2, a4);
  leave_function(function_shmem_long_wait_until);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_wait_until_206);
}

void shmem_longlong_wait_until (long long*  a1, int a2, long long a4) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_wait_until) { 
    libshmem_longlong_wait_until = dlsym(RTLD_NEXT, "shmem_longlong_wait_until");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_wait_until_207);
  enter_function(function_shmem_longlong_wait_until);
  libshmem_longlong_wait_until (a1, a2, a4);
  leave_function(function_shmem_longlong_wait_until);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_wait_until_208);
}

void shmem_wait_until (long*  a1, int a2, long a4) {
  FUNCTION_ENTRY;
  if (!libshmem_wait_until) { 
    libshmem_wait_until = dlsym(RTLD_NEXT, "shmem_wait_until");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_wait_until_209);
  enter_function(function_shmem_wait_until);
  libshmem_wait_until (a1, a2, a4);
  leave_function(function_shmem_wait_until);
  RECORD_EVENT(EZTRACE_shmem_shmem_wait_until_210);
}

void shmem_barrier_all () {
  FUNCTION_ENTRY;
  if (!libshmem_barrier_all) { 
    libshmem_barrier_all = dlsym(RTLD_NEXT, "shmem_barrier_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_barrier_all_211);
  enter_function(function_shmem_barrier_all);
  libshmem_barrier_all ();
  leave_function(function_shmem_barrier_all);
  RECORD_EVENT (EZTRACE_shmem_shmem_barrier_all_212);
}
void shmem_barrier (int a1, int a2, int a3, long*  a4) {
  FUNCTION_ENTRY;
  if (!libshmem_barrier) { 
    libshmem_barrier = dlsym(RTLD_NEXT, "shmem_barrier");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_barrier_213);
  enter_function(function_shmem_barrier);
  libshmem_barrier (a1, a2, a3, a4);
  leave_function(function_shmem_barrier);
  RECORD_EVENT(EZTRACE_shmem_shmem_barrier_214);
}

void shmem_fence () {
  FUNCTION_ENTRY;
  if (!libshmem_fence) { 
    libshmem_fence = dlsym(RTLD_NEXT, "shmem_fence");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_fence_215);
  enter_function(function_shmem_fence);
  libshmem_fence ();
  leave_function(function_shmem_fence);
  RECORD_EVENT (EZTRACE_shmem_shmem_fence_216);
}

void shmem_quiet () {
  FUNCTION_ENTRY;
  if (!libshmem_quiet) { 
    libshmem_quiet = dlsym(RTLD_NEXT, "shmem_quiet");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_quiet_217);
  enter_function(function_shmem_quiet);
  libshmem_quiet ();
  leave_function(function_shmem_quiet);
  RECORD_EVENT (EZTRACE_shmem_shmem_quiet_218);
}

void shmem_short_and_to_all (short*  a1, short*  a2, int a3, int b, int c, int d, short* e, long*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_short_and_to_all) { 
    libshmem_short_and_to_all = dlsym(RTLD_NEXT, "shmem_short_and_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_and_to_all_219);
  enter_function(function_shmem_short_and_to_all);
  libshmem_short_and_to_all (a1, a2, a3, b, c, d, e, f);
  leave_function(function_shmem_short_and_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_and_to_all_220);
}

void shmem_int_and_to_all (int*  a1, int*  a2, int a3, int b, int c, int d, int*  e, long*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_int_and_to_all) { 
    libshmem_int_and_to_all = dlsym(RTLD_NEXT, "shmem_int_and_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_and_to_all_221);
  enter_function(function_shmem_int_and_to_all);
  libshmem_int_and_to_all (a1, a2, a3, b, c, d, e, f);
  leave_function(function_shmem_int_and_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_and_to_all_222);
}

void shmem_long_and_to_all (long*  a1, long*  a2, int a3, int b, int c, int d, long*  e, long*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_long_and_to_all) { 
    libshmem_long_and_to_all = dlsym(RTLD_NEXT, "shmem_long_and_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_and_to_all_223);
  enter_function(function_shmem_long_and_to_all);
  libshmem_long_and_to_all (a1, a2, a3, b, c, d, e, f);
  leave_function(function_shmem_long_and_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_and_to_all_224);
}

void shmem_longlong_and_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long* g) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_and_to_all) { 
    libshmem_longlong_and_to_all = dlsym(RTLD_NEXT, "shmem_longlong_and_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_and_to_all_225);
  enter_function(function_shmem_longlong_and_to_all);
  libshmem_longlong_and_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_longlong_and_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_and_to_all_226);
}

void shmem_short_or_to_all (short*  a1, short*  a2, int b, int c, int d, int e, short* f, long* g) {
  FUNCTION_ENTRY;
  if (!libshmem_short_or_to_all) { 
    libshmem_short_or_to_all = dlsym(RTLD_NEXT, "shmem_short_or_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_or_to_all_227);
  enter_function(function_shmem_short_or_to_all);
  libshmem_short_or_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_short_or_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_or_to_all_228);
}

void shmem_int_or_to_all (int*  a1, int*  a2, int c, int d, int e, int f, int*  g, long*  h) {
  FUNCTION_ENTRY;
  if (!libshmem_int_or_to_all) { 
    libshmem_int_or_to_all = dlsym(RTLD_NEXT, "shmem_int_or_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_or_to_all_229);
  enter_function(function_shmem_int_or_to_all);
  libshmem_int_or_to_all (a1, a2, c, d, e, f, g, h);
  leave_function(function_shmem_int_or_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_or_to_all_230);
}

void shmem_long_or_to_all (long*  a1, long*  a2, int c, int d, int e, int f, long* g, long*  h) {
  FUNCTION_ENTRY;
  if (!libshmem_long_or_to_all) { 
    libshmem_long_or_to_all = dlsym(RTLD_NEXT, "shmem_long_or_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_or_to_all_231);
  enter_function(function_shmem_long_or_to_all);
  libshmem_long_or_to_all (a1, a2, c, d, e, f, g, h);
  leave_function(function_shmem_long_or_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_or_to_all_232);
}

void shmem_longlong_or_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_or_to_all) { 
    libshmem_longlong_or_to_all = dlsym(RTLD_NEXT, "shmem_longlong_or_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_or_to_all_233);
  enter_function(function_shmem_longlong_or_to_all);
  libshmem_longlong_or_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_longlong_or_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_or_to_all_234);
}

void shmem_short_xor_to_all (short*  a1, short*  a2, int b, int c, int d, int e, short*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_short_xor_to_all) { 
    libshmem_short_xor_to_all = dlsym(RTLD_NEXT, "shmem_short_xor_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_xor_to_all_235);
  enter_function(function_shmem_short_xor_to_all);
  libshmem_short_xor_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_short_xor_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_xor_to_all_236);
}

void shmem_int_xor_to_all (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_int_xor_to_all) { 
    libshmem_int_xor_to_all = dlsym(RTLD_NEXT, "shmem_int_xor_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_xor_to_all_237);
  enter_function(function_shmem_int_xor_to_all);
  libshmem_int_xor_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_int_xor_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_xor_to_all_238);
}

void shmem_long_xor_to_all (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_long_xor_to_all) { 
    libshmem_long_xor_to_all = dlsym(RTLD_NEXT, "shmem_long_xor_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_xor_to_all_239);
  enter_function(function_shmem_long_xor_to_all);
  libshmem_long_xor_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_long_xor_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_xor_to_all_240);
}

void shmem_longlong_xor_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_xor_to_all) { 
    libshmem_longlong_xor_to_all = dlsym(RTLD_NEXT, "shmem_longlong_xor_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_xor_to_all_241);
  enter_function(function_shmem_longlong_xor_to_all);
  libshmem_longlong_xor_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_longlong_xor_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_xor_to_all_242);
}

void shmem_short_max_to_all (short*  a1, short*  a2, int b, int c, int d, int e, short*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_short_max_to_all) { 
    libshmem_short_max_to_all = dlsym(RTLD_NEXT, "shmem_short_max_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_max_to_all_243);
  enter_function(function_shmem_short_max_to_all);
  libshmem_short_max_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_short_max_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_max_to_all_244);
}

void shmem_int_max_to_all (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_int_max_to_all) { 
    libshmem_int_max_to_all = dlsym(RTLD_NEXT, "shmem_int_max_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_max_to_all_245);
  enter_function(function_shmem_int_max_to_all);
  libshmem_int_max_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_int_max_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_max_to_all_246);
}

void shmem_long_max_to_all (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_long_max_to_all) { 
    libshmem_long_max_to_all = dlsym(RTLD_NEXT, "shmem_long_max_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_max_to_all_247);
  enter_function(function_shmem_long_max_to_all);
  libshmem_long_max_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_long_max_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_max_to_all_248);
}

void shmem_float_max_to_all (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_float_max_to_all) { 
    libshmem_float_max_to_all = dlsym(RTLD_NEXT, "shmem_float_max_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_float_max_to_all_249);
  enter_function(function_shmem_float_max_to_all);
  libshmem_float_max_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_float_max_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_float_max_to_all_250);
}

void shmem_double_max_to_all (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_double_max_to_all) { 
    libshmem_double_max_to_all = dlsym(RTLD_NEXT, "shmem_double_max_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_double_max_to_all_251);
  enter_function(function_shmem_double_max_to_all);
  libshmem_double_max_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_double_max_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_double_max_to_all_252);
}

void shmem_longlong_max_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_max_to_all) { 
    libshmem_longlong_max_to_all = dlsym(RTLD_NEXT, "shmem_longlong_max_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_max_to_all_253);
  enter_function(function_shmem_longlong_max_to_all);
  libshmem_longlong_max_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_longlong_max_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_max_to_all_254);
}

void shmem_longdouble_max_to_all (long double*  a1, long double*  a2, int b, int c, int d, int e, long double*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_longdouble_max_to_all) { 
    libshmem_longdouble_max_to_all = dlsym(RTLD_NEXT, "shmem_longdouble_max_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_max_to_all_255);
  enter_function(function_shmem_longdouble_max_to_all);
  libshmem_longdouble_max_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_longdouble_max_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_max_to_all_256);
}

void shmem_short_min_to_all (short*  a1, short*  a2, int b, int c, int d, int e, short*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_short_min_to_all) { 
    libshmem_short_min_to_all = dlsym(RTLD_NEXT, "shmem_short_min_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_min_to_all_257);
  enter_function(function_shmem_short_min_to_all);
  libshmem_short_min_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_short_min_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_min_to_all_258);
}

void shmem_int_min_to_all (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_int_min_to_all) { 
    libshmem_int_min_to_all = dlsym(RTLD_NEXT, "shmem_int_min_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_min_to_all_259);
  enter_function(function_shmem_int_min_to_all);
  libshmem_int_min_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_int_min_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_min_to_all_260);
}

void shmem_long_min_to_all (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_long_min_to_all) { 
    libshmem_long_min_to_all = dlsym(RTLD_NEXT, "shmem_long_min_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_min_to_all_261);
  enter_function(function_shmem_long_min_to_all);
  libshmem_long_min_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_long_min_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_min_to_all_262);
}

void shmem_float_min_to_all (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_float_min_to_all) { 
    libshmem_float_min_to_all = dlsym(RTLD_NEXT, "shmem_float_min_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_float_min_to_all_263);
  enter_function(function_shmem_float_min_to_all);
  libshmem_float_min_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_float_min_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_float_min_to_all_264);
}

void shmem_double_min_to_all (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_double_min_to_all) { 
    libshmem_double_min_to_all = dlsym(RTLD_NEXT, "shmem_double_min_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_double_min_to_all_265);
  enter_function(function_shmem_double_min_to_all);
  libshmem_double_min_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_double_min_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_double_min_to_all_266);
}

void shmem_longlong_min_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_min_to_all) { 
    libshmem_longlong_min_to_all = dlsym(RTLD_NEXT, "shmem_longlong_min_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_min_to_all_267);
  enter_function(function_shmem_longlong_min_to_all);
  libshmem_longlong_min_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_longlong_min_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_min_to_all_268);
}

void shmem_longdouble_min_to_all (long double*  a1, long double*  a2, int b, int c, int d, int e, long double* f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_longdouble_min_to_all) { 
    libshmem_longdouble_min_to_all = dlsym(RTLD_NEXT, "shmem_longdouble_min_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_min_to_all_269);
  enter_function(function_shmem_longdouble_min_to_all);
  libshmem_longdouble_min_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_longdouble_min_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_min_to_all_270);
}

void shmem_short_sum_to_all (short*  a1, short*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_short_sum_to_all) { 
    libshmem_short_sum_to_all = dlsym(RTLD_NEXT, "shmem_short_sum_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_sum_to_all_271);
  enter_function(function_shmem_short_sum_to_all);
  libshmem_short_sum_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_short_sum_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_sum_to_all_272);
}

void shmem_int_sum_to_all (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_int_sum_to_all) { 
    libshmem_int_sum_to_all = dlsym(RTLD_NEXT, "shmem_int_sum_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_sum_to_all_273);
  enter_function(function_shmem_int_sum_to_all);
  libshmem_int_sum_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_int_sum_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_sum_to_all_274);
}

void shmem_long_sum_to_all (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_long_sum_to_all) { 
    libshmem_long_sum_to_all = dlsym(RTLD_NEXT, "shmem_long_sum_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_sum_to_all_275);
  enter_function(function_shmem_long_sum_to_all);
  libshmem_long_sum_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_long_sum_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_sum_to_all_276);
}

void shmem_float_sum_to_all (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_float_sum_to_all) { 
    libshmem_float_sum_to_all = dlsym(RTLD_NEXT, "shmem_float_sum_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_float_sum_to_all_277);
  enter_function(function_shmem_float_sum_to_all);
  libshmem_float_sum_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_float_sum_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_float_sum_to_all_278);
}

void shmem_double_sum_to_all (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_double_sum_to_all) { 
    libshmem_double_sum_to_all = dlsym(RTLD_NEXT, "shmem_double_sum_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_double_sum_to_all_279);
  enter_function(function_shmem_double_sum_to_all);
  libshmem_double_sum_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_double_sum_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_double_sum_to_all_280);
}

void shmem_longlong_sum_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long* f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_sum_to_all) { 
    libshmem_longlong_sum_to_all = dlsym(RTLD_NEXT, "shmem_longlong_sum_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_sum_to_all_281);
  enter_function(function_shmem_longlong_sum_to_all);
  libshmem_longlong_sum_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_longlong_sum_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_sum_to_all_282);
}

void shmem_longdouble_sum_to_all (long double*  a1, long double*  a2, int b, int c, int d, int e, long double* f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_longdouble_sum_to_all) { 
    libshmem_longdouble_sum_to_all = dlsym(RTLD_NEXT, "shmem_longdouble_sum_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_sum_to_all_283);
  enter_function(function_shmem_longdouble_sum_to_all);
  libshmem_longdouble_sum_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_longdouble_sum_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_sum_to_all_284);
}

void shmem_short_prod_to_all (short*  a1, short*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_short_prod_to_all) { 
    libshmem_short_prod_to_all = dlsym(RTLD_NEXT, "shmem_short_prod_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_prod_to_all_285);
  enter_function(function_shmem_short_prod_to_all);
  libshmem_short_prod_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_short_prod_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_prod_to_all_286);
}

void shmem_int_prod_to_all (int*  a1, int*  a2, int b, int c, int d, int e, int*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_int_prod_to_all) { 
    libshmem_int_prod_to_all = dlsym(RTLD_NEXT, "shmem_int_prod_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_prod_to_all_287);
  enter_function(function_shmem_int_prod_to_all);
  libshmem_int_prod_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_int_prod_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_prod_to_all_288);
}

void shmem_long_prod_to_all (long*  a1, long*  a2, int b, int c, int d, int e, long*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_long_prod_to_all) { 
    libshmem_long_prod_to_all = dlsym(RTLD_NEXT, "shmem_long_prod_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_prod_to_all_289);
  enter_function(function_shmem_long_prod_to_all);
  libshmem_long_prod_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_long_prod_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_prod_to_all_290);
}

void shmem_float_prod_to_all (float*  a1, float*  a2, int b, int c, int d, int e, float*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_float_prod_to_all) { 
    libshmem_float_prod_to_all = dlsym(RTLD_NEXT, "shmem_float_prod_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_float_prod_to_all_291);
  enter_function(function_shmem_float_prod_to_all);
  libshmem_float_prod_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_float_prod_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_float_prod_to_all_292);
}

void shmem_double_prod_to_all (double*  a1, double*  a2, int b, int c, int d, int e, double*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_double_prod_to_all) { 
    libshmem_double_prod_to_all = dlsym(RTLD_NEXT, "shmem_double_prod_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_double_prod_to_all_293);
  enter_function(function_shmem_double_prod_to_all);
  libshmem_double_prod_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_double_prod_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_double_prod_to_all_294);
}

void shmem_longlong_prod_to_all (long long*  a1, long long*  a2, int b, int c, int d, int e, long long*  f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_prod_to_all) { 
    libshmem_longlong_prod_to_all = dlsym(RTLD_NEXT, "shmem_longlong_prod_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_prod_to_all_295);
  enter_function(function_shmem_longlong_prod_to_all);
  libshmem_longlong_prod_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_longlong_prod_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_prod_to_all_296);
}

void shmem_longdouble_prod_to_all (long double*  a1, long double*  a2, int b, int c, int d, int e, long double* f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_longdouble_prod_to_all) { 
    libshmem_longdouble_prod_to_all = dlsym(RTLD_NEXT, "shmem_longdouble_prod_to_all");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_prod_to_all_297);
  enter_function(function_shmem_longdouble_prod_to_all);
  libshmem_longdouble_prod_to_all (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_longdouble_prod_to_all);
  RECORD_EVENT(EZTRACE_shmem_shmem_longdouble_prod_to_all_298);
}

void shmem_collect32 (void*  a1, const void*  a2, size_t b, int c, int d, int e, long* f) {
  FUNCTION_ENTRY;
  if (!libshmem_collect32) { 
    libshmem_collect32 = dlsym(RTLD_NEXT, "shmem_collect32");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_collect32_299);
  enter_function(function_shmem_collect32);
  libshmem_collect32 (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_collect32);
  RECORD_EVENT(EZTRACE_shmem_shmem_collect32_300);
}

void shmem_collect64 (void*  a1, const void*  a2, size_t b, int c, int d, int e, long*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_collect64) { 
    libshmem_collect64 = dlsym(RTLD_NEXT, "shmem_collect64");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_collect64_301);
  enter_function(function_shmem_collect64);
  libshmem_collect64 (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_collect64);
  RECORD_EVENT(EZTRACE_shmem_shmem_collect64_302);
}

void shmem_short_collect (short*  a1, const short*  a2, size_t b, int c, int d, int e, short*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_short_collect) { 
    libshmem_short_collect = dlsym(RTLD_NEXT, "shmem_short_collect");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_collect_303);
  enter_function(function_shmem_short_collect);
  libshmem_short_collect (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_short_collect);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_collect_304);
}

void shmem_int_collect (int*  a1, const int*  a2, size_t b, int c, int d, int e, int*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_int_collect) { 
    libshmem_int_collect = dlsym(RTLD_NEXT, "shmem_int_collect");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_collect_305);
  enter_function(function_shmem_int_collect);
  libshmem_int_collect (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_int_collect);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_collect_306);
}

void shmem_long_collect (long*  a1, const long*  a2, size_t b, int c, int d, int e, long*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_long_collect) { 
    libshmem_long_collect = dlsym(RTLD_NEXT, "shmem_long_collect");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_collect_307);
  enter_function(function_shmem_long_collect);
  libshmem_long_collect (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_long_collect);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_collect_308);
}

void shmem_longlong_collect (long long*  a1, const long long*  a2, size_t b, int c, int d, int e, long long*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_collect) { 
    libshmem_longlong_collect = dlsym(RTLD_NEXT, "shmem_longlong_collect");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_collect_309);
  enter_function(function_shmem_longlong_collect);
  libshmem_longlong_collect (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_longlong_collect);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_collect_310);
}

void shmem_float_collect (float*  a1, const float*  a2, size_t b, int c, int d, int e, float*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_float_collect) { 
    libshmem_float_collect = dlsym(RTLD_NEXT, "shmem_float_collect");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_float_collect_311);
  enter_function(function_shmem_float_collect);
  libshmem_float_collect (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_float_collect);
  RECORD_EVENT(EZTRACE_shmem_shmem_float_collect_312);
}

void shmem_double_collect (double*  a1, const double*  a2, size_t b, int c, int d, int e, double*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_double_collect) { 
    libshmem_double_collect = dlsym(RTLD_NEXT, "shmem_double_collect");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_double_collect_313);
  enter_function(function_shmem_double_collect);
  libshmem_double_collect (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_double_collect);
  RECORD_EVENT(EZTRACE_shmem_shmem_double_collect_314);
}

void shmem_fcollect32 (void*  a1, const void*  a2, size_t b, int c, int d, int e, long*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_fcollect32) { 
    libshmem_fcollect32 = dlsym(RTLD_NEXT, "shmem_fcollect32");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_fcollect32_315);
  enter_function(function_shmem_fcollect32);
  libshmem_fcollect32 (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_fcollect32);
  RECORD_EVENT(EZTRACE_shmem_shmem_fcollect32_316);
}

void shmem_fcollect64 (void*  a1, const void*  a2, size_t b, int c, int d, int e, long*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_fcollect64) { 
    libshmem_fcollect64 = dlsym(RTLD_NEXT, "shmem_fcollect64");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_fcollect64_317);
  enter_function(function_shmem_fcollect64);
  libshmem_fcollect64 (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_fcollect64);
  RECORD_EVENT(EZTRACE_shmem_shmem_fcollect64_318);
}

void shmem_short_fcollect (short*  a1, const short*  a2, size_t b, int c, int d, int e, short*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_short_fcollect) { 
    libshmem_short_fcollect = dlsym(RTLD_NEXT, "shmem_short_fcollect");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_fcollect_319);
  enter_function(function_shmem_short_fcollect);
  libshmem_short_fcollect (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_short_fcollect);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_fcollect_320);
}

void shmem_int_fcollect (int*  a1, const int*  a2, size_t b, int c, int d, int e, int*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_int_fcollect) { 
    libshmem_int_fcollect = dlsym(RTLD_NEXT, "shmem_int_fcollect");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_fcollect_321);
  enter_function(function_shmem_int_fcollect);
  libshmem_int_fcollect (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_int_fcollect);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_fcollect_322);
}

void shmem_long_fcollect (long*  a1, const long*  a2, size_t b, int c, int d, int e, long*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_long_fcollect) { 
    libshmem_long_fcollect = dlsym(RTLD_NEXT, "shmem_long_fcollect");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_fcollect_323);
  enter_function(function_shmem_long_fcollect);
  libshmem_long_fcollect (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_long_fcollect);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_fcollect_324);
}

void shmem_longlong_fcollect (long long*  a1, const long long*  a2, size_t b, int c, int d, int e, long long*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_fcollect) { 
    libshmem_longlong_fcollect = dlsym(RTLD_NEXT, "shmem_longlong_fcollect");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_fcollect_325);
  enter_function(function_shmem_longlong_fcollect);
  libshmem_longlong_fcollect (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_longlong_fcollect);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_fcollect_326);
}

void shmem_float_fcollect (float*  a1, const float*  a2, size_t b, int c, int d, int e, float*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_float_fcollect) { 
    libshmem_float_fcollect = dlsym(RTLD_NEXT, "shmem_float_fcollect");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_float_fcollect_327);
  enter_function(function_shmem_float_fcollect);
  libshmem_float_fcollect (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_float_fcollect);
  RECORD_EVENT(EZTRACE_shmem_shmem_float_fcollect_328);
}

void shmem_double_fcollect (double*  a1, const double*  a2, size_t b, int c, int d, int e, double*  f) {
  FUNCTION_ENTRY;
  if (!libshmem_double_fcollect) { 
    libshmem_double_fcollect = dlsym(RTLD_NEXT, "shmem_double_fcollect");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_double_fcollect_329);
  enter_function(function_shmem_double_fcollect);
  libshmem_double_fcollect (a1, a2, b, c, d, e, f);
  leave_function(function_shmem_double_fcollect);
  RECORD_EVENT(EZTRACE_shmem_shmem_double_fcollect_330);
}

void shmem_broadcast32 (void*  a1, const void*  a2, size_t b, int c, int d, int e, int f, long* g) {
  FUNCTION_ENTRY;
  if (!libshmem_broadcast32) { 
    libshmem_broadcast32 = dlsym(RTLD_NEXT, "shmem_broadcast32");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_broadcast32_331);
  enter_function(function_shmem_broadcast32);
  libshmem_broadcast32 (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_broadcast32);
  RECORD_EVENT(EZTRACE_shmem_shmem_broadcast32_332);
}

void shmem_broadcast64 (void*  a1, const void*  a2, size_t b, int c, int d, int e, int f, long* g) {
  FUNCTION_ENTRY;
  if (!libshmem_broadcast64) { 
    libshmem_broadcast64 = dlsym(RTLD_NEXT, "shmem_broadcast64");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_broadcast64_333);
  enter_function(function_shmem_broadcast64);
  libshmem_broadcast64 (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_broadcast64);
  RECORD_EVENT(EZTRACE_shmem_shmem_broadcast64_334);
}

void shmem_short_broadcast (short*  a1, const short*  a2, size_t b, int c, int d, int e, int f, short*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_short_broadcast) { 
    libshmem_short_broadcast = dlsym(RTLD_NEXT, "shmem_short_broadcast");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_short_broadcast_335);
  enter_function(function_shmem_short_broadcast);
  libshmem_short_broadcast (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_short_broadcast);
  RECORD_EVENT(EZTRACE_shmem_shmem_short_broadcast_336);
}

void shmem_int_broadcast (int*  a1, const int*  a2, size_t b, int c, int d, int e, int f, int*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_int_broadcast) { 
    libshmem_int_broadcast = dlsym(RTLD_NEXT, "shmem_int_broadcast");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_int_broadcast_337);
  enter_function(function_shmem_int_broadcast);
  libshmem_int_broadcast (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_int_broadcast);
  RECORD_EVENT(EZTRACE_shmem_shmem_int_broadcast_338);
}

void shmem_long_broadcast (long*  a1, const long*  a2, size_t b, int c, int d, int e, int f, long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_long_broadcast) { 
    libshmem_long_broadcast = dlsym(RTLD_NEXT, "shmem_long_broadcast");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_long_broadcast_339);
  enter_function(function_shmem_long_broadcast);
  libshmem_long_broadcast (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_long_broadcast);
  RECORD_EVENT(EZTRACE_shmem_shmem_long_broadcast_340);
}

void shmem_longlong_broadcast (long long*  a1, const long long*  a2, size_t b, int c, int d, int e, int f, long long*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_longlong_broadcast) { 
    libshmem_longlong_broadcast = dlsym(RTLD_NEXT, "shmem_longlong_broadcast");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_broadcast_341);
  enter_function(function_shmem_longlong_broadcast);
  libshmem_longlong_broadcast (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_longlong_broadcast);
  RECORD_EVENT(EZTRACE_shmem_shmem_longlong_broadcast_342);
}

void shmem_float_broadcast (float*  a1, const float*  a2, size_t b, int c, int d, int e, int f, float*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_float_broadcast) { 
    libshmem_float_broadcast = dlsym(RTLD_NEXT, "shmem_float_broadcast");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_float_broadcast_343);
  enter_function(function_shmem_float_broadcast);
  libshmem_float_broadcast (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_float_broadcast);
  RECORD_EVENT(EZTRACE_shmem_shmem_float_broadcast_344);
}

void shmem_double_broadcast (double*  a1, const double*  a2, size_t b, int c, int d, int e, int f, double*  g) {
  FUNCTION_ENTRY;
  if (!libshmem_double_broadcast) { 
    libshmem_double_broadcast = dlsym(RTLD_NEXT, "shmem_double_broadcast");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_double_broadcast_345);
  enter_function(function_shmem_double_broadcast);
  libshmem_double_broadcast (a1, a2, b, c, d, e, f, g);
  leave_function(function_shmem_double_broadcast);
  RECORD_EVENT(EZTRACE_shmem_shmem_double_broadcast_346);
}

void shmem_set_lock (long*  a) {
  FUNCTION_ENTRY;
  if (!libshmem_set_lock) { 
    libshmem_set_lock = dlsym(RTLD_NEXT, "shmem_set_lock");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_set_lock_347);
  enter_function(function_shmem_set_lock);
  libshmem_set_lock (a);
  leave_function(function_shmem_set_lock);
  RECORD_EVENT(EZTRACE_shmem_shmem_set_lock_348);
}

void shmem_clear_lock (long* a) {
  FUNCTION_ENTRY;
  if (!libshmem_clear_lock) { 
    libshmem_clear_lock = dlsym(RTLD_NEXT, "shmem_clear_lock");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_clear_lock_349);
  enter_function(function_shmem_clear_lock);
  libshmem_clear_lock (a);
  leave_function(function_shmem_clear_lock);
  RECORD_EVENT(EZTRACE_shmem_shmem_clear_lock_350);
}

int shmem_test_lock (long*  a) {
  FUNCTION_ENTRY;
  if (!libshmem_test_lock) { 
    libshmem_test_lock = dlsym(RTLD_NEXT, "shmem_test_lock");
  }
  RECORD_EVENT(EZTRACE_shmem_shmem_test_lock_351);
  enter_function(function_shmem_test_lock);
  int ret = libshmem_test_lock (a);
  leave_function(function_shmem_test_lock);
  RECORD_EVENT(EZTRACE_shmem_shmem_test_lock_352);
  return ret;
}



START_INTERCEPT
  INTERCEPT2("shmem_init", libshmem_init)
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

  if(getenv("EZT_SHMEM_TRACE")) {
    tracing_enabled=1;
    profiling_enabled=0;
    printf("[EZTrace SHMem] Tracing is enabled\n");
  } else {
    printf("[EZTrace SHMem] Profiling is enabled\n");
  }

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
  if(profile_file) {    
    fclose(profile_file);
  }
}
