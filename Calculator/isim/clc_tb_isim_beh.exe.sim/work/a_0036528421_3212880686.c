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
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;
static const char *ng3 = "Function division ended without a return statement";
static const char *ng4 = "H:/Semester 5/EL 203 - 4.5 - Embedded Hardware Designs/Project/Calculator/calculations.vhd";

unsigned char ieee_p_3620187407_sub_4058165771_3965413181(char *, char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


char *work_a_0036528421_3212880686_sub_1100544276_3057020925(char *t1, char *t2, char *t3, char *t4)
{
    char t5[728];
    char t6[40];
    char t7[16];
    char t12[16];
    char t17[8];
    char t23[8];
    char t28[16];
    char t34[32];
    char t41[8];
    char t47[8];
    char t50[16];
    char t56[32];
    char t76[16];
    char *t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    int t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned char t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    int t66;
    char *t67;
    char *t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 31;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 31);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t12 + 0U);
    t13 = (t9 + 0U);
    *((int *)t13) = 31;
    t13 = (t9 + 4U);
    *((int *)t13) = 0;
    t13 = (t9 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - 31);
    t11 = (t14 * -1);
    t11 = (t11 + 1);
    t13 = (t9 + 12U);
    *((unsigned int *)t13) = t11;
    t13 = (t5 + 4U);
    t15 = ((STD_STANDARD) + 384);
    t16 = (t13 + 88U);
    *((char **)t16) = t15;
    t18 = (t13 + 56U);
    *((char **)t18) = t17;
    xsi_type_set_default_value(t15, t17, 0);
    t19 = (t13 + 80U);
    *((unsigned int *)t19) = 4U;
    t20 = (t5 + 124U);
    t21 = ((STD_STANDARD) + 384);
    t22 = (t20 + 88U);
    *((char **)t22) = t21;
    t24 = (t20 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, 0);
    t25 = (t20 + 80U);
    *((unsigned int *)t25) = 4U;
    t26 = (t1 + 9576);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 31;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - 31);
    t11 = (t31 * -1);
    t11 = (t11 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t11;
    t30 = (t5 + 244U);
    t32 = ((IEEE_P_2592010699) + 4024);
    t33 = (t30 + 88U);
    *((char **)t33) = t32;
    t35 = (t30 + 56U);
    *((char **)t35) = t34;
    memcpy(t34, t26, 32U);
    t36 = (t30 + 64U);
    *((char **)t36) = t28;
    t37 = (t30 + 80U);
    *((unsigned int *)t37) = 32U;
    t38 = (t5 + 364U);
    t39 = ((STD_STANDARD) + 384);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 4U;
    t44 = (t5 + 484U);
    t45 = ((STD_STANDARD) + 384);
    t46 = (t44 + 88U);
    *((char **)t46) = t45;
    t48 = (t44 + 56U);
    *((char **)t48) = t47;
    xsi_type_set_default_value(t45, t47, 0);
    t49 = (t44 + 80U);
    *((unsigned int *)t49) = 4U;
    t51 = (t50 + 0U);
    t52 = (t51 + 0U);
    *((int *)t52) = 31;
    t52 = (t51 + 4U);
    *((int *)t52) = 0;
    t52 = (t51 + 8U);
    *((int *)t52) = -1;
    t53 = (0 - 31);
    t11 = (t53 * -1);
    t11 = (t11 + 1);
    t52 = (t51 + 12U);
    *((unsigned int *)t52) = t11;
    t52 = (t5 + 604U);
    t54 = ((IEEE_P_2592010699) + 4024);
    t55 = (t52 + 88U);
    *((char **)t55) = t54;
    t57 = (t52 + 56U);
    *((char **)t57) = t56;
    xsi_type_set_default_value(t54, t56, t50);
    t58 = (t52 + 64U);
    *((char **)t58) = t50;
    t59 = (t52 + 80U);
    *((unsigned int *)t59) = 32U;
    t60 = (t6 + 4U);
    t61 = (t3 != 0);
    if (t61 == 1)
        goto LAB3;

LAB2:    t62 = (t6 + 12U);
    *((char **)t62) = t7;
    t63 = (t6 + 20U);
    t64 = (t4 != 0);
    if (t64 == 1)
        goto LAB5;

LAB4:    t65 = (t6 + 28U);
    *((char **)t65) = t12;
    t66 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t7);
    t67 = (t13 + 56U);
    t68 = *((char **)t67);
    t67 = (t68 + 0);
    *((int *)t67) = t66;
    t10 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t4, t12);
    t8 = (t20 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t10;
    t8 = (t13 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = (t38 + 56U);
    t15 = *((char **)t8);
    t8 = (t15 + 0);
    *((int *)t8) = t10;
    t8 = (t20 + 56U);
    t9 = *((char **)t8);
    t10 = *((int *)t9);
    t8 = (t44 + 56U);
    t15 = *((char **)t8);
    t8 = (t15 + 0);
    *((int *)t8) = t10;
    t10 = 23;
    t14 = 0;

LAB6:    if (t10 >= t14)
        goto LAB7;

LAB9:    t8 = (t1 + 9608);
    t15 = (t52 + 56U);
    t16 = *((char **)t15);
    t15 = (t50 + 0U);
    t10 = *((int *)t15);
    t11 = (t10 - 31);
    t74 = (t11 * 1U);
    t75 = (0 + t74);
    t18 = (t16 + t75);
    memcpy(t18, t8, 8U);
    t8 = (t1 + 9616);
    t15 = (t76 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 0;
    t16 = (t15 + 4U);
    *((int *)t16) = 31;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t10 = (31 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t11;
    t61 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t12, t8, t76);
    if (t61 != 0)
        goto LAB14;

LAB16:    t8 = (t52 + 56U);
    t9 = *((char **)t8);
    t8 = (t50 + 12U);
    t11 = *((unsigned int *)t8);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t9, t11);
    t15 = (t50 + 0U);
    t10 = *((int *)t15);
    t16 = (t50 + 4U);
    t14 = *((int *)t16);
    t18 = (t50 + 8U);
    t31 = *((int *)t18);
    t19 = (t2 + 0U);
    t21 = (t19 + 0U);
    *((int *)t21) = t10;
    t21 = (t19 + 4U);
    *((int *)t21) = t14;
    t21 = (t19 + 8U);
    *((int *)t21) = t31;
    t53 = (t14 - t10);
    t74 = (t53 * t31);
    t74 = (t74 + 1);
    t21 = (t19 + 12U);
    *((unsigned int *)t21) = t74;

LAB1:    return t0;
LAB3:    *((char **)t60) = t3;
    goto LAB2;

LAB5:    *((char **)t63) = t4;
    goto LAB4;

LAB7:    t8 = (t38 + 56U);
    t9 = *((char **)t8);
    t31 = *((int *)t9);
    t8 = (t44 + 56U);
    t15 = *((char **)t8);
    t53 = *((int *)t15);
    t66 = xsi_vhdl_pow(2, t10);
    t69 = (t53 * t66);
    t61 = (t31 >= t69);
    if (t61 != 0)
        goto LAB10;

LAB12:    t8 = (t52 + 56U);
    t9 = *((char **)t8);
    t8 = (t50 + 0U);
    t31 = *((int *)t8);
    t15 = (t50 + 8U);
    t53 = *((int *)t15);
    t66 = (t10 - t31);
    t11 = (t66 * t53);
    t16 = (t50 + 4U);
    t69 = *((int *)t16);
    xsi_vhdl_check_range_of_index(t31, t69, t53, t10);
    t74 = (1U * t11);
    t75 = (0 + t74);
    t18 = (t9 + t75);
    *((unsigned char *)t18) = (unsigned char)2;

LAB11:
LAB8:    if (t10 == t14)
        goto LAB9;

LAB13:    t31 = (t10 + -1);
    t10 = t31;
    goto LAB6;

LAB10:    t8 = (t52 + 56U);
    t16 = *((char **)t8);
    t8 = (t50 + 0U);
    t70 = *((int *)t8);
    t18 = (t50 + 8U);
    t71 = *((int *)t18);
    t72 = (t10 - t70);
    t11 = (t72 * t71);
    t19 = (t50 + 4U);
    t73 = *((int *)t19);
    xsi_vhdl_check_range_of_index(t70, t73, t71, t10);
    t74 = (1U * t11);
    t75 = (0 + t74);
    t21 = (t16 + t75);
    *((unsigned char *)t21) = (unsigned char)3;
    t8 = (t38 + 56U);
    t9 = *((char **)t8);
    t31 = *((int *)t9);
    t8 = (t44 + 56U);
    t15 = *((char **)t8);
    t53 = *((int *)t15);
    t66 = xsi_vhdl_pow(2, t10);
    t69 = (t53 * t66);
    t70 = (t31 - t69);
    t8 = (t38 + 56U);
    t16 = *((char **)t8);
    t8 = (t16 + 0);
    *((int *)t8) = t70;
    goto LAB11;

LAB14:    t16 = (t1 + 9648);
    t0 = xsi_get_transient_memory(45U);
    memcpy(t0, t16, 45U);
    t19 = (t2 + 0U);
    t21 = (t19 + 0U);
    *((int *)t21) = 1;
    t21 = (t19 + 4U);
    *((int *)t21) = 45;
    t21 = (t19 + 8U);
    *((int *)t21) = 1;
    t14 = (45 - 1);
    t11 = (t14 * 1);
    t11 = (t11 + 1);
    t21 = (t19 + 12U);
    *((unsigned int *)t21) = t11;
    goto LAB1;

LAB15:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB17:    goto LAB15;

LAB18:    goto LAB15;

}

static void work_a_0036528421_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(93, ng4);

LAB3:    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = work_a_0036528421_3212880686_sub_1100544276_3057020925(t0, t1, t3, t4);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (32U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 5256);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 5160);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t6, 0);
    goto LAB6;

}

