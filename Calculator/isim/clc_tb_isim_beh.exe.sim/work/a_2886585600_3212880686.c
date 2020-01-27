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
static const char *ng0 = "H:/Semester 5/EL 203 - 4.5 - Embedded Hardware Designs/Project/Calculator/subtraction.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);


static void work_a_2886585600_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(36, ng0);

LAB3:    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 9256U);
    t4 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t1, t3, t2);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t7 = (1U * t6);
    t8 = (32U != t7);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 5448);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 32U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 5336);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t7, 0);
    goto LAB6;

}

static void work_a_2886585600_3212880686_p_1(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(37, ng0);

LAB3:    t1 = (t0 + 9557);
    t3 = (t0 + 5512);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2886585600_3212880686_p_2(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(39, ng0);

LAB3:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 9288U);
    t4 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t1, t3, t2);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t7 = (1U * t6);
    t8 = (32U != t7);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 5576);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 32U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 5352);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t7, 0);
    goto LAB6;

}

static void work_a_2886585600_3212880686_p_3(char *t0)
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

LAB0:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5640);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 5704);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 5368);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t1 = (t0 + 5640);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 5704);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

}


extern void work_a_2886585600_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2886585600_3212880686_p_0,(void *)work_a_2886585600_3212880686_p_1,(void *)work_a_2886585600_3212880686_p_2,(void *)work_a_2886585600_3212880686_p_3};
	xsi_register_didat("work_a_2886585600_3212880686", "isim/clc_tb_isim_beh.exe.sim/work/a_2886585600_3212880686.didat");
	xsi_register_executes(pe);
}
