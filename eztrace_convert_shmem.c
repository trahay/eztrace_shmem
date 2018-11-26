/*
 * Copyright (C) CNRS, INRIA, Université Bordeaux 1, Télécom SudParis
 * See COPYING in top-level directory.
 */

#include <stdio.h>
#include <GTG.h>
#include "eztrace_convert.h"

#include "shmem_ev_codes.h"

int eztrace_convert_shmem_init();

int handle_shmem_events(eztrace_event_t *ev);
int handle_shmem_stats(eztrace_event_t *ev);
void print_shmem_stats();


void handleEZTRACE_shmem_start_pes_1() ;

void handleEZTRACE_shmem_start_pes_2() ;

void handleEZTRACE_shmem_shmem_n_pes_3() ;

void handleEZTRACE_shmem_shmem_n_pes_4() ;

void handleEZTRACE_shmem_shmem_my_pe_5() ;

void handleEZTRACE_shmem_shmem_my_pe_6() ;

void handleEZTRACE_shmem_shmem_pe_accessible_7() ;

void handleEZTRACE_shmem_shmem_pe_accessible_8() ;

void handleEZTRACE_shmem_shmem_addr_accessible_9() ;

void handleEZTRACE_shmem_shmem_addr_accessible_10() ;

void handleEZTRACE_shmem_shmalloc_11() ;

void handleEZTRACE_shmem_shmalloc_12() ;

void handleEZTRACE_shmem_shmemalign_13() ;

void handleEZTRACE_shmem_shmemalign_14() ;

void handleEZTRACE_shmem_shrealloc_15() ;

void handleEZTRACE_shmem_shrealloc_16() ;

void handleEZTRACE_shmem_shfree_17() ;

void handleEZTRACE_shmem_shfree_18() ;

void handleEZTRACE_shmem_shmem_ptr_19() ;

void handleEZTRACE_shmem_shmem_ptr_20() ;

void handleEZTRACE_shmem_shmem_short_p_21() ;

void handleEZTRACE_shmem_shmem_short_p_22() ;

void handleEZTRACE_shmem_shmem_int_p_23() ;

void handleEZTRACE_shmem_shmem_int_p_24() ;

void handleEZTRACE_shmem_shmem_long_p_25() ;

void handleEZTRACE_shmem_shmem_long_p_26() ;

void handleEZTRACE_shmem_shmem_float_p_27() ;

void handleEZTRACE_shmem_shmem_float_p_28() ;

void handleEZTRACE_shmem_shmem_double_p_29() ;

void handleEZTRACE_shmem_shmem_double_p_30() ;

void handleEZTRACE_shmem_shmem_longlong_p_31() ;

void handleEZTRACE_shmem_shmem_longlong_p_32() ;

void handleEZTRACE_shmem_shmem_longdouble_p_33() ;

void handleEZTRACE_shmem_shmem_longdouble_p_34() ;

void handleEZTRACE_shmem_shmem_char_put_35() ;

void handleEZTRACE_shmem_shmem_char_put_36() ;

void handleEZTRACE_shmem_shmem_short_put_37() ;

void handleEZTRACE_shmem_shmem_short_put_38() ;

void handleEZTRACE_shmem_shmem_int_put_39() ;

void handleEZTRACE_shmem_shmem_int_put_40() ;

void handleEZTRACE_shmem_shmem_long_put_41() ;

void handleEZTRACE_shmem_shmem_long_put_42() ;

void handleEZTRACE_shmem_shmem_float_put_43() ;

void handleEZTRACE_shmem_shmem_float_put_44() ;

void handleEZTRACE_shmem_shmem_double_put_45() ;

void handleEZTRACE_shmem_shmem_double_put_46() ;

void handleEZTRACE_shmem_shmem_longlong_put_47() ;

void handleEZTRACE_shmem_shmem_longlong_put_48() ;

void handleEZTRACE_shmem_shmem_longdouble_put_49() ;

void handleEZTRACE_shmem_shmem_longdouble_put_50() ;

void handleEZTRACE_shmem_shmem_put32_51() ;

void handleEZTRACE_shmem_shmem_put32_52() ;

void handleEZTRACE_shmem_shmem_put64_53() ;

void handleEZTRACE_shmem_shmem_put64_54() ;

void handleEZTRACE_shmem_shmem_put128_55() ;

void handleEZTRACE_shmem_shmem_put128_56() ;

void handleEZTRACE_shmem_shmem_putmem_57() ;

void handleEZTRACE_shmem_shmem_putmem_58() ;

void handleEZTRACE_shmem_shmem_short_iput_59() ;

void handleEZTRACE_shmem_shmem_short_iput_60() ;

void handleEZTRACE_shmem_shmem_int_iput_61() ;

void handleEZTRACE_shmem_shmem_int_iput_62() ;

void handleEZTRACE_shmem_shmem_float_iput_63() ;

void handleEZTRACE_shmem_shmem_float_iput_64() ;

void handleEZTRACE_shmem_shmem_long_iput_65() ;

void handleEZTRACE_shmem_shmem_long_iput_66() ;

void handleEZTRACE_shmem_shmem_double_iput_67() ;

void handleEZTRACE_shmem_shmem_double_iput_68() ;

void handleEZTRACE_shmem_shmem_longlong_iput_69() ;

void handleEZTRACE_shmem_shmem_longlong_iput_70() ;

void handleEZTRACE_shmem_shmem_longdouble_iput_71() ;

void handleEZTRACE_shmem_shmem_longdouble_iput_72() ;

void handleEZTRACE_shmem_shmem_iput32_73() ;

void handleEZTRACE_shmem_shmem_iput32_74() ;

void handleEZTRACE_shmem_shmem_iput64_75() ;

void handleEZTRACE_shmem_shmem_iput64_76() ;

void handleEZTRACE_shmem_shmem_iput128_77() ;

void handleEZTRACE_shmem_shmem_iput128_78() ;

void handleEZTRACE_shmem_shmem_short_g_79() ;

void handleEZTRACE_shmem_shmem_short_g_80() ;

void handleEZTRACE_shmem_shmem_int_g_81() ;

void handleEZTRACE_shmem_shmem_int_g_82() ;

void handleEZTRACE_shmem_shmem_long_g_83() ;

void handleEZTRACE_shmem_shmem_long_g_84() ;

void handleEZTRACE_shmem_shmem_float_g_85() ;

void handleEZTRACE_shmem_shmem_float_g_86() ;

void handleEZTRACE_shmem_shmem_double_g_87() ;

void handleEZTRACE_shmem_shmem_double_g_88() ;

void handleEZTRACE_shmem_shmem_longlong_g_89() ;

void handleEZTRACE_shmem_shmem_longlong_g_90() ;

void handleEZTRACE_shmem_shmem_longdouble_g_91() ;

void handleEZTRACE_shmem_shmem_longdouble_g_92() ;

void handleEZTRACE_shmem_shmem_char_get_93() ;

void handleEZTRACE_shmem_shmem_char_get_94() ;

void handleEZTRACE_shmem_shmem_short_get_95() ;

void handleEZTRACE_shmem_shmem_short_get_96() ;

void handleEZTRACE_shmem_shmem_int_get_97() ;

void handleEZTRACE_shmem_shmem_int_get_98() ;

void handleEZTRACE_shmem_shmem_long_get_99() ;

void handleEZTRACE_shmem_shmem_long_get_100() ;

void handleEZTRACE_shmem_shmem_float_get_101() ;

void handleEZTRACE_shmem_shmem_float_get_102() ;

void handleEZTRACE_shmem_shmem_double_get_103() ;

void handleEZTRACE_shmem_shmem_double_get_104() ;

void handleEZTRACE_shmem_shmem_longlong_get_105() ;

void handleEZTRACE_shmem_shmem_longlong_get_106() ;

void handleEZTRACE_shmem_shmem_longdouble_get_107() ;

void handleEZTRACE_shmem_shmem_longdouble_get_108() ;

void handleEZTRACE_shmem_shmem_get32_109() ;

void handleEZTRACE_shmem_shmem_get32_110() ;

void handleEZTRACE_shmem_shmem_get64_111() ;

void handleEZTRACE_shmem_shmem_get64_112() ;

void handleEZTRACE_shmem_shmem_get128_113() ;

void handleEZTRACE_shmem_shmem_get128_114() ;

void handleEZTRACE_shmem_shmem_getmem_115() ;

void handleEZTRACE_shmem_shmem_getmem_116() ;

void handleEZTRACE_shmem_shmem_iget32_117() ;

void handleEZTRACE_shmem_shmem_iget32_118() ;

void handleEZTRACE_shmem_shmem_iget64_119() ;

void handleEZTRACE_shmem_shmem_iget64_120() ;

void handleEZTRACE_shmem_shmem_iget128_121() ;

void handleEZTRACE_shmem_shmem_iget128_122() ;

void handleEZTRACE_shmem_shmem_short_iget_123() ;

void handleEZTRACE_shmem_shmem_short_iget_124() ;

void handleEZTRACE_shmem_shmem_int_iget_125() ;

void handleEZTRACE_shmem_shmem_int_iget_126() ;

void handleEZTRACE_shmem_shmem_long_iget_127() ;

void handleEZTRACE_shmem_shmem_long_iget_128() ;

void handleEZTRACE_shmem_shmem_double_iget_129() ;

void handleEZTRACE_shmem_shmem_double_iget_130() ;

void handleEZTRACE_shmem_shmem_float_iget_131() ;

void handleEZTRACE_shmem_shmem_float_iget_132() ;

void handleEZTRACE_shmem_shmem_longlong_iget_133() ;

void handleEZTRACE_shmem_shmem_longlong_iget_134() ;

void handleEZTRACE_shmem_shmem_longdouble_iget_135() ;

void handleEZTRACE_shmem_shmem_longdouble_iget_136() ;

void handleEZTRACE_shmem_shmem_short_swap_137() ;

void handleEZTRACE_shmem_shmem_short_swap_138() ;

void handleEZTRACE_shmem_shmem_int_swap_139() ;

void handleEZTRACE_shmem_shmem_int_swap_140() ;

void handleEZTRACE_shmem_shmem_long_swap_141() ;

void handleEZTRACE_shmem_shmem_long_swap_142() ;

void handleEZTRACE_shmem_shmem_swap_143() ;

void handleEZTRACE_shmem_shmem_swap_144() ;

void handleEZTRACE_shmem_shmem_longlong_swap_145() ;

void handleEZTRACE_shmem_shmem_longlong_swap_146() ;

void handleEZTRACE_shmem_shmem_float_swap_147() ;

void handleEZTRACE_shmem_shmem_float_swap_148() ;

void handleEZTRACE_shmem_shmem_double_swap_149() ;

void handleEZTRACE_shmem_shmem_double_swap_150() ;

void handleEZTRACE_shmem_shmem_short_cswap_151() ;

void handleEZTRACE_shmem_shmem_short_cswap_152() ;

void handleEZTRACE_shmem_shmem_int_cswap_153() ;

void handleEZTRACE_shmem_shmem_int_cswap_154() ;

void handleEZTRACE_shmem_shmem_long_cswap_155() ;

void handleEZTRACE_shmem_shmem_long_cswap_156() ;

void handleEZTRACE_shmem_shmem_longlong_cswap_157() ;

void handleEZTRACE_shmem_shmem_longlong_cswap_158() ;

void handleEZTRACE_shmem_shmem_short_fadd_159() ;

void handleEZTRACE_shmem_shmem_short_fadd_160() ;

void handleEZTRACE_shmem_shmem_int_fadd_161() ;

void handleEZTRACE_shmem_shmem_int_fadd_162() ;

void handleEZTRACE_shmem_shmem_long_fadd_163() ;

void handleEZTRACE_shmem_shmem_long_fadd_164() ;

void handleEZTRACE_shmem_shmem_longlong_fadd_165() ;

void handleEZTRACE_shmem_shmem_longlong_fadd_166() ;

void handleEZTRACE_shmem_shmem_short_finc_167() ;

void handleEZTRACE_shmem_shmem_short_finc_168() ;

void handleEZTRACE_shmem_shmem_int_finc_169() ;

void handleEZTRACE_shmem_shmem_int_finc_170() ;

void handleEZTRACE_shmem_shmem_long_finc_171() ;

void handleEZTRACE_shmem_shmem_long_finc_172() ;

void handleEZTRACE_shmem_shmem_longlong_finc_173() ;

void handleEZTRACE_shmem_shmem_longlong_finc_174() ;

void handleEZTRACE_shmem_shmem_short_add_175() ;

void handleEZTRACE_shmem_shmem_short_add_176() ;

void handleEZTRACE_shmem_shmem_int_add_177() ;

void handleEZTRACE_shmem_shmem_int_add_178() ;

void handleEZTRACE_shmem_shmem_long_add_179() ;

void handleEZTRACE_shmem_shmem_long_add_180() ;

void handleEZTRACE_shmem_shmem_longlong_add_181() ;

void handleEZTRACE_shmem_shmem_longlong_add_182() ;

void handleEZTRACE_shmem_shmem_short_inc_183() ;

void handleEZTRACE_shmem_shmem_short_inc_184() ;

void handleEZTRACE_shmem_shmem_int_inc_185() ;

void handleEZTRACE_shmem_shmem_int_inc_186() ;

void handleEZTRACE_shmem_shmem_long_inc_187() ;

void handleEZTRACE_shmem_shmem_long_inc_188() ;

void handleEZTRACE_shmem_shmem_longlong_inc_189() ;

void handleEZTRACE_shmem_shmem_longlong_inc_190() ;

void handleEZTRACE_shmem_shmem_short_wait_191() ;

void handleEZTRACE_shmem_shmem_short_wait_192() ;

void handleEZTRACE_shmem_shmem_int_wait_193() ;

void handleEZTRACE_shmem_shmem_int_wait_194() ;

void handleEZTRACE_shmem_shmem_long_wait_195() ;

