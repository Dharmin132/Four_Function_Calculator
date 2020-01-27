/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "H:/Semester 5/EL 203 - 4.5 - Embedded Hardware Designs/Project/Calculator/binary_to_BCD.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_1338720736_2730021763_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;

LAB0:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 10208);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(32, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t5 = t1;
    memset(t5, (unsigned char)2, 32U);
    t6 = (t0 + 10640);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(33, ng0);
    t1 = xsi_get_transient_memory(40U);
    memset(t1, 0, 40U);
    t2 = t1;
    memset(t2, (unsigned char)2, 40U);
    t5 = (t0 + 10704);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 40U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 10768);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(35, ng0);
    t1 = xsi_get_transient_memory(40U);
    memset(t1, 0, 40U);
    t2 = t1;
    memset(t2, (unsigned char)2, 40U);
    t5 = (t0 + 10832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 40U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 10896);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t2 = (t0 + 10640);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 10704);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10768);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 10832);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t1 = (t0 + 10896);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t11;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_1338720736_2730021763_p_1(char *t0)
{
    char t13[16];
    char t14[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10960);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 11024);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 40U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 11088);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t1 = (t0 + 11152);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t8;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 10224);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 10960);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 11088);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(59, ng0);
    t1 = xsi_get_transient_memory(40U);
    memset(t1, 0, 40U);
    t2 = t1;
    memset(t2, (unsigned char)2, 40U);
    t4 = (t0 + 11024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t1, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 11152);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t3 = (t8 == 32);
    if (t3 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t10 = (31 - 30);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t14 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 30;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t8 = (0 - 30);
    t15 = (t8 * -1);
    t15 = (t15 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t15;
    t4 = xsi_base_array_concat(t4, t13, t5, (char)97, t1, t14, (char)99, (unsigned char)6, (char)101);
    t15 = (31U + 1U);
    t3 = (32U != t15);
    if (t3 == 1)
        goto LAB9;

LAB10:    t7 = (t0 + 11088);
    t9 = (t7 + 56U);
    t16 = *((char **)t9);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t4, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t10 = (39 - 38);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t4 = (t0 + 1992U);
    t5 = *((char **)t4);
    t8 = (31 - 31);
    t15 = (t8 * -1);
    t19 = (1U * t15);
    t20 = (0 + t19);
    t4 = (t5 + t20);
    t3 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 4024);
    t9 = (t14 + 0U);
    t16 = (t9 + 0U);
    *((int *)t16) = 38;
    t16 = (t9 + 4U);
    *((int *)t16) = 0;
    t16 = (t9 + 8U);
    *((int *)t16) = -1;
    t21 = (0 - 38);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t16 = (t9 + 12U);
    *((unsigned int *)t16) = t22;
    t6 = xsi_base_array_concat(t6, t13, t7, (char)97, t1, t14, (char)99, t3, (char)101);
    t22 = (39U + 1U);
    t23 = (40U != t22);
    if (t23 == 1)
        goto LAB11;

LAB12:    t16 = (t0 + 11024);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t6, 40U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t21 = (t8 + 1);
    t1 = (t0 + 11152);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t21;
    xsi_driver_first_trans_fast(t1);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 10960);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 10960);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB9:    xsi_size_not_matching(32U, t15, 0);
    goto LAB10;

LAB11:    xsi_size_not_matching(40U, t22, 0);
    goto LAB12;

}

static void work_a_1338720736_2730021763_p_2(char *t0)
{
    char t6[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (39 - 39);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 39;
    t8 = (t7 + 4U);
    *((int *)t8) = 36;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (36 - 39);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t6, 4);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = (t0 + 2312U);
    t30 = *((char **)t29);
    t31 = (39 - 39);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t34 = (t0 + 11216);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 4U);
    xsi_driver_first_trans_delta(t34, 0U, 4U, 0LL);