static void work_a_0036528421_3212880686_p_1(char *t0)
{
    char t5[16];
    char t24[16];
    char t26[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    int t25;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(97, ng4);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9336U);
    t3 = (t0 + 9693);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9336U);
    t3 = (t0 + 9695);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB11;

LAB12:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9336U);
    t3 = (t0 + 9697);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB22;

LAB23:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9336U);
    t3 = (t0 + 9795);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB33;

LAB34:
LAB3:    t1 = (t0 + 5176);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(98, ng4);
    t7 = (t0 + 1032U);
    t11 = *((char **)t7);
    t12 = *((unsigned char *)t11);
    t7 = (t0 + 1512U);
    t13 = *((char **)t7);
    t14 = *((unsigned char *)t13);
    t15 = (t12 == t14);
    if (t15 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(102, ng4);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t12 = (t10 == (unsigned char)3);
    if (t12 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(106, ng4);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 5320);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(107, ng4);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t1 = (t0 + 5384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t10;
    xsi_driver_first_trans_fast_port(t1);

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(99, ng4);
    t7 = (t0 + 2632U);
    t16 = *((char **)t7);
    t7 = (t0 + 5320);
    t17 = (t7 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 32U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(100, ng4);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t1 = (t0 + 5384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t10;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(103, ng4);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 5320);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t3, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(104, ng4);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t1 = (t0 + 5384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t10;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB9;

LAB11:    xsi_set_current_line(112, ng4);
    t7 = (t0 + 1032U);
    t11 = *((char **)t7);
    t12 = *((unsigned char *)t11);
    t7 = (t0 + 1512U);
    t13 = *((char **)t7);
    t14 = *((unsigned char *)t13);
    t15 = (t12 == t14);
    if (t15 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(121, ng4);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t12 = (t10 == (unsigned char)3);
    if (t12 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(125, ng4);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5320);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(126, ng4);
    t1 = (t0 + 5384);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB20:
LAB14:    goto LAB3;

LAB13:    xsi_set_current_line(113, ng4);
    t7 = (t0 + 1032U);
    t16 = *((char **)t7);
    t21 = *((unsigned char *)t16);
    t22 = (t21 == (unsigned char)3);
    if (t22 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(117, ng4);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 5320);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(118, ng4);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t1 = (t0 + 5384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t10;
    xsi_driver_first_trans_fast_port(t1);

LAB17:    goto LAB14;

LAB16:    xsi_set_current_line(114, ng4);
    t7 = (t0 + 2792U);
    t17 = *((char **)t7);
    t7 = (t0 + 5320);
    t18 = (t7 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t23 = *((char **)t20);
    memcpy(t23, t17, 32U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(115, ng4);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t1 = (t0 + 5384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t10;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(122, ng4);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t1 = (t0 + 5320);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t3, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(123, ng4);
    t1 = (t0 + 5384);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB20;

LAB22:    xsi_set_current_line(131, ng4);
    t7 = (t0 + 1192U);
    t11 = *((char **)t7);
    t7 = (t0 + 9320U);
    t13 = (t0 + 9699);
    t17 = (t24 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = 31;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t25 = (31 - 0);
    t9 = (t25 * 1);
    t9 = (t9 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t9;
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t11, t7, t13, t24);
    if (t14 == 1)
        goto LAB27;

LAB28:    t18 = (t0 + 1672U);
    t19 = *((char **)t18);
    t18 = (t0 + 9352U);
    t20 = (t0 + 9731);
    t27 = (t26 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 0;
    t28 = (t27 + 4U);
    *((int *)t28) = 31;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t29 = (31 - 0);
    t9 = (t29 * 1);
    t9 = (t9 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t9;
    t15 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t19, t18, t20, t26);
    t12 = t15;

LAB29:    if (t12 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(135, ng4);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t12 = *((unsigned char *)t3);
    t14 = (t10 == t12);
    if (t14 != 0)
        goto LAB30;

LAB32:    xsi_set_current_line(140, ng4);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 5320);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(141, ng4);
    t1 = (t0 + 5384);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB31:
LAB25:    goto LAB3;

LAB24:    xsi_set_current_line(132, ng4);
    t28 = (t0 + 5384);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t28);
    xsi_set_current_line(133, ng4);
    t1 = (t0 + 9763);
    t3 = (t0 + 5320);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB25;

LAB27:    t12 = (unsigned char)1;
    goto LAB29;

LAB30:    xsi_set_current_line(136, ng4);
    t1 = (t0 + 3112U);
    t4 = *((char **)t1);
    t1 = (t0 + 5320);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t4, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(137, ng4);
    t1 = (t0 + 5384);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB31;

LAB33:    xsi_set_current_line(146, ng4);
    t7 = (t0 + 1032U);
    t11 = *((char **)t7);
    t12 = *((unsigned char *)t11);
    t7 = (t0 + 1512U);
    t13 = *((char **)t7);
    t14 = *((unsigned char *)t13);
    t15 = (t12 == t14);
    if (t15 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(151, ng4);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 5320);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(152, ng4);
    t1 = (t0 + 5384);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB36:    goto LAB3;

LAB35:    xsi_set_current_line(147, ng4);
    t7 = (t0 + 3272U);
    t16 = *((char **)t7);
    t7 = (t0 + 5320);
    t17 = (t7 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 32U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(148, ng4);
    t1 = (t0 + 5384);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB36;

}


extern void work_a_0036528421_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0036528421_3212880686_p_0,(void *)work_a_0036528421_3212880686_p_1};
	static char *se[] = {(void *)work_a_0036528421_3212880686_sub_1100544276_3057020925};
	xsi_register_didat("work_a_0036528421_3212880686", "isim/clc_tb_isim_beh.exe.sim/work/a_0036528421_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