void handleEZTRACE_shmem_shmem_long_wait_196() ;

void handleEZTRACE_shmem_shmem_longlong_wait_197() ;

void handleEZTRACE_shmem_shmem_longlong_wait_198() ;

void handleEZTRACE_shmem_shmem_wait_199() ;

void handleEZTRACE_shmem_shmem_wait_200() ;

void handleEZTRACE_shmem_shmem_short_wait_until_201() ;

void handleEZTRACE_shmem_shmem_short_wait_until_202() ;

void handleEZTRACE_shmem_shmem_int_wait_until_203() ;

void handleEZTRACE_shmem_shmem_int_wait_until_204() ;

void handleEZTRACE_shmem_shmem_long_wait_until_205() ;

void handleEZTRACE_shmem_shmem_long_wait_until_206() ;

void handleEZTRACE_shmem_shmem_longlong_wait_until_207() ;

void handleEZTRACE_shmem_shmem_longlong_wait_until_208() ;

void handleEZTRACE_shmem_shmem_wait_until_209() ;

void handleEZTRACE_shmem_shmem_wait_until_210() ;

void handleEZTRACE_shmem_shmem_barrier_all_211() ;

void handleEZTRACE_shmem_shmem_barrier_all_212() ;

void handleEZTRACE_shmem_shmem_barrier_213() ;

void handleEZTRACE_shmem_shmem_barrier_214() ;

void handleEZTRACE_shmem_shmem_fence_215() ;

void handleEZTRACE_shmem_shmem_fence_216() ;

void handleEZTRACE_shmem_shmem_quiet_217() ;

void handleEZTRACE_shmem_shmem_quiet_218() ;

void handleEZTRACE_shmem_shmem_short_and_to_all_219() ;

void handleEZTRACE_shmem_shmem_short_and_to_all_220() ;

void handleEZTRACE_shmem_shmem_int_and_to_all_221() ;

void handleEZTRACE_shmem_shmem_int_and_to_all_222() ;

void handleEZTRACE_shmem_shmem_long_and_to_all_223() ;

void handleEZTRACE_shmem_shmem_long_and_to_all_224() ;

void handleEZTRACE_shmem_shmem_longlong_and_to_all_225() ;

void handleEZTRACE_shmem_shmem_longlong_and_to_all_226() ;

void handleEZTRACE_shmem_shmem_short_or_to_all_227() ;

void handleEZTRACE_shmem_shmem_short_or_to_all_228() ;

void handleEZTRACE_shmem_shmem_int_or_to_all_229() ;

void handleEZTRACE_shmem_shmem_int_or_to_all_230() ;

void handleEZTRACE_shmem_shmem_long_or_to_all_231() ;

void handleEZTRACE_shmem_shmem_long_or_to_all_232() ;

void handleEZTRACE_shmem_shmem_longlong_or_to_all_233() ;

void handleEZTRACE_shmem_shmem_longlong_or_to_all_234() ;

void handleEZTRACE_shmem_shmem_short_xor_to_all_235() ;

void handleEZTRACE_shmem_shmem_short_xor_to_all_236() ;

void handleEZTRACE_shmem_shmem_int_xor_to_all_237() ;

void handleEZTRACE_shmem_shmem_int_xor_to_all_238() ;

void handleEZTRACE_shmem_shmem_long_xor_to_all_239() ;

void handleEZTRACE_shmem_shmem_long_xor_to_all_240() ;

void handleEZTRACE_shmem_shmem_longlong_xor_to_all_241() ;

void handleEZTRACE_shmem_shmem_longlong_xor_to_all_242() ;

void handleEZTRACE_shmem_shmem_short_max_to_all_243() ;

void handleEZTRACE_shmem_shmem_short_max_to_all_244() ;

void handleEZTRACE_shmem_shmem_int_max_to_all_245() ;

void handleEZTRACE_shmem_shmem_int_max_to_all_246() ;

void handleEZTRACE_shmem_shmem_long_max_to_all_247() ;

void handleEZTRACE_shmem_shmem_long_max_to_all_248() ;

void handleEZTRACE_shmem_shmem_float_max_to_all_249() ;

void handleEZTRACE_shmem_shmem_float_max_to_all_250() ;

void handleEZTRACE_shmem_shmem_double_max_to_all_251() ;

void handleEZTRACE_shmem_shmem_double_max_to_all_252() ;

void handleEZTRACE_shmem_shmem_longlong_max_to_all_253() ;

void handleEZTRACE_shmem_shmem_longlong_max_to_all_254() ;

void handleEZTRACE_shmem_shmem_longdouble_max_to_all_255() ;

void handleEZTRACE_shmem_shmem_longdouble_max_to_all_256() ;

void handleEZTRACE_shmem_shmem_short_min_to_all_257() ;

void handleEZTRACE_shmem_shmem_short_min_to_all_258() ;

void handleEZTRACE_shmem_shmem_int_min_to_all_259() ;

void handleEZTRACE_shmem_shmem_int_min_to_all_260() ;

void handleEZTRACE_shmem_shmem_long_min_to_all_261() ;

void handleEZTRACE_shmem_shmem_long_min_to_all_262() ;

void handleEZTRACE_shmem_shmem_float_min_to_all_263() ;

void handleEZTRACE_shmem_shmem_float_min_to_all_264() ;

void handleEZTRACE_shmem_shmem_double_min_to_all_265() ;

void handleEZTRACE_shmem_shmem_double_min_to_all_266() ;

void handleEZTRACE_shmem_shmem_longlong_min_to_all_267() ;

void handleEZTRACE_shmem_shmem_longlong_min_to_all_268() ;

void handleEZTRACE_shmem_shmem_longdouble_min_to_all_269() ;

void handleEZTRACE_shmem_shmem_longdouble_min_to_all_270() ;

void handleEZTRACE_shmem_shmem_short_sum_to_all_271() ;

void handleEZTRACE_shmem_shmem_short_sum_to_all_272() ;

void handleEZTRACE_shmem_shmem_int_sum_to_all_273() ;

void handleEZTRACE_shmem_shmem_int_sum_to_all_274() ;

void handleEZTRACE_shmem_shmem_long_sum_to_all_275() ;

void handleEZTRACE_shmem_shmem_long_sum_to_all_276() ;

void handleEZTRACE_shmem_shmem_float_sum_to_all_277() ;

void handleEZTRACE_shmem_shmem_float_sum_to_all_278() ;

void handleEZTRACE_shmem_shmem_double_sum_to_all_279() ;

void handleEZTRACE_shmem_shmem_double_sum_to_all_280() ;

void handleEZTRACE_shmem_shmem_longlong_sum_to_all_281() ;

void handleEZTRACE_shmem_shmem_longlong_sum_to_all_282() ;

void handleEZTRACE_shmem_shmem_longdouble_sum_to_all_283() ;

void handleEZTRACE_shmem_shmem_longdouble_sum_to_all_284() ;

void handleEZTRACE_shmem_shmem_short_prod_to_all_285() ;

void handleEZTRACE_shmem_shmem_short_prod_to_all_286() ;

void handleEZTRACE_shmem_shmem_int_prod_to_all_287() ;

void handleEZTRACE_shmem_shmem_int_prod_to_all_288() ;

void handleEZTRACE_shmem_shmem_long_prod_to_all_289() ;

void handleEZTRACE_shmem_shmem_long_prod_to_all_290() ;

void handleEZTRACE_shmem_shmem_float_prod_to_all_291() ;

void handleEZTRACE_shmem_shmem_float_prod_to_all_292() ;

void handleEZTRACE_shmem_shmem_double_prod_to_all_293() ;

void handleEZTRACE_shmem_shmem_double_prod_to_all_294() ;

void handleEZTRACE_shmem_shmem_longlong_prod_to_all_295() ;

void handleEZTRACE_shmem_shmem_longlong_prod_to_all_296() ;

void handleEZTRACE_shmem_shmem_longdouble_prod_to_all_297() ;

void handleEZTRACE_shmem_shmem_longdouble_prod_to_all_298() ;

void handleEZTRACE_shmem_shmem_collect32_299() ;

void handleEZTRACE_shmem_shmem_collect32_300() ;

void handleEZTRACE_shmem_shmem_collect64_301() ;

void handleEZTRACE_shmem_shmem_collect64_302() ;

void handleEZTRACE_shmem_shmem_short_collect_303() ;

void handleEZTRACE_shmem_shmem_short_collect_304() ;

void handleEZTRACE_shmem_shmem_int_collect_305() ;

void handleEZTRACE_shmem_shmem_int_collect_306() ;

void handleEZTRACE_shmem_shmem_long_collect_307() ;

void handleEZTRACE_shmem_shmem_long_collect_308() ;

void handleEZTRACE_shmem_shmem_longlong_collect_309() ;

void handleEZTRACE_shmem_shmem_longlong_collect_310() ;

void handleEZTRACE_shmem_shmem_float_collect_311() ;

void handleEZTRACE_shmem_shmem_float_collect_312() ;

void handleEZTRACE_shmem_shmem_double_collect_313() ;

void handleEZTRACE_shmem_shmem_double_collect_314() ;

void handleEZTRACE_shmem_shmem_fcollect32_315() ;

void handleEZTRACE_shmem_shmem_fcollect32_316() ;

void handleEZTRACE_shmem_shmem_fcollect64_317() ;

void handleEZTRACE_shmem_shmem_fcollect64_318() ;

void handleEZTRACE_shmem_shmem_short_fcollect_319() ;

void handleEZTRACE_shmem_shmem_short_fcollect_320() ;

void handleEZTRACE_shmem_shmem_int_fcollect_321() ;

void handleEZTRACE_shmem_shmem_int_fcollect_322() ;

void handleEZTRACE_shmem_shmem_long_fcollect_323() ;

void handleEZTRACE_shmem_shmem_long_fcollect_324() ;

void handleEZTRACE_shmem_shmem_longlong_fcollect_325() ;

void handleEZTRACE_shmem_shmem_longlong_fcollect_326() ;

void handleEZTRACE_shmem_shmem_float_fcollect_327() ;

void handleEZTRACE_shmem_shmem_float_fcollect_328() ;

void handleEZTRACE_shmem_shmem_double_fcollect_329() ;

void handleEZTRACE_shmem_shmem_double_fcollect_330() ;

void handleEZTRACE_shmem_shmem_broadcast32_331() ;

void handleEZTRACE_shmem_shmem_broadcast32_332() ;

void handleEZTRACE_shmem_shmem_broadcast64_333() ;

void handleEZTRACE_shmem_shmem_broadcast64_334() ;

void handleEZTRACE_shmem_shmem_short_broadcast_335() ;

void handleEZTRACE_shmem_shmem_short_broadcast_336() ;

void handleEZTRACE_shmem_shmem_int_broadcast_337() ;

void handleEZTRACE_shmem_shmem_int_broadcast_338() ;

void handleEZTRACE_shmem_shmem_long_broadcast_339() ;

void handleEZTRACE_shmem_shmem_long_broadcast_340() ;

void handleEZTRACE_shmem_shmem_longlong_broadcast_341() ;

void handleEZTRACE_shmem_shmem_longlong_broadcast_342() ;

void handleEZTRACE_shmem_shmem_float_broadcast_343() ;

void handleEZTRACE_shmem_shmem_float_broadcast_344() ;

void handleEZTRACE_shmem_shmem_double_broadcast_345() ;

void handleEZTRACE_shmem_shmem_double_broadcast_346() ;

void handleEZTRACE_shmem_shmem_set_lock_347() ;

void handleEZTRACE_shmem_shmem_set_lock_348() ;

void handleEZTRACE_shmem_shmem_clear_lock_349() ;

void handleEZTRACE_shmem_shmem_clear_lock_350() ;

void handleEZTRACE_shmem_shmem_test_lock_351() ;

void handleEZTRACE_shmem_shmem_test_lock_352() ;


/* thread-specific structure */
struct shmem_thread_info_t {
  struct thread_info_t *p_thread;

  /* TO COMPLETE: You can add per-thread counters here */
};

static struct shmem_thread_info_t *__register_thread_hook(
    struct thread_info_t *p_thread) {
  struct shmem_thread_info_t *ptr = (struct shmem_thread_info_t*) malloc(
      sizeof(struct shmem_thread_info_t));

  ptr->p_thread = p_thread;

  /* TO COMPLETE: If you added per-thread counters, initialize them here*/

  /* add the hook in the thread info structure */
  ezt_hook_list_add(&ptr->p_thread->hooks, ptr,
                   (uint8_t) shmem_EVENTS_ID);
  return ptr;
}

#define  INIT_shmem_THREAD_INFO(p_thread, var)                      \
  struct shmem_thread_info_t *var = (struct shmem_thread_info_t*)        \
    ezt_hook_list_retrieve_data(&p_thread->hooks, (uint8_t)shmem_EVENTS_ID); \
  if(!(var)) {                                                         \
    var = __register_thread_hook(p_thread);                            \
  }


/* Constructor of the plugin.
 * This function registers the current module to eztrace_convert
 */
struct eztrace_convert_module shmem_module;
void libinit(void) __attribute__ ((constructor));
void libinit(void)
{
  shmem_module.api_version = EZTRACE_API_VERSION;

  /* Specify the initialization function.
   * This function will be called once all the plugins are loaded
   * and the trace is started.
   * This function usually declared StateTypes, LinkTypes, etc.
   */
  shmem_module.init = eztrace_convert_shmem_init;

  /* Specify the function to call for handling an event
   */
  shmem_module.handle = handle_shmem_events;

  /* Specify the function to call for handling an event when
   * eztrace_stats is called
   */
  shmem_module.handle_stats = handle_shmem_stats;

  /* Specify the function to call for printinf statistics
   */
  shmem_module.print_stats = print_shmem_stats;

  /* Specify the module prefix */
  shmem_module.module_prefix = shmem_EVENTS_ID;

  asprintf(&shmem_module.name, "shmem");
  asprintf(&shmem_module.description, "module for the shmem API");

  shmem_module.token.data = &shmem_module;

  /* Register the module to eztrace_convert */
  eztrace_convert_register_module(&shmem_module);

  //printf("module shmem loaded\n");
}