LAB2:    t39 = (t0 + 10240);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 2312U);
    t13 = *((char **)t8);
    t10 = (39 - 39);
    t14 = (t10 * 1U);
    t15 = (0 + t14);
    t8 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 39;
    t18 = (t17 + 4U);
    *((int *)t18) = 36;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (36 - 39);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t8, t16, 3);
    t21 = (t12 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 11216);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_delta(t24, 0U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t22, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_3(char *t0)
{
    char t6[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (39 - 35);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 35;
    t8 = (t7 + 4U);
    *((int *)t8) = 32;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (32 - 35);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t6, 4);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = (t0 + 2312U);
    t30 = *((char **)t29);
    t31 = (39 - 35);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t34 = (t0 + 11280);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 4U);
    xsi_driver_first_trans_delta(t34, 4U, 4U, 0LL);

LAB2:    t39 = (t0 + 10256);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 2312U);
    t13 = *((char **)t8);
    t10 = (39 - 35);
    t14 = (t10 * 1U);
    t15 = (0 + t14);
    t8 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 35;
    t18 = (t17 + 4U);
    *((int *)t18) = 32;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (32 - 35);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t8, t16, 3);
    t21 = (t12 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 11280);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_delta(t24, 4U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t22, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_4(char *t0)
{
    char t6[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (39 - 31);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 31;
    t8 = (t7 + 4U);
    *((int *)t8) = 28;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (28 - 31);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t6, 4);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = (t0 + 2312U);
    t30 = *((char **)t29);
    t31 = (39 - 31);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t34 = (t0 + 11344);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 4U);
    xsi_driver_first_trans_delta(t34, 8U, 4U, 0LL);

LAB2:    t39 = (t0 + 10272);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 2312U);
    t13 = *((char **)t8);
    t10 = (39 - 31);
    t14 = (t10 * 1U);
    t15 = (0 + t14);
    t8 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 31;
    t18 = (t17 + 4U);
    *((int *)t18) = 28;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (28 - 31);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t8, t16, 3);
    t21 = (t12 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 11344);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_delta(t24, 8U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t22, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_5(char *t0)
{
    char t6[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (39 - 27);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 27;
    t8 = (t7 + 4U);
    *((int *)t8) = 24;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (24 - 27);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t6, 4);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = (t0 + 2312U);
    t30 = *((char **)t29);
    t31 = (39 - 27);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t34 = (t0 + 11408);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 4U);
    xsi_driver_first_trans_delta(t34, 12U, 4U, 0LL);

LAB2:    t39 = (t0 + 10288);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 2312U);
    t13 = *((char **)t8);
    t10 = (39 - 27);
    t14 = (t10 * 1U);
    t15 = (0 + t14);
    t8 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 27;
    t18 = (t17 + 4U);
    *((int *)t18) = 24;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (24 - 27);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t8, t16, 3);
    t21 = (t12 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 11408);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_delta(t24, 12U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t22, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_6(char *t0)
{
    char t6[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (39 - 23);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 23;
    t8 = (t7 + 4U);
    *((int *)t8) = 20;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (20 - 23);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t6, 4);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = (t0 + 2312U);
    t30 = *((char **)t29);
    t31 = (39 - 23);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t34 = (t0 + 11472);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 4U);
    xsi_driver_first_trans_delta(t34, 16U, 4U, 0LL);

LAB2:    t39 = (t0 + 10304);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 2312U);
    t13 = *((char **)t8);
    t10 = (39 - 23);
    t14 = (t10 * 1U);
    t15 = (0 + t14);
    t8 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 23;
    t18 = (t17 + 4U);
    *((int *)t18) = 20;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (20 - 23);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t8, t16, 3);
    t21 = (t12 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 11472);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_delta(t24, 16U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t22, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_7(char *t0)
{
    char t6[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (39 - 19);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 19;
    t8 = (t7 + 4U);
    *((int *)t8) = 16;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (16 - 19);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t6, 4);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = (t0 + 2312U);
    t30 = *((char **)t29);
    t31 = (39 - 19);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t34 = (t0 + 11536);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 4U);
    xsi_driver_first_trans_delta(t34, 20U, 4U, 0LL);

LAB2:    t39 = (t0 + 10320);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 2312U);
    t13 = *((char **)t8);
    t10 = (39 - 19);
    t14 = (t10 * 1U);
    t15 = (0 + t14);
    t8 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 19;
    t18 = (t17 + 4U);
    *((int *)t18) = 16;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (16 - 19);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t8, t16, 3);
    t21 = (t12 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 11536);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_delta(t24, 20U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t22, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_8(char *t0)
{
    char t6[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (39 - 15);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 15;
    t8 = (t7 + 4U);
    *((int *)t8) = 12;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (12 - 15);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t6, 4);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = (t0 + 2312U);
    t30 = *((char **)t29);
    t31 = (39 - 15);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t34 = (t0 + 11600);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 4U);
    xsi_driver_first_trans_delta(t34, 24U, 4U, 0LL);

LAB2:    t39 = (t0 + 10336);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 2312U);
    t13 = *((char **)t8);
    t10 = (39 - 15);
    t14 = (t10 * 1U);
    t15 = (0 + t14);
    t8 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 15;
    t18 = (t17 + 4U);
    *((int *)t18) = 12;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (12 - 15);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t8, t16, 3);
    t21 = (t12 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 11600);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_delta(t24, 24U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t22, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_9(char *t0)
{
    char t6[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (39 - 11);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 11;
    t8 = (t7 + 4U);
    *((int *)t8) = 8;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (8 - 11);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t6, 4);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = (t0 + 2312U);
    t30 = *((char **)t29);
    t31 = (39 - 11);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t34 = (t0 + 11664);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 4U);
    xsi_driver_first_trans_delta(t34, 28U, 4U, 0LL);

LAB2:    t39 = (t0 + 10352);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 2312U);
    t13 = *((char **)t8);
    t10 = (39 - 11);
    t14 = (t10 * 1U);
    t15 = (0 + t14);
    t8 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 11;
    t18 = (t17 + 4U);
    *((int *)t18) = 8;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (8 - 11);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t8, t16, 3);
    t21 = (t12 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 11664);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_delta(t24, 28U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t22, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_10(char *t0)
{
    char t6[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (39 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 4;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (4 - 7);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t6, 4);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = (t0 + 2312U);
    t30 = *((char **)t29);
    t31 = (39 - 7);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t34 = (t0 + 11728);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 4U);
    xsi_driver_first_trans_delta(t34, 32U, 4U, 0LL);

LAB2:    t39 = (t0 + 10368);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 2312U);
    t13 = *((char **)t8);
    t10 = (39 - 7);
    t14 = (t10 * 1U);
    t15 = (0 + t14);
    t8 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 7;
    t18 = (t17 + 4U);
    *((int *)t18) = 4;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (4 - 7);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t8, t16, 3);
    t21 = (t12 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 11728);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_delta(t24, 32U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t22, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_11(char *t0)
{
    char t6[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (39 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 3;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 3);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t6, 4);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = (t0 + 2312U);
    t30 = *((char **)t29);
    t31 = (39 - 3);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t34 = (t0 + 11792);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 4U);
    xsi_driver_first_trans_delta(t34, 36U, 4U, 0LL);

LAB2:    t39 = (t0 + 10384);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 2312U);
    t13 = *((char **)t8);
    t10 = (39 - 3);
    t14 = (t10 * 1U);
    t15 = (0 + t14);
    t8 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 3;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - 3);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t8, t16, 3);
    t21 = (t12 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 11792);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_delta(t24, 36U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t22, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 2792U);
    t11 = *((char **)t10);
    t10 = (t0 + 11856);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 40U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t16 = (t0 + 10400);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t1 = (t0 + 11856);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 40U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(88, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (39 - 39);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 11920);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_delta(t6, 0U, 4U, 0LL);