void libfinalize(void) __attribute__ ((destructor));
void libfinalize(void)
{
  //printf("unloading module shmem\n");
}



/*
 * This function will be called once all the plugins are loaded
 * and the trace is started.
 * This function usually declared StateTypes, LinkTypes, etc.
 */
int
eztrace_convert_shmem_init()
{
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_0", "ST_Thread", "Doing function start_pes", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_1", "ST_Thread", "Doing function shmem_n_pes", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_2", "ST_Thread", "Doing function shmem_my_pe", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_3", "ST_Thread", "Doing function shmem_pe_accessible", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_4", "ST_Thread", "Doing function shmem_addr_accessible", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_5", "ST_Thread", "Doing function shmalloc", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_6", "ST_Thread", "Doing function shmemalign", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_7", "ST_Thread", "Doing function shrealloc", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_8", "ST_Thread", "Doing function shfree", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_9", "ST_Thread", "Doing function shmem_ptr", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_10", "ST_Thread", "Doing function shmem_short_p", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_11", "ST_Thread", "Doing function shmem_int_p", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_12", "ST_Thread", "Doing function shmem_long_p", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_13", "ST_Thread", "Doing function shmem_float_p", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_14", "ST_Thread", "Doing function shmem_double_p", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_15", "ST_Thread", "Doing function shmem_longlong_p", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_16", "ST_Thread", "Doing function shmem_longdouble_p", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_17", "ST_Thread", "Doing function shmem_char_put", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_18", "ST_Thread", "Doing function shmem_short_put", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_19", "ST_Thread", "Doing function shmem_int_put", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_20", "ST_Thread", "Doing function shmem_long_put", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_21", "ST_Thread", "Doing function shmem_float_put", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_22", "ST_Thread", "Doing function shmem_double_put", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_23", "ST_Thread", "Doing function shmem_longlong_put", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_24", "ST_Thread", "Doing function shmem_longdouble_put", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_25", "ST_Thread", "Doing function shmem_put32", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_26", "ST_Thread", "Doing function shmem_put64", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_27", "ST_Thread", "Doing function shmem_put128", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_28", "ST_Thread", "Doing function shmem_putmem", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_29", "ST_Thread", "Doing function shmem_short_iput", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_30", "ST_Thread", "Doing function shmem_int_iput", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_31", "ST_Thread", "Doing function shmem_float_iput", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_32", "ST_Thread", "Doing function shmem_long_iput", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_33", "ST_Thread", "Doing function shmem_double_iput", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_34", "ST_Thread", "Doing function shmem_longlong_iput", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_35", "ST_Thread", "Doing function shmem_longdouble_iput", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_36", "ST_Thread", "Doing function shmem_iput32", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_37", "ST_Thread", "Doing function shmem_iput64", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_38", "ST_Thread", "Doing function shmem_iput128", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_39", "ST_Thread", "Doing function shmem_short_g", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_40", "ST_Thread", "Doing function shmem_int_g", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_41", "ST_Thread", "Doing function shmem_long_g", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_42", "ST_Thread", "Doing function shmem_float_g", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_43", "ST_Thread", "Doing function shmem_double_g", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_44", "ST_Thread", "Doing function shmem_longlong_g", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_45", "ST_Thread", "Doing function shmem_longdouble_g", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_46", "ST_Thread", "Doing function shmem_char_get", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_47", "ST_Thread", "Doing function shmem_short_get", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_48", "ST_Thread", "Doing function shmem_int_get", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_49", "ST_Thread", "Doing function shmem_long_get", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_50", "ST_Thread", "Doing function shmem_float_get", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_51", "ST_Thread", "Doing function shmem_double_get", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_52", "ST_Thread", "Doing function shmem_longlong_get", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_53", "ST_Thread", "Doing function shmem_longdouble_get", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_54", "ST_Thread", "Doing function shmem_get32", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_55", "ST_Thread", "Doing function shmem_get64", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_56", "ST_Thread", "Doing function shmem_get128", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_57", "ST_Thread", "Doing function shmem_getmem", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_58", "ST_Thread", "Doing function shmem_iget32", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_59", "ST_Thread", "Doing function shmem_iget64", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_60", "ST_Thread", "Doing function shmem_iget128", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_61", "ST_Thread", "Doing function shmem_short_iget", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_62", "ST_Thread", "Doing function shmem_int_iget", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_63", "ST_Thread", "Doing function shmem_long_iget", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_64", "ST_Thread", "Doing function shmem_double_iget", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_65", "ST_Thread", "Doing function shmem_float_iget", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_66", "ST_Thread", "Doing function shmem_longlong_iget", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_67", "ST_Thread", "Doing function shmem_longdouble_iget", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_68", "ST_Thread", "Doing function shmem_short_swap", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_69", "ST_Thread", "Doing function shmem_int_swap", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_70", "ST_Thread", "Doing function shmem_long_swap", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_71", "ST_Thread", "Doing function shmem_swap", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_72", "ST_Thread", "Doing function shmem_longlong_swap", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_73", "ST_Thread", "Doing function shmem_float_swap", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_74", "ST_Thread", "Doing function shmem_double_swap", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_75", "ST_Thread", "Doing function shmem_short_cswap", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_76", "ST_Thread", "Doing function shmem_int_cswap", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_77", "ST_Thread", "Doing function shmem_long_cswap", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_78", "ST_Thread", "Doing function shmem_longlong_cswap", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_79", "ST_Thread", "Doing function shmem_short_fadd", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_80", "ST_Thread", "Doing function shmem_int_fadd", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_81", "ST_Thread", "Doing function shmem_long_fadd", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_82", "ST_Thread", "Doing function shmem_longlong_fadd", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_83", "ST_Thread", "Doing function shmem_short_finc", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_84", "ST_Thread", "Doing function shmem_int_finc", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_85", "ST_Thread", "Doing function shmem_long_finc", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_86", "ST_Thread", "Doing function shmem_longlong_finc", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_87", "ST_Thread", "Doing function shmem_short_add", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_88", "ST_Thread", "Doing function shmem_int_add", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_89", "ST_Thread", "Doing function shmem_long_add", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_90", "ST_Thread", "Doing function shmem_longlong_add", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_91", "ST_Thread", "Doing function shmem_short_inc", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_92", "ST_Thread", "Doing function shmem_int_inc", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_93", "ST_Thread", "Doing function shmem_long_inc", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_94", "ST_Thread", "Doing function shmem_longlong_inc", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_95", "ST_Thread", "Doing function shmem_short_wait", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_96", "ST_Thread", "Doing function shmem_int_wait", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_97", "ST_Thread", "Doing function shmem_long_wait", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_98", "ST_Thread", "Doing function shmem_longlong_wait", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_99", "ST_Thread", "Doing function shmem_wait", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_100", "ST_Thread", "Doing function shmem_short_wait_until", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_101", "ST_Thread", "Doing function shmem_int_wait_until", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_102", "ST_Thread", "Doing function shmem_long_wait_until", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_103", "ST_Thread", "Doing function shmem_longlong_wait_until", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_104", "ST_Thread", "Doing function shmem_wait_until", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_105", "ST_Thread", "Doing function shmem_barrier_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_106", "ST_Thread", "Doing function shmem_barrier", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_107", "ST_Thread", "Doing function shmem_fence", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_108", "ST_Thread", "Doing function shmem_quiet", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_109", "ST_Thread", "Doing function shmem_short_and_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_110", "ST_Thread", "Doing function shmem_int_and_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_111", "ST_Thread", "Doing function shmem_long_and_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_112", "ST_Thread", "Doing function shmem_longlong_and_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_113", "ST_Thread", "Doing function shmem_short_or_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_114", "ST_Thread", "Doing function shmem_int_or_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_115", "ST_Thread", "Doing function shmem_long_or_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_116", "ST_Thread", "Doing function shmem_longlong_or_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_117", "ST_Thread", "Doing function shmem_short_xor_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_118", "ST_Thread", "Doing function shmem_int_xor_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_119", "ST_Thread", "Doing function shmem_long_xor_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_120", "ST_Thread", "Doing function shmem_longlong_xor_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_121", "ST_Thread", "Doing function shmem_short_max_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_122", "ST_Thread", "Doing function shmem_int_max_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_123", "ST_Thread", "Doing function shmem_long_max_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_124", "ST_Thread", "Doing function shmem_float_max_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_125", "ST_Thread", "Doing function shmem_double_max_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_126", "ST_Thread", "Doing function shmem_longlong_max_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_127", "ST_Thread", "Doing function shmem_longdouble_max_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_128", "ST_Thread", "Doing function shmem_short_min_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_129", "ST_Thread", "Doing function shmem_int_min_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_130", "ST_Thread", "Doing function shmem_long_min_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_131", "ST_Thread", "Doing function shmem_float_min_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_132", "ST_Thread", "Doing function shmem_double_min_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_133", "ST_Thread", "Doing function shmem_longlong_min_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_134", "ST_Thread", "Doing function shmem_longdouble_min_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_135", "ST_Thread", "Doing function shmem_short_sum_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_136", "ST_Thread", "Doing function shmem_int_sum_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_137", "ST_Thread", "Doing function shmem_long_sum_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_138", "ST_Thread", "Doing function shmem_float_sum_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_139", "ST_Thread", "Doing function shmem_double_sum_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_140", "ST_Thread", "Doing function shmem_longlong_sum_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_141", "ST_Thread", "Doing function shmem_longdouble_sum_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_142", "ST_Thread", "Doing function shmem_short_prod_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_143", "ST_Thread", "Doing function shmem_int_prod_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_144", "ST_Thread", "Doing function shmem_long_prod_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_145", "ST_Thread", "Doing function shmem_float_prod_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_146", "ST_Thread", "Doing function shmem_double_prod_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_147", "ST_Thread", "Doing function shmem_longlong_prod_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_148", "ST_Thread", "Doing function shmem_longdouble_prod_to_all", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_149", "ST_Thread", "Doing function shmem_collect32", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_150", "ST_Thread", "Doing function shmem_collect64", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_151", "ST_Thread", "Doing function shmem_short_collect", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_152", "ST_Thread", "Doing function shmem_int_collect", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_153", "ST_Thread", "Doing function shmem_long_collect", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_154", "ST_Thread", "Doing function shmem_longlong_collect", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_155", "ST_Thread", "Doing function shmem_float_collect", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_156", "ST_Thread", "Doing function shmem_double_collect", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_157", "ST_Thread", "Doing function shmem_fcollect32", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_158", "ST_Thread", "Doing function shmem_fcollect64", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_159", "ST_Thread", "Doing function shmem_short_fcollect", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_160", "ST_Thread", "Doing function shmem_int_fcollect", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_161", "ST_Thread", "Doing function shmem_long_fcollect", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_162", "ST_Thread", "Doing function shmem_longlong_fcollect", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_163", "ST_Thread", "Doing function shmem_float_fcollect", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_164", "ST_Thread", "Doing function shmem_double_fcollect", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_165", "ST_Thread", "Doing function shmem_broadcast32", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_166", "ST_Thread", "Doing function shmem_broadcast64", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_167", "ST_Thread", "Doing function shmem_short_broadcast", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_168", "ST_Thread", "Doing function shmem_int_broadcast", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_169", "ST_Thread", "Doing function shmem_long_broadcast", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_170", "ST_Thread", "Doing function shmem_longlong_broadcast", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_171", "ST_Thread", "Doing function shmem_float_broadcast", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_172", "ST_Thread", "Doing function shmem_double_broadcast", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_173", "ST_Thread", "Doing function shmem_set_lock", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_174", "ST_Thread", "Doing function shmem_clear_lock", GTG_DARKGREY);
    }
    if(get_mode() == EZTRACE_CONVERT) {
	addEntityValue("shmem_STATE_175", "ST_Thread", "Doing function shmem_test_lock", GTG_DARKGREY);
    }

}

/* This function process the EZTRACE_BACKTRACE event that
 * is recorded once in a while
 */
int handle_backtrace() {

  /* wait for the next event. It should be EZTRACE_BACKTRACE_DEPTH */
  wait_for_an_event_in_cur_thread(EZTRACE_BACKTRACE_DEPTH);

  /* the number of frames recorded is a parameter of the event */
  int nb_frames;
  GET_PARAM_PACKED_1(CUR_EV, nb_frames);

  /* iterate over the frames */
  for(int i =0; i<nb_frames; i++) {
    /* wait for next frame event */
    wait_for_an_event_in_cur_thread(EZTRACE_CALLING_FUNCTION);

    /* get the name of the function in frame i */
    char* function = NULL;
    asprintf(&function, "%s", LITL_READ_RAW(CUR_EV)->data);

    /* TODO: you can do what you want with the call stack */

    free(function);
  }
}


/* This function is called by eztrace_convert for each event to
 * handle.
 * It shall return 1 if the event was handled successfully or
 * 0 otherwise.
 */
int
handle_shmem_events(eztrace_event_t *ev)
{

  if(! CUR_TRACE->start)
    return 0;

  switch (LITL_READ_GET_CODE(ev)) {
	case EZTRACE_shmem_start_pes_1:
	handleEZTRACE_shmem_start_pes_1();
        break;
	case EZTRACE_shmem_start_pes_2:
	handleEZTRACE_shmem_start_pes_2();
        break;
	case EZTRACE_shmem_shmem_n_pes_3:
	handleEZTRACE_shmem_shmem_n_pes_3();
        break;
	case EZTRACE_shmem_shmem_n_pes_4:
	handleEZTRACE_shmem_shmem_n_pes_4();
        break;
	case EZTRACE_shmem_shmem_my_pe_5:
	handleEZTRACE_shmem_shmem_my_pe_5();
        break;
	case EZTRACE_shmem_shmem_my_pe_6:
	handleEZTRACE_shmem_shmem_my_pe_6();
        break;
	case EZTRACE_shmem_shmem_pe_accessible_7:
	handleEZTRACE_shmem_shmem_pe_accessible_7();
        break;
	case EZTRACE_shmem_shmem_pe_accessible_8:
	handleEZTRACE_shmem_shmem_pe_accessible_8();
        break;
	case EZTRACE_shmem_shmem_addr_accessible_9:
	handleEZTRACE_shmem_shmem_addr_accessible_9();
        break;
	case EZTRACE_shmem_shmem_addr_accessible_10:
	handleEZTRACE_shmem_shmem_addr_accessible_10();
        break;
	case EZTRACE_shmem_shmalloc_11:
	handleEZTRACE_shmem_shmalloc_11();
        break;
	case EZTRACE_shmem_shmalloc_12:
	handleEZTRACE_shmem_shmalloc_12();
        break;
	case EZTRACE_shmem_shmemalign_13:
	handleEZTRACE_shmem_shmemalign_13();
        break;
	case EZTRACE_shmem_shmemalign_14:
	handleEZTRACE_shmem_shmemalign_14();
        break;
	case EZTRACE_shmem_shrealloc_15:
	handleEZTRACE_shmem_shrealloc_15();
        break;
	case EZTRACE_shmem_shrealloc_16:
	handleEZTRACE_shmem_shrealloc_16();
        break;
	case EZTRACE_shmem_shfree_17:
	handleEZTRACE_shmem_shfree_17();
        break;
	case EZTRACE_shmem_shfree_18:
	handleEZTRACE_shmem_shfree_18();
        break;
	case EZTRACE_shmem_shmem_ptr_19:
	handleEZTRACE_shmem_shmem_ptr_19();
        break;
	case EZTRACE_shmem_shmem_ptr_20:
	handleEZTRACE_shmem_shmem_ptr_20();
        break;
	case EZTRACE_shmem_shmem_short_p_21:
	handleEZTRACE_shmem_shmem_short_p_21();
        break;
	case EZTRACE_shmem_shmem_short_p_22:
	handleEZTRACE_shmem_shmem_short_p_22();
        break;
	case EZTRACE_shmem_shmem_int_p_23:
	handleEZTRACE_shmem_shmem_int_p_23();
        break;
	case EZTRACE_shmem_shmem_int_p_24:
	handleEZTRACE_shmem_shmem_int_p_24();
        break;
	case EZTRACE_shmem_shmem_long_p_25:
	handleEZTRACE_shmem_shmem_long_p_25();
        break;
	case EZTRACE_shmem_shmem_long_p_26:
	handleEZTRACE_shmem_shmem_long_p_26();
        break;
	case EZTRACE_shmem_shmem_float_p_27:
	handleEZTRACE_shmem_shmem_float_p_27();
        break;
	case EZTRACE_shmem_shmem_float_p_28:
	handleEZTRACE_shmem_shmem_float_p_28();
        break;
	case EZTRACE_shmem_shmem_double_p_29:
	handleEZTRACE_shmem_shmem_double_p_29();
        break;
	case EZTRACE_shmem_shmem_double_p_30:
	handleEZTRACE_shmem_shmem_double_p_30();
        break;
	case EZTRACE_shmem_shmem_longlong_p_31:
	handleEZTRACE_shmem_shmem_longlong_p_31();
        break;
	case EZTRACE_shmem_shmem_longlong_p_32:
	handleEZTRACE_shmem_shmem_longlong_p_32();
        break;
	case EZTRACE_shmem_shmem_longdouble_p_33:
	handleEZTRACE_shmem_shmem_longdouble_p_33();
        break;
	case EZTRACE_shmem_shmem_longdouble_p_34:
	handleEZTRACE_shmem_shmem_longdouble_p_34();
        break;
	case EZTRACE_shmem_shmem_char_put_35:
	handleEZTRACE_shmem_shmem_char_put_35();
        break;
	case EZTRACE_shmem_shmem_char_put_36:
	handleEZTRACE_shmem_shmem_char_put_36();
        break;
	case EZTRACE_shmem_shmem_short_put_37:
	handleEZTRACE_shmem_shmem_short_put_37();
        break;
	case EZTRACE_shmem_shmem_short_put_38:
	handleEZTRACE_shmem_shmem_short_put_38();
        break;
	case EZTRACE_shmem_shmem_int_put_39:
	handleEZTRACE_shmem_shmem_int_put_39();
        break;
	case EZTRACE_shmem_shmem_int_put_40:
	handleEZTRACE_shmem_shmem_int_put_40();
        break;
	case EZTRACE_shmem_shmem_long_put_41:
	handleEZTRACE_shmem_shmem_long_put_41();
        break;
	case EZTRACE_shmem_shmem_long_put_42:
	handleEZTRACE_shmem_shmem_long_put_42();
        break;
	case EZTRACE_shmem_shmem_float_put_43:
	handleEZTRACE_shmem_shmem_float_put_43();
        break;
	case EZTRACE_shmem_shmem_float_put_44:
	handleEZTRACE_shmem_shmem_float_put_44();
        break;
	case EZTRACE_shmem_shmem_double_put_45:
	handleEZTRACE_shmem_shmem_double_put_45();
        break;
	case EZTRACE_shmem_shmem_double_put_46:
	handleEZTRACE_shmem_shmem_double_put_46();
        break;
	case EZTRACE_shmem_shmem_longlong_put_47:
	handleEZTRACE_shmem_shmem_longlong_put_47();
        break;
	case EZTRACE_shmem_shmem_longlong_put_48:
	handleEZTRACE_shmem_shmem_longlong_put_48();
        break;
	case EZTRACE_shmem_shmem_longdouble_put_49:
	handleEZTRACE_shmem_shmem_longdouble_put_49();
        break;
	case EZTRACE_shmem_shmem_longdouble_put_50:
	handleEZTRACE_shmem_shmem_longdouble_put_50();
        break;
	case EZTRACE_shmem_shmem_put32_51:
	handleEZTRACE_shmem_shmem_put32_51();
        break;
	case EZTRACE_shmem_shmem_put32_52:
	handleEZTRACE_shmem_shmem_put32_52();
        break;
	case EZTRACE_shmem_shmem_put64_53:
	handleEZTRACE_shmem_shmem_put64_53();
        break;
	case EZTRACE_shmem_shmem_put64_54:
	handleEZTRACE_shmem_shmem_put64_54();
        break;
	case EZTRACE_shmem_shmem_put128_55:
	handleEZTRACE_shmem_shmem_put128_55();
        break;
	case EZTRACE_shmem_shmem_put128_56:
	handleEZTRACE_shmem_shmem_put128_56();
        break;
	case EZTRACE_shmem_shmem_putmem_57:
	handleEZTRACE_shmem_shmem_putmem_57();
        break;
	case EZTRACE_shmem_shmem_putmem_58:
	handleEZTRACE_shmem_shmem_putmem_58();
        break;
	case EZTRACE_shmem_shmem_short_iput_59:
	handleEZTRACE_shmem_shmem_short_iput_59();
        break;
	case EZTRACE_shmem_shmem_short_iput_60:
	handleEZTRACE_shmem_shmem_short_iput_60();
        break;
	case EZTRACE_shmem_shmem_int_iput_61:
	handleEZTRACE_shmem_shmem_int_iput_61();
        break;
	case EZTRACE_shmem_shmem_int_iput_62:
	handleEZTRACE_shmem_shmem_int_iput_62();
        break;
	case EZTRACE_shmem_shmem_float_iput_63:
	handleEZTRACE_shmem_shmem_float_iput_63();
        break;
	case EZTRACE_shmem_shmem_float_iput_64:
	handleEZTRACE_shmem_shmem_float_iput_64();
        break;
	case EZTRACE_shmem_shmem_long_iput_65:
	handleEZTRACE_shmem_shmem_long_iput_65();
        break;
	case EZTRACE_shmem_shmem_long_iput_66:
	handleEZTRACE_shmem_shmem_long_iput_66();
        break;
	case EZTRACE_shmem_shmem_double_iput_67:
	handleEZTRACE_shmem_shmem_double_iput_67();
        break;
	case EZTRACE_shmem_shmem_double_iput_68:
	handleEZTRACE_shmem_shmem_double_iput_68();
        break;
	case EZTRACE_shmem_shmem_longlong_iput_69:
	handleEZTRACE_shmem_shmem_longlong_iput_69();
        break;
	case EZTRACE_shmem_shmem_longlong_iput_70:
	handleEZTRACE_shmem_shmem_longlong_iput_70();
        break;
	case EZTRACE_shmem_shmem_longdouble_iput_71:
	handleEZTRACE_shmem_shmem_longdouble_iput_71();
        break;
	case EZTRACE_shmem_shmem_longdouble_iput_72:
	handleEZTRACE_shmem_shmem_longdouble_iput_72();
        break;
	case EZTRACE_shmem_shmem_iput32_73:
	handleEZTRACE_shmem_shmem_iput32_73();
        break;
	case EZTRACE_shmem_shmem_iput32_74:
	handleEZTRACE_shmem_shmem_iput32_74();
        break;
	case EZTRACE_shmem_shmem_iput64_75:
	handleEZTRACE_shmem_shmem_iput64_75();
        break;
	case EZTRACE_shmem_shmem_iput64_76:
	handleEZTRACE_shmem_shmem_iput64_76();
        break;
	case EZTRACE_shmem_shmem_iput128_77:
	handleEZTRACE_shmem_shmem_iput128_77();
        break;
	case EZTRACE_shmem_shmem_iput128_78:
	handleEZTRACE_shmem_shmem_iput128_78();
        break;
	case EZTRACE_shmem_shmem_short_g_79:
	handleEZTRACE_shmem_shmem_short_g_79();
        break;
	case EZTRACE_shmem_shmem_short_g_80:
	handleEZTRACE_shmem_shmem_short_g_80();
        break;
	case EZTRACE_shmem_shmem_int_g_81:
	handleEZTRACE_shmem_shmem_int_g_81();
        break;
	case EZTRACE_shmem_shmem_int_g_82:
	handleEZTRACE_shmem_shmem_int_g_82();
        break;
	case EZTRACE_shmem_shmem_long_g_83:
	handleEZTRACE_shmem_shmem_long_g_83();
        break;
	case EZTRACE_shmem_shmem_long_g_84:
	handleEZTRACE_shmem_shmem_long_g_84();
        break;
	case EZTRACE_shmem_shmem_float_g_85:
	handleEZTRACE_shmem_shmem_float_g_85();
        break;
	case EZTRACE_shmem_shmem_float_g_86:
	handleEZTRACE_shmem_shmem_float_g_86();
        break;
	case EZTRACE_shmem_shmem_double_g_87:
	handleEZTRACE_shmem_shmem_double_g_87();
        break;
	case EZTRACE_shmem_shmem_double_g_88:
	handleEZTRACE_shmem_shmem_double_g_88();
        break;
	case EZTRACE_shmem_shmem_longlong_g_89:
	handleEZTRACE_shmem_shmem_longlong_g_89();
        break;
	case EZTRACE_shmem_shmem_longlong_g_90:
	handleEZTRACE_shmem_shmem_longlong_g_90();
        break;
	case EZTRACE_shmem_shmem_longdouble_g_91:
	handleEZTRACE_shmem_shmem_longdouble_g_91();
        break;
	case EZTRACE_shmem_shmem_longdouble_g_92:
	handleEZTRACE_shmem_shmem_longdouble_g_92();
        break;
	case EZTRACE_shmem_shmem_char_get_93:
	handleEZTRACE_shmem_shmem_char_get_93();
        break;
	case EZTRACE_shmem_shmem_char_get_94:
	handleEZTRACE_shmem_shmem_char_get_94();
        break;
	case EZTRACE_shmem_shmem_short_get_95:
	handleEZTRACE_shmem_shmem_short_get_95();
        break;
	case EZTRACE_shmem_shmem_short_get_96:
	handleEZTRACE_shmem_shmem_short_get_96();
        break;
	case EZTRACE_shmem_shmem_int_get_97:
	handleEZTRACE_shmem_shmem_int_get_97();
        break;
	case EZTRACE_shmem_shmem_int_get_98:
	handleEZTRACE_shmem_shmem_int_get_98();
        break;
	case EZTRACE_shmem_shmem_long_get_99:
	handleEZTRACE_shmem_shmem_long_get_99();
        break;
	case EZTRACE_shmem_shmem_long_get_100:
	handleEZTRACE_shmem_shmem_long_get_100();
        break;
	case EZTRACE_shmem_shmem_float_get_101:
	handleEZTRACE_shmem_shmem_float_get_101();
        break;
	case EZTRACE_shmem_shmem_float_get_102:
	handleEZTRACE_shmem_shmem_float_get_102();
        break;
	case EZTRACE_shmem_shmem_double_get_103:
	handleEZTRACE_shmem_shmem_double_get_103();
        break;
	case EZTRACE_shmem_shmem_double_get_104:
	handleEZTRACE_shmem_shmem_double_get_104();
        break;
	case EZTRACE_shmem_shmem_longlong_get_105:
	handleEZTRACE_shmem_shmem_longlong_get_105();
        break;
	case EZTRACE_shmem_shmem_longlong_get_106:
	handleEZTRACE_shmem_shmem_longlong_get_106();
        break;
	case EZTRACE_shmem_shmem_longdouble_get_107:
	handleEZTRACE_shmem_shmem_longdouble_get_107();
        break;
	case EZTRACE_shmem_shmem_longdouble_get_108:
	handleEZTRACE_shmem_shmem_longdouble_get_108();
        break;
	case EZTRACE_shmem_shmem_get32_109:
	handleEZTRACE_shmem_shmem_get32_109();
        break;
	case EZTRACE_shmem_shmem_get32_110:
	handleEZTRACE_shmem_shmem_get32_110();
        break;
	case EZTRACE_shmem_shmem_get64_111:
	handleEZTRACE_shmem_shmem_get64_111();
        break;
	case EZTRACE_shmem_shmem_get64_112:
	handleEZTRACE_shmem_shmem_get64_112();
        break;
	case EZTRACE_shmem_shmem_get128_113:
	handleEZTRACE_shmem_shmem_get128_113();
        break;
	case EZTRACE_shmem_shmem_get128_114:
	handleEZTRACE_shmem_shmem_get128_114();
        break;
	case EZTRACE_shmem_shmem_getmem_115:
	handleEZTRACE_shmem_shmem_getmem_115();
        break;
	case EZTRACE_shmem_shmem_getmem_116:
	handleEZTRACE_shmem_shmem_getmem_116();
        break;
	case EZTRACE_shmem_shmem_iget32_117:
	handleEZTRACE_shmem_shmem_iget32_117();
        break;
	case EZTRACE_shmem_shmem_iget32_118:
	handleEZTRACE_shmem_shmem_iget32_118();
        break;
	case EZTRACE_shmem_shmem_iget64_119:
	handleEZTRACE_shmem_shmem_iget64_119();
        break;
	case EZTRACE_shmem_shmem_iget64_120:
	handleEZTRACE_shmem_shmem_iget64_120();
        break;
	case EZTRACE_shmem_shmem_iget128_121:
	handleEZTRACE_shmem_shmem_iget128_121();
        break;
	case EZTRACE_shmem_shmem_iget128_122:
	handleEZTRACE_shmem_shmem_iget128_122();
        break;
	case EZTRACE_shmem_shmem_short_iget_123:
	handleEZTRACE_shmem_shmem_short_iget_123();
        break;
	case EZTRACE_shmem_shmem_short_iget_124:
	handleEZTRACE_shmem_shmem_short_iget_124();
        break;
	case EZTRACE_shmem_shmem_int_iget_125:
	handleEZTRACE_shmem_shmem_int_iget_125();
        break;
	case EZTRACE_shmem_shmem_int_iget_126:
	handleEZTRACE_shmem_shmem_int_iget_126();
        break;
	case EZTRACE_shmem_shmem_long_iget_127:
	handleEZTRACE_shmem_shmem_long_iget_127();
        break;
	case EZTRACE_shmem_shmem_long_iget_128:
	handleEZTRACE_shmem_shmem_long_iget_128();
        break;
	case EZTRACE_shmem_shmem_double_iget_129:
	handleEZTRACE_shmem_shmem_double_iget_129();
        break;
	case EZTRACE_shmem_shmem_double_iget_130:
	handleEZTRACE_shmem_shmem_double_iget_130();
        break;
	case EZTRACE_shmem_shmem_float_iget_131:
	handleEZTRACE_shmem_shmem_float_iget_131();
        break;
	case EZTRACE_shmem_shmem_float_iget_132:
	handleEZTRACE_shmem_shmem_float_iget_132();
        break;
	case EZTRACE_shmem_shmem_longlong_iget_133:
	handleEZTRACE_shmem_shmem_longlong_iget_133();
        break;
	case EZTRACE_shmem_shmem_longlong_iget_134:
	handleEZTRACE_shmem_shmem_longlong_iget_134();
        break;
	case EZTRACE_shmem_shmem_longdouble_iget_135:
	handleEZTRACE_shmem_shmem_longdouble_iget_135();
        break;
	case EZTRACE_shmem_shmem_longdouble_iget_136:
	handleEZTRACE_shmem_shmem_longdouble_iget_136();
        break;
	case EZTRACE_shmem_shmem_short_swap_137:
	handleEZTRACE_shmem_shmem_short_swap_137();
        break;
	case EZTRACE_shmem_shmem_short_swap_138:
	handleEZTRACE_shmem_shmem_short_swap_138();
        break;
	case EZTRACE_shmem_shmem_int_swap_139:
	handleEZTRACE_shmem_shmem_int_swap_139();
        break;
	case EZTRACE_shmem_shmem_int_swap_140:
	handleEZTRACE_shmem_shmem_int_swap_140();
        break;
	case EZTRACE_shmem_shmem_long_swap_141:
	handleEZTRACE_shmem_shmem_long_swap_141();
        break;
	case EZTRACE_shmem_shmem_long_swap_142:
	handleEZTRACE_shmem_shmem_long_swap_142();
        break;
	case EZTRACE_shmem_shmem_swap_143:
	handleEZTRACE_shmem_shmem_swap_143();
        break;
	case EZTRACE_shmem_shmem_swap_144:
	handleEZTRACE_shmem_shmem_swap_144();
        break;
	case EZTRACE_shmem_shmem_longlong_swap_145:
	handleEZTRACE_shmem_shmem_longlong_swap_145();
        break;
	case EZTRACE_shmem_shmem_longlong_swap_146:
	handleEZTRACE_shmem_shmem_longlong_swap_146();
        break;
	case EZTRACE_shmem_shmem_float_swap_147:
	handleEZTRACE_shmem_shmem_float_swap_147();
        break;
	case EZTRACE_shmem_shmem_float_swap_148:
	handleEZTRACE_shmem_shmem_float_swap_148();
        break;
	case EZTRACE_shmem_shmem_double_swap_149:
	handleEZTRACE_shmem_shmem_double_swap_149();
        break;
	case EZTRACE_shmem_shmem_double_swap_150:
	handleEZTRACE_shmem_shmem_double_swap_150();
        break;
	case EZTRACE_shmem_shmem_short_cswap_151:
	handleEZTRACE_shmem_shmem_short_cswap_151();
        break;
	case EZTRACE_shmem_shmem_short_cswap_152:
	handleEZTRACE_shmem_shmem_short_cswap_152();
        break;
	case EZTRACE_shmem_shmem_int_cswap_153:
	handleEZTRACE_shmem_shmem_int_cswap_153();
        break;
	case EZTRACE_shmem_shmem_int_cswap_154:
	handleEZTRACE_shmem_shmem_int_cswap_154();
        break;
	case EZTRACE_shmem_shmem_long_cswap_155:
	handleEZTRACE_shmem_shmem_long_cswap_155();
        break;
	case EZTRACE_shmem_shmem_long_cswap_156:
	handleEZTRACE_shmem_shmem_long_cswap_156();
        break;
	case EZTRACE_shmem_shmem_longlong_cswap_157:
	handleEZTRACE_shmem_shmem_longlong_cswap_157();
        break;
	case EZTRACE_shmem_shmem_longlong_cswap_158:
	handleEZTRACE_shmem_shmem_longlong_cswap_158();
        break;
	case EZTRACE_shmem_shmem_short_fadd_159:
	handleEZTRACE_shmem_shmem_short_fadd_159();
        break;
	case EZTRACE_shmem_shmem_short_fadd_160:
	handleEZTRACE_shmem_shmem_short_fadd_160();
        break;
	case EZTRACE_shmem_shmem_int_fadd_161:
	handleEZTRACE_shmem_shmem_int_fadd_161();
        break;
	case EZTRACE_shmem_shmem_int_fadd_162:
	handleEZTRACE_shmem_shmem_int_fadd_162();
        break;
	case EZTRACE_shmem_shmem_long_fadd_163:
	handleEZTRACE_shmem_shmem_long_fadd_163();
        break;
	case EZTRACE_shmem_shmem_long_fadd_164:
	handleEZTRACE_shmem_shmem_long_fadd_164();
        break;
	case EZTRACE_shmem_shmem_longlong_fadd_165:
	handleEZTRACE_shmem_shmem_longlong_fadd_165();
        break;
	case EZTRACE_shmem_shmem_longlong_fadd_166:
	handleEZTRACE_shmem_shmem_longlong_fadd_166();
        break;
	case EZTRACE_shmem_shmem_short_finc_167:
	handleEZTRACE_shmem_shmem_short_finc_167();
        break;
	case EZTRACE_shmem_shmem_short_finc_168:
	handleEZTRACE_shmem_shmem_short_finc_168();
        break;
	case EZTRACE_shmem_shmem_int_finc_169:
	handleEZTRACE_shmem_shmem_int_finc_169();
        break;
	case EZTRACE_shmem_shmem_int_finc_170:
	handleEZTRACE_shmem_shmem_int_finc_170();
        break;
	case EZTRACE_shmem_shmem_long_finc_171:
	handleEZTRACE_shmem_shmem_long_finc_171();
        break;
	case EZTRACE_shmem_shmem_long_finc_172:
	handleEZTRACE_shmem_shmem_long_finc_172();
        break;
	case EZTRACE_shmem_shmem_longlong_finc_173:
	handleEZTRACE_shmem_shmem_longlong_finc_173();
        break;
	case EZTRACE_shmem_shmem_longlong_finc_174:
	handleEZTRACE_shmem_shmem_longlong_finc_174();
        break;
	case EZTRACE_shmem_shmem_short_add_175:
	handleEZTRACE_shmem_shmem_short_add_175();
        break;
	case EZTRACE_shmem_shmem_short_add_176:
	handleEZTRACE_shmem_shmem_short_add_176();
        break;
	case EZTRACE_shmem_shmem_int_add_177:
	handleEZTRACE_shmem_shmem_int_add_177();
        break;
	case EZTRACE_shmem_shmem_int_add_178:
	handleEZTRACE_shmem_shmem_int_add_178();
        break;
	case EZTRACE_shmem_shmem_long_add_179:
	handleEZTRACE_shmem_shmem_long_add_179();
        break;
	case EZTRACE_shmem_shmem_long_add_180:
	handleEZTRACE_shmem_shmem_long_add_180();
        break;
	case EZTRACE_shmem_shmem_longlong_add_181:
	handleEZTRACE_shmem_shmem_longlong_add_181();
        break;
	case EZTRACE_shmem_shmem_longlong_add_182:
	handleEZTRACE_shmem_shmem_longlong_add_182();
        break;
	case EZTRACE_shmem_shmem_short_inc_183:
	handleEZTRACE_shmem_shmem_short_inc_183();
        break;
	case EZTRACE_shmem_shmem_short_inc_184:
	handleEZTRACE_shmem_shmem_short_inc_184();
        break;
	case EZTRACE_shmem_shmem_int_inc_185:
	handleEZTRACE_shmem_shmem_int_inc_185();
        break;
	case EZTRACE_shmem_shmem_int_inc_186:
	handleEZTRACE_shmem_shmem_int_inc_186();
        break;
	case EZTRACE_shmem_shmem_long_inc_187:
	handleEZTRACE_shmem_shmem_long_inc_187();
        break;
	case EZTRACE_shmem_shmem_long_inc_188:
	handleEZTRACE_shmem_shmem_long_inc_188();
        break;
	case EZTRACE_shmem_shmem_longlong_inc_189:
	handleEZTRACE_shmem_shmem_longlong_inc_189();
        break;
	case EZTRACE_shmem_shmem_longlong_inc_190:
	handleEZTRACE_shmem_shmem_longlong_inc_190();
        break;
	case EZTRACE_shmem_shmem_short_wait_191:
	handleEZTRACE_shmem_shmem_short_wait_191();
        break;
	case EZTRACE_shmem_shmem_short_wait_192:
	handleEZTRACE_shmem_shmem_short_wait_192();
        break;
	case EZTRACE_shmem_shmem_int_wait_193:
	handleEZTRACE_shmem_shmem_int_wait_193();
        break;
	case EZTRACE_shmem_shmem_int_wait_194:
	handleEZTRACE_shmem_shmem_int_wait_194();
        break;
	case EZTRACE_shmem_shmem_long_wait_195:
	handleEZTRACE_shmem_shmem_long_wait_195();
        break;
	case EZTRACE_shmem_shmem_long_wait_196:
	handleEZTRACE_shmem_shmem_long_wait_196();
        break;
	case EZTRACE_shmem_shmem_longlong_wait_197:
	handleEZTRACE_shmem_shmem_longlong_wait_197();
        break;
	case EZTRACE_shmem_shmem_longlong_wait_198:
	handleEZTRACE_shmem_shmem_longlong_wait_198();
        break;
	case EZTRACE_shmem_shmem_wait_199:
	handleEZTRACE_shmem_shmem_wait_199();
        break;
	case EZTRACE_shmem_shmem_wait_200:
	handleEZTRACE_shmem_shmem_wait_200();
        break;
	case EZTRACE_shmem_shmem_short_wait_until_201:
	handleEZTRACE_shmem_shmem_short_wait_until_201();
        break;
	case EZTRACE_shmem_shmem_short_wait_until_202:
	handleEZTRACE_shmem_shmem_short_wait_until_202();
        break;
	case EZTRACE_shmem_shmem_int_wait_until_203:
	handleEZTRACE_shmem_shmem_int_wait_until_203();
        break;
	case EZTRACE_shmem_shmem_int_wait_until_204:
	handleEZTRACE_shmem_shmem_int_wait_until_204();
        break;
	case EZTRACE_shmem_shmem_long_wait_until_205:
	handleEZTRACE_shmem_shmem_long_wait_until_205();
        break;
	case EZTRACE_shmem_shmem_long_wait_until_206:
	handleEZTRACE_shmem_shmem_long_wait_until_206();
        break;
	case EZTRACE_shmem_shmem_longlong_wait_until_207:
	handleEZTRACE_shmem_shmem_longlong_wait_until_207();
        break;
	case EZTRACE_shmem_shmem_longlong_wait_until_208:
	handleEZTRACE_shmem_shmem_longlong_wait_until_208();
        break;
	case EZTRACE_shmem_shmem_wait_until_209:
	handleEZTRACE_shmem_shmem_wait_until_209();
        break;
	case EZTRACE_shmem_shmem_wait_until_210:
	handleEZTRACE_shmem_shmem_wait_until_210();
        break;
	case EZTRACE_shmem_shmem_barrier_all_211:
	handleEZTRACE_shmem_shmem_barrier_all_211();
        break;
	case EZTRACE_shmem_shmem_barrier_all_212:
	handleEZTRACE_shmem_shmem_barrier_all_212();
        break;
	case EZTRACE_shmem_shmem_barrier_213:
	handleEZTRACE_shmem_shmem_barrier_213();
        break;
	case EZTRACE_shmem_shmem_barrier_214:
	handleEZTRACE_shmem_shmem_barrier_214();
        break;
	case EZTRACE_shmem_shmem_fence_215:
	handleEZTRACE_shmem_shmem_fence_215();
        break;
	case EZTRACE_shmem_shmem_fence_216:
	handleEZTRACE_shmem_shmem_fence_216();
        break;
	case EZTRACE_shmem_shmem_quiet_217:
	handleEZTRACE_shmem_shmem_quiet_217();
        break;
	case EZTRACE_shmem_shmem_quiet_218:
	handleEZTRACE_shmem_shmem_quiet_218();
        break;
	case EZTRACE_shmem_shmem_short_and_to_all_219:
	handleEZTRACE_shmem_shmem_short_and_to_all_219();
        break;
	case EZTRACE_shmem_shmem_short_and_to_all_220:
	handleEZTRACE_shmem_shmem_short_and_to_all_220();
        break;
	case EZTRACE_shmem_shmem_int_and_to_all_221:
	handleEZTRACE_shmem_shmem_int_and_to_all_221();
        break;
	case EZTRACE_shmem_shmem_int_and_to_all_222:
	handleEZTRACE_shmem_shmem_int_and_to_all_222();
        break;
	case EZTRACE_shmem_shmem_long_and_to_all_223:
	handleEZTRACE_shmem_shmem_long_and_to_all_223();
        break;
	case EZTRACE_shmem_shmem_long_and_to_all_224:
	handleEZTRACE_shmem_shmem_long_and_to_all_224();
        break;
	case EZTRACE_shmem_shmem_longlong_and_to_all_225:
	handleEZTRACE_shmem_shmem_longlong_and_to_all_225();
        break;
	case EZTRACE_shmem_shmem_longlong_and_to_all_226:
	handleEZTRACE_shmem_shmem_longlong_and_to_all_226();
        break;
	case EZTRACE_shmem_shmem_short_or_to_all_227:
	handleEZTRACE_shmem_shmem_short_or_to_all_227();
        break;
	case EZTRACE_shmem_shmem_short_or_to_all_228:
	handleEZTRACE_shmem_shmem_short_or_to_all_228();
        break;
	case EZTRACE_shmem_shmem_int_or_to_all_229:
	handleEZTRACE_shmem_shmem_int_or_to_all_229();
        break;
	case EZTRACE_shmem_shmem_int_or_to_all_230:
	handleEZTRACE_shmem_shmem_int_or_to_all_230();
        break;
	case EZTRACE_shmem_shmem_long_or_to_all_231:
	handleEZTRACE_shmem_shmem_long_or_to_all_231();
        break;
	case EZTRACE_shmem_shmem_long_or_to_all_232:
	handleEZTRACE_shmem_shmem_long_or_to_all_232();
        break;
	case EZTRACE_shmem_shmem_longlong_or_to_all_233:
	handleEZTRACE_shmem_shmem_longlong_or_to_all_233();
        break;
	case EZTRACE_shmem_shmem_longlong_or_to_all_234:
	handleEZTRACE_shmem_shmem_longlong_or_to_all_234();
        break;
	case EZTRACE_shmem_shmem_short_xor_to_all_235:
	handleEZTRACE_shmem_shmem_short_xor_to_all_235();
        break;
	case EZTRACE_shmem_shmem_short_xor_to_all_236:
	handleEZTRACE_shmem_shmem_short_xor_to_all_236();
        break;
	case EZTRACE_shmem_shmem_int_xor_to_all_237:
	handleEZTRACE_shmem_shmem_int_xor_to_all_237();
        break;
	case EZTRACE_shmem_shmem_int_xor_to_all_238:
	handleEZTRACE_shmem_shmem_int_xor_to_all_238();
        break;
	case EZTRACE_shmem_shmem_long_xor_to_all_239:
	handleEZTRACE_shmem_shmem_long_xor_to_all_239();
        break;
	case EZTRACE_shmem_shmem_long_xor_to_all_240:
	handleEZTRACE_shmem_shmem_long_xor_to_all_240();
        break;
	case EZTRACE_shmem_shmem_longlong_xor_to_all_241:
	handleEZTRACE_shmem_shmem_longlong_xor_to_all_241();
        break;
	case EZTRACE_shmem_shmem_longlong_xor_to_all_242:
	handleEZTRACE_shmem_shmem_longlong_xor_to_all_242();
        break;
	case EZTRACE_shmem_shmem_short_max_to_all_243:
	handleEZTRACE_shmem_shmem_short_max_to_all_243();
        break;
	case EZTRACE_shmem_shmem_short_max_to_all_244:
	handleEZTRACE_shmem_shmem_short_max_to_all_244();
        break;
	case EZTRACE_shmem_shmem_int_max_to_all_245:
	handleEZTRACE_shmem_shmem_int_max_to_all_245();
        break;
	case EZTRACE_shmem_shmem_int_max_to_all_246:
	handleEZTRACE_shmem_shmem_int_max_to_all_246();
        break;
	case EZTRACE_shmem_shmem_long_max_to_all_247:
	handleEZTRACE_shmem_shmem_long_max_to_all_247();
        break;
	case EZTRACE_shmem_shmem_long_max_to_all_248:
	handleEZTRACE_shmem_shmem_long_max_to_all_248();
        break;
	case EZTRACE_shmem_shmem_float_max_to_all_249:
	handleEZTRACE_shmem_shmem_float_max_to_all_249();
        break;
	case EZTRACE_shmem_shmem_float_max_to_all_250:
	handleEZTRACE_shmem_shmem_float_max_to_all_250();
        break;
	case EZTRACE_shmem_shmem_double_max_to_all_251:
	handleEZTRACE_shmem_shmem_double_max_to_all_251();
        break;
	case EZTRACE_shmem_shmem_double_max_to_all_252:
	handleEZTRACE_shmem_shmem_double_max_to_all_252();
        break;
	case EZTRACE_shmem_shmem_longlong_max_to_all_253:
	handleEZTRACE_shmem_shmem_longlong_max_to_all_253();
        break;
	case EZTRACE_shmem_shmem_longlong_max_to_all_254:
	handleEZTRACE_shmem_shmem_longlong_max_to_all_254();
        break;
	case EZTRACE_shmem_shmem_longdouble_max_to_all_255:
	handleEZTRACE_shmem_shmem_longdouble_max_to_all_255();
        break;
	case EZTRACE_shmem_shmem_longdouble_max_to_all_256:
	handleEZTRACE_shmem_shmem_longdouble_max_to_all_256();
        break;
	case EZTRACE_shmem_shmem_short_min_to_all_257:
	handleEZTRACE_shmem_shmem_short_min_to_all_257();
        break;
	case EZTRACE_shmem_shmem_short_min_to_all_258:
	handleEZTRACE_shmem_shmem_short_min_to_all_258();
        break;
	case EZTRACE_shmem_shmem_int_min_to_all_259:
	handleEZTRACE_shmem_shmem_int_min_to_all_259();
        break;
	case EZTRACE_shmem_shmem_int_min_to_all_260:
	handleEZTRACE_shmem_shmem_int_min_to_all_260();
        break;
	case EZTRACE_shmem_shmem_long_min_to_all_261:
	handleEZTRACE_shmem_shmem_long_min_to_all_261();
        break;
	case EZTRACE_shmem_shmem_long_min_to_all_262:
	handleEZTRACE_shmem_shmem_long_min_to_all_262();
        break;
	case EZTRACE_shmem_shmem_float_min_to_all_263:
	handleEZTRACE_shmem_shmem_float_min_to_all_263();
        break;
	case EZTRACE_shmem_shmem_float_min_to_all_264:
	handleEZTRACE_shmem_shmem_float_min_to_all_264();
        break;
	case EZTRACE_shmem_shmem_double_min_to_all_265:
	handleEZTRACE_shmem_shmem_double_min_to_all_265();
        break;
	case EZTRACE_shmem_shmem_double_min_to_all_266:
	handleEZTRACE_shmem_shmem_double_min_to_all_266();
        break;
	case EZTRACE_shmem_shmem_longlong_min_to_all_267:
	handleEZTRACE_shmem_shmem_longlong_min_to_all_267();
        break;
	case EZTRACE_shmem_shmem_longlong_min_to_all_268:
	handleEZTRACE_shmem_shmem_longlong_min_to_all_268();
        break;
	case EZTRACE_shmem_shmem_longdouble_min_to_all_269:
	handleEZTRACE_shmem_shmem_longdouble_min_to_all_269();
        break;
	case EZTRACE_shmem_shmem_longdouble_min_to_all_270:
	handleEZTRACE_shmem_shmem_longdouble_min_to_all_270();
        break;
	case EZTRACE_shmem_shmem_short_sum_to_all_271:
	handleEZTRACE_shmem_shmem_short_sum_to_all_271();
        break;
	case EZTRACE_shmem_shmem_short_sum_to_all_272:
	handleEZTRACE_shmem_shmem_short_sum_to_all_272();
        break;
	case EZTRACE_shmem_shmem_int_sum_to_all_273:
	handleEZTRACE_shmem_shmem_int_sum_to_all_273();
        break;
	case EZTRACE_shmem_shmem_int_sum_to_all_274:
	handleEZTRACE_shmem_shmem_int_sum_to_all_274();
        break;
	case EZTRACE_shmem_shmem_long_sum_to_all_275:
	handleEZTRACE_shmem_shmem_long_sum_to_all_275();
        break;
	case EZTRACE_shmem_shmem_long_sum_to_all_276:
	handleEZTRACE_shmem_shmem_long_sum_to_all_276();
        break;
	case EZTRACE_shmem_shmem_float_sum_to_all_277:
	handleEZTRACE_shmem_shmem_float_sum_to_all_277();
        break;
	case EZTRACE_shmem_shmem_float_sum_to_all_278:
	handleEZTRACE_shmem_shmem_float_sum_to_all_278();
        break;
	case EZTRACE_shmem_shmem_double_sum_to_all_279:
	handleEZTRACE_shmem_shmem_double_sum_to_all_279();
        break;
	case EZTRACE_shmem_shmem_double_sum_to_all_280:
	handleEZTRACE_shmem_shmem_double_sum_to_all_280();
        break;
	case EZTRACE_shmem_shmem_longlong_sum_to_all_281:
	handleEZTRACE_shmem_shmem_longlong_sum_to_all_281();
        break;
	case EZTRACE_shmem_shmem_longlong_sum_to_all_282:
	handleEZTRACE_shmem_shmem_longlong_sum_to_all_282();
        break;
	case EZTRACE_shmem_shmem_longdouble_sum_to_all_283:
	handleEZTRACE_shmem_shmem_longdouble_sum_to_all_283();
        break;
	case EZTRACE_shmem_shmem_longdouble_sum_to_all_284:
	handleEZTRACE_shmem_shmem_longdouble_sum_to_all_284();
        break;
	case EZTRACE_shmem_shmem_short_prod_to_all_285:
	handleEZTRACE_shmem_shmem_short_prod_to_all_285();
        break;
	case EZTRACE_shmem_shmem_short_prod_to_all_286:
	handleEZTRACE_shmem_shmem_short_prod_to_all_286();
        break;
	case EZTRACE_shmem_shmem_int_prod_to_all_287:
	handleEZTRACE_shmem_shmem_int_prod_to_all_287();
        break;
	case EZTRACE_shmem_shmem_int_prod_to_all_288:
	handleEZTRACE_shmem_shmem_int_prod_to_all_288();
        break;
	case EZTRACE_shmem_shmem_long_prod_to_all_289:
	handleEZTRACE_shmem_shmem_long_prod_to_all_289();
        break;
	case EZTRACE_shmem_shmem_long_prod_to_all_290:
	handleEZTRACE_shmem_shmem_long_prod_to_all_290();
        break;
	case EZTRACE_shmem_shmem_float_prod_to_all_291:
	handleEZTRACE_shmem_shmem_float_prod_to_all_291();
        break;
	case EZTRACE_shmem_shmem_float_prod_to_all_292:
	handleEZTRACE_shmem_shmem_float_prod_to_all_292();
        break;
	case EZTRACE_shmem_shmem_double_prod_to_all_293:
	handleEZTRACE_shmem_shmem_double_prod_to_all_293();
        break;
	case EZTRACE_shmem_shmem_double_prod_to_all_294:
	handleEZTRACE_shmem_shmem_double_prod_to_all_294();
        break;
	case EZTRACE_shmem_shmem_longlong_prod_to_all_295:
	handleEZTRACE_shmem_shmem_longlong_prod_to_all_295();
        break;
	case EZTRACE_shmem_shmem_longlong_prod_to_all_296:
	handleEZTRACE_shmem_shmem_longlong_prod_to_all_296();
        break;
	case EZTRACE_shmem_shmem_longdouble_prod_to_all_297:
	handleEZTRACE_shmem_shmem_longdouble_prod_to_all_297();
        break;
	case EZTRACE_shmem_shmem_longdouble_prod_to_all_298:
	handleEZTRACE_shmem_shmem_longdouble_prod_to_all_298();
        break;
	case EZTRACE_shmem_shmem_collect32_299:
	handleEZTRACE_shmem_shmem_collect32_299();
        break;
	case EZTRACE_shmem_shmem_collect32_300:
	handleEZTRACE_shmem_shmem_collect32_300();
        break;
	case EZTRACE_shmem_shmem_collect64_301:
	handleEZTRACE_shmem_shmem_collect64_301();
        break;
	case EZTRACE_shmem_shmem_collect64_302:
	handleEZTRACE_shmem_shmem_collect64_302();
        break;
	case EZTRACE_shmem_shmem_short_collect_303:
	handleEZTRACE_shmem_shmem_short_collect_303();
        break;
	case EZTRACE_shmem_shmem_short_collect_304:
	handleEZTRACE_shmem_shmem_short_collect_304();
        break;
	case EZTRACE_shmem_shmem_int_collect_305:
	handleEZTRACE_shmem_shmem_int_collect_305();
        break;
	case EZTRACE_shmem_shmem_int_collect_306:
	handleEZTRACE_shmem_shmem_int_collect_306();
        break;
	case EZTRACE_shmem_shmem_long_collect_307:
	handleEZTRACE_shmem_shmem_long_collect_307();
        break;
	case EZTRACE_shmem_shmem_long_collect_308:
	handleEZTRACE_shmem_shmem_long_collect_308();
        break;
	case EZTRACE_shmem_shmem_longlong_collect_309:
	handleEZTRACE_shmem_shmem_longlong_collect_309();
        break;
	case EZTRACE_shmem_shmem_longlong_collect_310:
	handleEZTRACE_shmem_shmem_longlong_collect_310();
        break;
	case EZTRACE_shmem_shmem_float_collect_311:
	handleEZTRACE_shmem_shmem_float_collect_311();
        break;
	case EZTRACE_shmem_shmem_float_collect_312:
	handleEZTRACE_shmem_shmem_float_collect_312();
        break;
	case EZTRACE_shmem_shmem_double_collect_313:
	handleEZTRACE_shmem_shmem_double_collect_313();
        break;
	case EZTRACE_shmem_shmem_double_collect_314:
	handleEZTRACE_shmem_shmem_double_collect_314();
        break;
	case EZTRACE_shmem_shmem_fcollect32_315:
	handleEZTRACE_shmem_shmem_fcollect32_315();
        break;
	case EZTRACE_shmem_shmem_fcollect32_316:
	handleEZTRACE_shmem_shmem_fcollect32_316();
        break;
	case EZTRACE_shmem_shmem_fcollect64_317:
	handleEZTRACE_shmem_shmem_fcollect64_317();
        break;
	case EZTRACE_shmem_shmem_fcollect64_318:
	handleEZTRACE_shmem_shmem_fcollect64_318();
        break;
	case EZTRACE_shmem_shmem_short_fcollect_319:
	handleEZTRACE_shmem_shmem_short_fcollect_319();
        break;
	case EZTRACE_shmem_shmem_short_fcollect_320:
	handleEZTRACE_shmem_shmem_short_fcollect_320();
        break;
	case EZTRACE_shmem_shmem_int_fcollect_321:
	handleEZTRACE_shmem_shmem_int_fcollect_321();
        break;
	case EZTRACE_shmem_shmem_int_fcollect_322:
	handleEZTRACE_shmem_shmem_int_fcollect_322();
        break;
	case EZTRACE_shmem_shmem_long_fcollect_323:
	handleEZTRACE_shmem_shmem_long_fcollect_323();
        break;
	case EZTRACE_shmem_shmem_long_fcollect_324:
	handleEZTRACE_shmem_shmem_long_fcollect_324();
        break;
	case EZTRACE_shmem_shmem_longlong_fcollect_325:
	handleEZTRACE_shmem_shmem_longlong_fcollect_325();
        break;
	case EZTRACE_shmem_shmem_longlong_fcollect_326:
	handleEZTRACE_shmem_shmem_longlong_fcollect_326();
        break;
	case EZTRACE_shmem_shmem_float_fcollect_327:
	handleEZTRACE_shmem_shmem_float_fcollect_327();
        break;
	case EZTRACE_shmem_shmem_float_fcollect_328:
	handleEZTRACE_shmem_shmem_float_fcollect_328();
        break;
	case EZTRACE_shmem_shmem_double_fcollect_329:
	handleEZTRACE_shmem_shmem_double_fcollect_329();
        break;
	case EZTRACE_shmem_shmem_double_fcollect_330:
	handleEZTRACE_shmem_shmem_double_fcollect_330();
        break;
	case EZTRACE_shmem_shmem_broadcast32_331:
	handleEZTRACE_shmem_shmem_broadcast32_331();
        break;
	case EZTRACE_shmem_shmem_broadcast32_332:
	handleEZTRACE_shmem_shmem_broadcast32_332();
        break;
	case EZTRACE_shmem_shmem_broadcast64_333:
	handleEZTRACE_shmem_shmem_broadcast64_333();
        break;
	case EZTRACE_shmem_shmem_broadcast64_334:
	handleEZTRACE_shmem_shmem_broadcast64_334();
        break;
	case EZTRACE_shmem_shmem_short_broadcast_335:
	handleEZTRACE_shmem_shmem_short_broadcast_335();
        break;
	case EZTRACE_shmem_shmem_short_broadcast_336:
	handleEZTRACE_shmem_shmem_short_broadcast_336();
        break;
	case EZTRACE_shmem_shmem_int_broadcast_337:
	handleEZTRACE_shmem_shmem_int_broadcast_337();
        break;
	case EZTRACE_shmem_shmem_int_broadcast_338:
	handleEZTRACE_shmem_shmem_int_broadcast_338();
        break;
	case EZTRACE_shmem_shmem_long_broadcast_339:
	handleEZTRACE_shmem_shmem_long_broadcast_339();
        break;
	case EZTRACE_shmem_shmem_long_broadcast_340:
	handleEZTRACE_shmem_shmem_long_broadcast_340();
        break;
	case EZTRACE_shmem_shmem_longlong_broadcast_341:
	handleEZTRACE_shmem_shmem_longlong_broadcast_341();
        break;
	case EZTRACE_shmem_shmem_longlong_broadcast_342:
	handleEZTRACE_shmem_shmem_longlong_broadcast_342();
        break;
	case EZTRACE_shmem_shmem_float_broadcast_343:
	handleEZTRACE_shmem_shmem_float_broadcast_343();
        break;
	case EZTRACE_shmem_shmem_float_broadcast_344:
	handleEZTRACE_shmem_shmem_float_broadcast_344();
        break;
	case EZTRACE_shmem_shmem_double_broadcast_345:
	handleEZTRACE_shmem_shmem_double_broadcast_345();
        break;
	case EZTRACE_shmem_shmem_double_broadcast_346:
	handleEZTRACE_shmem_shmem_double_broadcast_346();
        break;
	case EZTRACE_shmem_shmem_set_lock_347:
	handleEZTRACE_shmem_shmem_set_lock_347();
        break;
	case EZTRACE_shmem_shmem_set_lock_348:
	handleEZTRACE_shmem_shmem_set_lock_348();
        break;
	case EZTRACE_shmem_shmem_clear_lock_349:
	handleEZTRACE_shmem_shmem_clear_lock_349();
        break;
	case EZTRACE_shmem_shmem_clear_lock_350:
	handleEZTRACE_shmem_shmem_clear_lock_350();
        break;
	case EZTRACE_shmem_shmem_test_lock_351:
	handleEZTRACE_shmem_shmem_test_lock_351();
        break;
	case EZTRACE_shmem_shmem_test_lock_352:
	handleEZTRACE_shmem_shmem_test_lock_352();
        break;

    case EZTRACE_BACKTRACE:
      handle_backtrace();  
      break;
    default:
      /* The event was not handled */
      return 0;
    }
  return 1;
}