LAB2:    t11 = (t0 + 10416);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(89, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (39 - 35);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 11984);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_delta(t6, 4U, 4U, 0LL);

LAB2:    t11 = (t0 + 10432);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(90, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (39 - 31);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 12048);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_delta(t6, 8U, 4U, 0LL);

LAB2:    t11 = (t0 + 10448);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(91, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (39 - 27);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 12112);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_delta(t6, 12U, 4U, 0LL);

LAB2:    t11 = (t0 + 10464);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_17(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(92, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (39 - 23);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 12176);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_delta(t6, 16U, 4U, 0LL);

LAB2:    t11 = (t0 + 10480);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_18(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(93, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (39 - 19);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 12240);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_delta(t6, 20U, 4U, 0LL);

LAB2:    t11 = (t0 + 10496);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_19(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(94, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (39 - 15);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 12304);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_delta(t6, 24U, 4U, 0LL);

LAB2:    t11 = (t0 + 10512);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_20(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(95, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (39 - 11);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 12368);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_delta(t6, 28U, 4U, 0LL);

LAB2:    t11 = (t0 + 10528);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_21(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(96, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (39 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 12432);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_delta(t6, 32U, 4U, 0LL);

LAB2:    t11 = (t0 + 10544);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1338720736_2730021763_p_22(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(97, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (39 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 12496);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_delta(t6, 36U, 4U, 0LL);

LAB2:    t11 = (t0 + 10560);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1338720736_2730021763_init()
{
	static char *pe[] = {(void *)work_a_1338720736_2730021763_p_0,(void *)work_a_1338720736_2730021763_p_1,(void *)work_a_1338720736_2730021763_p_2,(void *)work_a_1338720736_2730021763_p_3,(void *)work_a_1338720736_2730021763_p_4,(void *)work_a_1338720736_2730021763_p_5,(void *)work_a_1338720736_2730021763_p_6,(void *)work_a_1338720736_2730021763_p_7,(void *)work_a_1338720736_2730021763_p_8,(void *)work_a_1338720736_2730021763_p_9,(void *)work_a_1338720736_2730021763_p_10,(void *)work_a_1338720736_2730021763_p_11,(void *)work_a_1338720736_2730021763_p_12,(void *)work_a_1338720736_2730021763_p_13,(void *)work_a_1338720736_2730021763_p_14,(void *)work_a_1338720736_2730021763_p_15,(void *)work_a_1338720736_2730021763_p_16,(void *)work_a_1338720736_2730021763_p_17,(void *)work_a_1338720736_2730021763_p_18,(void *)work_a_1338720736_2730021763_p_19,(void *)work_a_1338720736_2730021763_p_20,(void *)work_a_1338720736_2730021763_p_21,(void *)work_a_1338720736_2730021763_p_22};
	xsi_register_didat("work_a_1338720736_2730021763", "isim/binary_to_BCD_isim_beh.exe.sim/work/a_1338720736_2730021763.didat");
	xsi_register_executes(pe);
}