/* This function is called by eztrace_stats for each event to
 * handle.
 * It shall return 1 if the event was handled successfully or
 * 0 otherwise.
 */
int
handle_shmem_stats(eztrace_event_t *ev)
{
  /* By default, use the same function as for eztrace_convert */
  return handle_shmem_events(ev);
}


void
print_shmem_stats()
{
  printf("\nshmem:\n");
  printf("-------\n");

  int i;
  /* Browse the list of processes */
  for (i = 0; i < NB_TRACES; i++) {
    struct eztrace_container_t *p_process = GET_PROCESS_CONTAINER(i);
    int j;
    /* For each process, browse the list of threads */
    for(j=0; j<p_process->nb_children; j++) {
      struct eztrace_container_t *thread_container = p_process->children[j];
      struct thread_info_t *p_thread = (struct thread_info_t*) thread_container->container_info;
      if(!p_thread)
       continue;
      INIT_shmem_THREAD_INFO(p_thread, ptr);
      printf("\tThread %s\n", thread_container->name);

      /* TO COMPLETE: you can print per-thread counters here */
    }
  }

}


void handleEZTRACE_shmem_start_pes_1() {
    FUNC_NAME;

    int a, rank, world_size;
    GET_PARAM_PACKED_3(CUR_EV, a, rank, world_size);

    CUR_TRACE->start_time = LITL_READ_GET_TIME(CUR_EV);
    if(!CUR_TRACE->start) {
      CUR_RANK = rank;
      int res __attribute__ ((__unused__));
      res = CREATE_TRACE_ID_STR(CUR_ID, rank);
      GET_PROCESS_INFO(CUR_INDEX)->pid = rank;
      eztrace_create_ids(CUR_INDEX);

      CUR_TRACE->start = 1;
      NB_START++;

      /* Create the process and the main thread */
      DECLARE_PROCESS_ID_STR(process_id, CUR_INDEX);
      CHANGE()
	addContainer (CURRENT, process_id, "CT_Process", "C_Prog", process_id, "0");
      new_thread(CUR_THREAD_ID);

    } else {
      CUR_TRACE->start = 1;
      NB_START++;
    }
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);

  
    CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_0");
}
void handleEZTRACE_shmem_start_pes_2() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_n_pes_3() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_1");
}
void handleEZTRACE_shmem_shmem_n_pes_4() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_my_pe_5() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_2");
}
void handleEZTRACE_shmem_shmem_my_pe_6() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_pe_accessible_7() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_3");
}
void handleEZTRACE_shmem_shmem_pe_accessible_8() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_addr_accessible_9() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_4");
}
void handleEZTRACE_shmem_shmem_addr_accessible_10() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmalloc_11() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_5");
}
void handleEZTRACE_shmem_shmalloc_12() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmemalign_13() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_6");
}
void handleEZTRACE_shmem_shmemalign_14() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shrealloc_15() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_7");
}
void handleEZTRACE_shmem_shrealloc_16() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shfree_17() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_8");
}
void handleEZTRACE_shmem_shfree_18() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_ptr_19() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_9");
}
void handleEZTRACE_shmem_shmem_ptr_20() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_p_21() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_10");
}
void handleEZTRACE_shmem_shmem_short_p_22() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_p_23() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_11");
}
void handleEZTRACE_shmem_shmem_int_p_24() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_p_25() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_12");
}
void handleEZTRACE_shmem_shmem_long_p_26() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_float_p_27() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_13");
}
void handleEZTRACE_shmem_shmem_float_p_28() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_double_p_29() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_14");
}
void handleEZTRACE_shmem_shmem_double_p_30() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_p_31() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_15");
}
void handleEZTRACE_shmem_shmem_longlong_p_32() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longdouble_p_33() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_16");
}
void handleEZTRACE_shmem_shmem_longdouble_p_34() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_char_put_35() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_17");
}
void handleEZTRACE_shmem_shmem_char_put_36() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_put_37() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_18");
}
void handleEZTRACE_shmem_shmem_short_put_38() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_put_39() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_19");
}
void handleEZTRACE_shmem_shmem_int_put_40() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_put_41() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_20");
}
void handleEZTRACE_shmem_shmem_long_put_42() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_float_put_43() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_21");
}
void handleEZTRACE_shmem_shmem_float_put_44() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_double_put_45() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_22");
}
void handleEZTRACE_shmem_shmem_double_put_46() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_put_47() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_23");
}
void handleEZTRACE_shmem_shmem_longlong_put_48() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longdouble_put_49() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_24");
}
void handleEZTRACE_shmem_shmem_longdouble_put_50() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_put32_51() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_25");
}
void handleEZTRACE_shmem_shmem_put32_52() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_put64_53() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_26");
}
void handleEZTRACE_shmem_shmem_put64_54() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_put128_55() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_27");
}
void handleEZTRACE_shmem_shmem_put128_56() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_putmem_57() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_28");
}
void handleEZTRACE_shmem_shmem_putmem_58() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_iput_59() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_29");
}
void handleEZTRACE_shmem_shmem_short_iput_60() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_iput_61() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_30");
}
void handleEZTRACE_shmem_shmem_int_iput_62() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_float_iput_63() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_31");
}
void handleEZTRACE_shmem_shmem_float_iput_64() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_iput_65() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_32");
}
void handleEZTRACE_shmem_shmem_long_iput_66() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_double_iput_67() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_33");
}
void handleEZTRACE_shmem_shmem_double_iput_68() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_iput_69() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_34");
}
void handleEZTRACE_shmem_shmem_longlong_iput_70() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longdouble_iput_71() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_35");
}
void handleEZTRACE_shmem_shmem_longdouble_iput_72() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_iput32_73() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_36");
}
void handleEZTRACE_shmem_shmem_iput32_74() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_iput64_75() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_37");
}
void handleEZTRACE_shmem_shmem_iput64_76() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_iput128_77() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_38");
}
void handleEZTRACE_shmem_shmem_iput128_78() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_g_79() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_39");
}
void handleEZTRACE_shmem_shmem_short_g_80() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_g_81() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_40");
}
void handleEZTRACE_shmem_shmem_int_g_82() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_g_83() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_41");
}
void handleEZTRACE_shmem_shmem_long_g_84() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_float_g_85() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_42");
}
void handleEZTRACE_shmem_shmem_float_g_86() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_double_g_87() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_43");
}
void handleEZTRACE_shmem_shmem_double_g_88() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_g_89() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_44");
}
void handleEZTRACE_shmem_shmem_longlong_g_90() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longdouble_g_91() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_45");
}
void handleEZTRACE_shmem_shmem_longdouble_g_92() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_char_get_93() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_46");
}
void handleEZTRACE_shmem_shmem_char_get_94() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_get_95() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_47");
}
void handleEZTRACE_shmem_shmem_short_get_96() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_get_97() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_48");
}
void handleEZTRACE_shmem_shmem_int_get_98() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_get_99() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_49");
}
void handleEZTRACE_shmem_shmem_long_get_100() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_float_get_101() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_50");
}
void handleEZTRACE_shmem_shmem_float_get_102() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_double_get_103() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_51");
}
void handleEZTRACE_shmem_shmem_double_get_104() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_get_105() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_52");
}
void handleEZTRACE_shmem_shmem_longlong_get_106() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longdouble_get_107() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_53");
}
void handleEZTRACE_shmem_shmem_longdouble_get_108() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_get32_109() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_54");
}
void handleEZTRACE_shmem_shmem_get32_110() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_get64_111() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_55");
}
void handleEZTRACE_shmem_shmem_get64_112() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_get128_113() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_56");
}
void handleEZTRACE_shmem_shmem_get128_114() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_getmem_115() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_57");
}
void handleEZTRACE_shmem_shmem_getmem_116() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_iget32_117() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_58");
}
void handleEZTRACE_shmem_shmem_iget32_118() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_iget64_119() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_59");
}
void handleEZTRACE_shmem_shmem_iget64_120() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_iget128_121() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_60");
}
void handleEZTRACE_shmem_shmem_iget128_122() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_iget_123() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_61");
}
void handleEZTRACE_shmem_shmem_short_iget_124() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_iget_125() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_62");
}
void handleEZTRACE_shmem_shmem_int_iget_126() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_iget_127() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_63");
}
void handleEZTRACE_shmem_shmem_long_iget_128() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_double_iget_129() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_64");
}
void handleEZTRACE_shmem_shmem_double_iget_130() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_float_iget_131() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_65");
}
void handleEZTRACE_shmem_shmem_float_iget_132() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_iget_133() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_66");
}
void handleEZTRACE_shmem_shmem_longlong_iget_134() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longdouble_iget_135() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_67");
}
void handleEZTRACE_shmem_shmem_longdouble_iget_136() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_swap_137() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_68");
}
void handleEZTRACE_shmem_shmem_short_swap_138() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_swap_139() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_69");
}
void handleEZTRACE_shmem_shmem_int_swap_140() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_swap_141() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_70");
}
void handleEZTRACE_shmem_shmem_long_swap_142() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_swap_143() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_71");
}
void handleEZTRACE_shmem_shmem_swap_144() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_swap_145() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_72");
}
void handleEZTRACE_shmem_shmem_longlong_swap_146() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_float_swap_147() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_73");
}
void handleEZTRACE_shmem_shmem_float_swap_148() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_double_swap_149() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_74");
}
void handleEZTRACE_shmem_shmem_double_swap_150() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_cswap_151() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_75");
}
void handleEZTRACE_shmem_shmem_short_cswap_152() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_cswap_153() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_76");
}
void handleEZTRACE_shmem_shmem_int_cswap_154() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_cswap_155() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_77");
}
void handleEZTRACE_shmem_shmem_long_cswap_156() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_cswap_157() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_78");
}
void handleEZTRACE_shmem_shmem_longlong_cswap_158() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_fadd_159() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_79");
}
void handleEZTRACE_shmem_shmem_short_fadd_160() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_fadd_161() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_80");
}
void handleEZTRACE_shmem_shmem_int_fadd_162() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_fadd_163() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_81");
}
void handleEZTRACE_shmem_shmem_long_fadd_164() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_fadd_165() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_82");
}
void handleEZTRACE_shmem_shmem_longlong_fadd_166() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_finc_167() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_83");
}
void handleEZTRACE_shmem_shmem_short_finc_168() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_finc_169() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_84");
}
void handleEZTRACE_shmem_shmem_int_finc_170() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_finc_171() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_85");
}
void handleEZTRACE_shmem_shmem_long_finc_172() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_finc_173() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_86");
}
void handleEZTRACE_shmem_shmem_longlong_finc_174() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_add_175() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_87");
}
void handleEZTRACE_shmem_shmem_short_add_176() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_add_177() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_88");
}
void handleEZTRACE_shmem_shmem_int_add_178() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_add_179() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_89");
}
void handleEZTRACE_shmem_shmem_long_add_180() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_add_181() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_90");
}
void handleEZTRACE_shmem_shmem_longlong_add_182() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_inc_183() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_91");
}
void handleEZTRACE_shmem_shmem_short_inc_184() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_inc_185() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_92");
}
void handleEZTRACE_shmem_shmem_int_inc_186() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_inc_187() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_93");
}
void handleEZTRACE_shmem_shmem_long_inc_188() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_inc_189() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_94");
}
void handleEZTRACE_shmem_shmem_longlong_inc_190() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_wait_191() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_95");
}
void handleEZTRACE_shmem_shmem_short_wait_192() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_wait_193() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_96");
}
void handleEZTRACE_shmem_shmem_int_wait_194() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_wait_195() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_97");
}
void handleEZTRACE_shmem_shmem_long_wait_196() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_wait_197() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_98");
}
void handleEZTRACE_shmem_shmem_longlong_wait_198() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_wait_199() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_99");
}
void handleEZTRACE_shmem_shmem_wait_200() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_wait_until_201() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_100");
}
void handleEZTRACE_shmem_shmem_short_wait_until_202() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_wait_until_203() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_101");
}
void handleEZTRACE_shmem_shmem_int_wait_until_204() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_wait_until_205() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_102");
}
void handleEZTRACE_shmem_shmem_long_wait_until_206() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_wait_until_207() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_103");
}
void handleEZTRACE_shmem_shmem_longlong_wait_until_208() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_wait_until_209() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_104");
}
void handleEZTRACE_shmem_shmem_wait_until_210() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_barrier_all_211() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_105");
}
void handleEZTRACE_shmem_shmem_barrier_all_212() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_barrier_213() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_106");
}
void handleEZTRACE_shmem_shmem_barrier_214() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_fence_215() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_107");
}
void handleEZTRACE_shmem_shmem_fence_216() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_quiet_217() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_108");
}
void handleEZTRACE_shmem_shmem_quiet_218() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_and_to_all_219() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_109");
}
void handleEZTRACE_shmem_shmem_short_and_to_all_220() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_and_to_all_221() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_110");
}
void handleEZTRACE_shmem_shmem_int_and_to_all_222() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_and_to_all_223() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_111");
}
void handleEZTRACE_shmem_shmem_long_and_to_all_224() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_and_to_all_225() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_112");
}
void handleEZTRACE_shmem_shmem_longlong_and_to_all_226() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_or_to_all_227() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_113");
}
void handleEZTRACE_shmem_shmem_short_or_to_all_228() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_or_to_all_229() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_114");
}
void handleEZTRACE_shmem_shmem_int_or_to_all_230() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_or_to_all_231() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_115");
}
void handleEZTRACE_shmem_shmem_long_or_to_all_232() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_or_to_all_233() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_116");
}
void handleEZTRACE_shmem_shmem_longlong_or_to_all_234() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_xor_to_all_235() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_117");
}
void handleEZTRACE_shmem_shmem_short_xor_to_all_236() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_xor_to_all_237() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_118");
}
void handleEZTRACE_shmem_shmem_int_xor_to_all_238() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_xor_to_all_239() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_119");
}
void handleEZTRACE_shmem_shmem_long_xor_to_all_240() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_xor_to_all_241() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_120");
}
void handleEZTRACE_shmem_shmem_longlong_xor_to_all_242() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_max_to_all_243() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_121");
}
void handleEZTRACE_shmem_shmem_short_max_to_all_244() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_max_to_all_245() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_122");
}
void handleEZTRACE_shmem_shmem_int_max_to_all_246() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_max_to_all_247() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_123");
}
void handleEZTRACE_shmem_shmem_long_max_to_all_248() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_float_max_to_all_249() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_124");
}
void handleEZTRACE_shmem_shmem_float_max_to_all_250() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_double_max_to_all_251() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_125");
}
void handleEZTRACE_shmem_shmem_double_max_to_all_252() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_max_to_all_253() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_126");
}
void handleEZTRACE_shmem_shmem_longlong_max_to_all_254() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longdouble_max_to_all_255() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_127");
}
void handleEZTRACE_shmem_shmem_longdouble_max_to_all_256() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_min_to_all_257() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_128");
}
void handleEZTRACE_shmem_shmem_short_min_to_all_258() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_min_to_all_259() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_129");
}
void handleEZTRACE_shmem_shmem_int_min_to_all_260() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_min_to_all_261() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_130");
}
void handleEZTRACE_shmem_shmem_long_min_to_all_262() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_float_min_to_all_263() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_131");
}
void handleEZTRACE_shmem_shmem_float_min_to_all_264() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_double_min_to_all_265() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_132");
}
void handleEZTRACE_shmem_shmem_double_min_to_all_266() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_min_to_all_267() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_133");
}
void handleEZTRACE_shmem_shmem_longlong_min_to_all_268() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longdouble_min_to_all_269() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_134");
}
void handleEZTRACE_shmem_shmem_longdouble_min_to_all_270() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_sum_to_all_271() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_135");
}
void handleEZTRACE_shmem_shmem_short_sum_to_all_272() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_sum_to_all_273() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_136");
}
void handleEZTRACE_shmem_shmem_int_sum_to_all_274() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_sum_to_all_275() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_137");
}
void handleEZTRACE_shmem_shmem_long_sum_to_all_276() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_float_sum_to_all_277() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_138");
}
void handleEZTRACE_shmem_shmem_float_sum_to_all_278() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_double_sum_to_all_279() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_139");
}
void handleEZTRACE_shmem_shmem_double_sum_to_all_280() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_sum_to_all_281() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_140");
}
void handleEZTRACE_shmem_shmem_longlong_sum_to_all_282() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longdouble_sum_to_all_283() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_141");
}
void handleEZTRACE_shmem_shmem_longdouble_sum_to_all_284() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_prod_to_all_285() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_142");
}
void handleEZTRACE_shmem_shmem_short_prod_to_all_286() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_prod_to_all_287() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_143");
}
void handleEZTRACE_shmem_shmem_int_prod_to_all_288() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_prod_to_all_289() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_144");
}
void handleEZTRACE_shmem_shmem_long_prod_to_all_290() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_float_prod_to_all_291() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_145");
}
void handleEZTRACE_shmem_shmem_float_prod_to_all_292() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_double_prod_to_all_293() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_146");
}
void handleEZTRACE_shmem_shmem_double_prod_to_all_294() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_prod_to_all_295() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_147");
}
void handleEZTRACE_shmem_shmem_longlong_prod_to_all_296() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longdouble_prod_to_all_297() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_148");
}
void handleEZTRACE_shmem_shmem_longdouble_prod_to_all_298() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_collect32_299() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_149");
}
void handleEZTRACE_shmem_shmem_collect32_300() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_collect64_301() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_150");
}
void handleEZTRACE_shmem_shmem_collect64_302() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_collect_303() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_151");
}
void handleEZTRACE_shmem_shmem_short_collect_304() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_collect_305() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_152");
}
void handleEZTRACE_shmem_shmem_int_collect_306() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_collect_307() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_153");
}
void handleEZTRACE_shmem_shmem_long_collect_308() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_collect_309() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_154");
}
void handleEZTRACE_shmem_shmem_longlong_collect_310() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_float_collect_311() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_155");
}
void handleEZTRACE_shmem_shmem_float_collect_312() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_double_collect_313() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_156");
}
void handleEZTRACE_shmem_shmem_double_collect_314() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_fcollect32_315() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_157");
}
void handleEZTRACE_shmem_shmem_fcollect32_316() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_fcollect64_317() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_158");
}
void handleEZTRACE_shmem_shmem_fcollect64_318() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_fcollect_319() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_159");
}
void handleEZTRACE_shmem_shmem_short_fcollect_320() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_fcollect_321() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_160");
}
void handleEZTRACE_shmem_shmem_int_fcollect_322() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_fcollect_323() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_161");
}
void handleEZTRACE_shmem_shmem_long_fcollect_324() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_fcollect_325() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_162");
}
void handleEZTRACE_shmem_shmem_longlong_fcollect_326() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_float_fcollect_327() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_163");
}
void handleEZTRACE_shmem_shmem_float_fcollect_328() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_double_fcollect_329() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_164");
}
void handleEZTRACE_shmem_shmem_double_fcollect_330() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_broadcast32_331() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_165");
}
void handleEZTRACE_shmem_shmem_broadcast32_332() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_broadcast64_333() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_166");
}
void handleEZTRACE_shmem_shmem_broadcast64_334() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_short_broadcast_335() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_167");
}
void handleEZTRACE_shmem_shmem_short_broadcast_336() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_int_broadcast_337() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_168");
}
void handleEZTRACE_shmem_shmem_int_broadcast_338() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_long_broadcast_339() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_169");
}
void handleEZTRACE_shmem_shmem_long_broadcast_340() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_longlong_broadcast_341() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_170");
}
void handleEZTRACE_shmem_shmem_longlong_broadcast_342() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_float_broadcast_343() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_171");
}
void handleEZTRACE_shmem_shmem_float_broadcast_344() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_double_broadcast_345() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_172");
}
void handleEZTRACE_shmem_shmem_double_broadcast_346() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_set_lock_347() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_173");
}
void handleEZTRACE_shmem_shmem_set_lock_348() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_clear_lock_349() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_174");
}
void handleEZTRACE_shmem_shmem_clear_lock_350() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

void handleEZTRACE_shmem_shmem_test_lock_351() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
     CHANGE() pushState (CURRENT, "ST_Thread", thread_id, "shmem_STATE_175");
}
void handleEZTRACE_shmem_shmem_test_lock_352() {
    FUNC_NAME;
    DECLARE_THREAD_ID_STR(thread_id, CUR_INDEX, CUR_THREAD_ID);
    DECLARE_CUR_THREAD(p_thread);
    INIT_shmem_THREAD_INFO(p_thread, ptr);
    CHANGE() popState (CURRENT, "ST_Thread", thread_id);
}

