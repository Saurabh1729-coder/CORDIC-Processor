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
static const char *ng0 = "F:/Miscellaneous/Avishkar/FPGA/CORDIC_Final2/CORDIC3_Gate_FixedPoint/CORDIC3/cordic_tan.v";
static unsigned int ng1[] = {10000U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {16, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {2, 0};
static int ng7[] = {3, 0};
static int ng8[] = {4, 0};
static int ng9[] = {5, 0};
static int ng10[] = {6, 0};
static int ng11[] = {7, 0};
static int ng12[] = {8, 0};
static int ng13[] = {9, 0};
static int ng14[] = {10, 0};
static int ng15[] = {11, 0};
static int ng16[] = {12, 0};



static void NetDecl_44_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 131071U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 16U);

LAB1:    return;
}

static void Cont_47_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 5928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    t2 = (t0 + 10864);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 131071U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 255, 271);
    t16 = (t0 + 10464);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_48_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 10928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 131071U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 255, 271);
    t16 = (t0 + 10480);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_49_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10992);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 131071U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 255, 271);

LAB1:    return;
}

static void Gate_58_4(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 6672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t4, 17, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2280U);
    t17 = *((char **)t16);
    t16 = (t0 + 2240U);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2240U);
    t22 = (t21 + 48U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t18, 17, t17, t20, t23, 2, 1, t24, 32, 1);
    t26 = (t0 + 2240U);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t25, 1, t18, t28, 2, t29, 32, 1);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 11056);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_XorGate(t35, 3, t11, t25, t30);
    t36 = (t0 + 11056);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t37 = (t0 + 10496);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Gate_58_5(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 6920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 17, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2280U);
    t17 = *((char **)t16);
    t16 = (t0 + 2240U);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2240U);
    t22 = (t21 + 48U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t18, 17, t17, t20, t23, 2, 1, t24, 32, 1);
    t26 = (t0 + 2240U);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t25, 1, t18, t28, 2, t29, 32, 1);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 11120);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_XorGate(t35, 3, t11, t25, t30);
    t36 = (t0 + 11120);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t37 = (t0 + 10512);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Gate_58_6(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 17, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2280U);
    t17 = *((char **)t16);
    t16 = (t0 + 2240U);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2240U);
    t22 = (t21 + 48U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t18, 17, t17, t20, t23, 2, 1, t24, 32, 1);
    t26 = (t0 + 2240U);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t25, 1, t18, t28, 2, t29, 32, 1);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 11184);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_XorGate(t35, 3, t11, t25, t30);
    t36 = (t0 + 11184);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t37 = (t0 + 10528);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Gate_58_7(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 7416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t4, 17, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2280U);
    t17 = *((char **)t16);
    t16 = (t0 + 2240U);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2240U);
    t22 = (t21 + 48U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t18, 17, t17, t20, t23, 2, 1, t24, 32, 1);
    t26 = (t0 + 2240U);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t25, 1, t18, t28, 2, t29, 32, 1);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 11248);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_XorGate(t35, 3, t11, t25, t30);
    t36 = (t0 + 11248);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t37 = (t0 + 10544);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Gate_58_8(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 7664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t4, 17, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2280U);
    t17 = *((char **)t16);
    t16 = (t0 + 2240U);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2240U);
    t22 = (t21 + 48U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t18, 17, t17, t20, t23, 2, 1, t24, 32, 1);
    t26 = (t0 + 2240U);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t25, 1, t18, t28, 2, t29, 32, 1);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 11312);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_XorGate(t35, 3, t11, t25, t30);
    t36 = (t0 + 11312);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t37 = (t0 + 10560);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Gate_58_9(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 7912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t4, 17, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2280U);
    t17 = *((char **)t16);
    t16 = (t0 + 2240U);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2240U);
    t22 = (t21 + 48U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t18, 17, t17, t20, t23, 2, 1, t24, 32, 1);
    t26 = (t0 + 2240U);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t25, 1, t18, t28, 2, t29, 32, 1);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 11376);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_XorGate(t35, 3, t11, t25, t30);
    t36 = (t0 + 11376);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t37 = (t0 + 10576);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Gate_58_10(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 8160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t4, 17, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2280U);
    t17 = *((char **)t16);
    t16 = (t0 + 2240U);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2240U);
    t22 = (t21 + 48U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t18, 17, t17, t20, t23, 2, 1, t24, 32, 1);
    t26 = (t0 + 2240U);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t25, 1, t18, t28, 2, t29, 32, 1);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 11440);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_XorGate(t35, 3, t11, t25, t30);
    t36 = (t0 + 11440);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t37 = (t0 + 10592);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Gate_58_11(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 8408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t4, 17, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2280U);
    t17 = *((char **)t16);
    t16 = (t0 + 2240U);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2240U);
    t22 = (t21 + 48U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t18, 17, t17, t20, t23, 2, 1, t24, 32, 1);
    t26 = (t0 + 2240U);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t25, 1, t18, t28, 2, t29, 32, 1);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 11504);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_XorGate(t35, 3, t11, t25, t30);
    t36 = (t0 + 11504);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t37 = (t0 + 10608);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Gate_58_12(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 8656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t4, 17, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2280U);
    t17 = *((char **)t16);
    t16 = (t0 + 2240U);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2240U);
    t22 = (t21 + 48U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t18, 17, t17, t20, t23, 2, 1, t24, 32, 1);
    t26 = (t0 + 2240U);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t25, 1, t18, t28, 2, t29, 32, 1);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 11568);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_XorGate(t35, 3, t11, t25, t30);
    t36 = (t0 + 11568);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t37 = (t0 + 10624);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Gate_58_13(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 8904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng13)));
    xsi_vlog_generic_get_array_select_value(t4, 17, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2280U);
    t17 = *((char **)t16);
    t16 = (t0 + 2240U);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2240U);
    t22 = (t21 + 48U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng13)));
    xsi_vlog_generic_get_array_select_value(t18, 17, t17, t20, t23, 2, 1, t24, 32, 1);
    t26 = (t0 + 2240U);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t25, 1, t18, t28, 2, t29, 32, 1);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 11632);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_XorGate(t35, 3, t11, t25, t30);
    t36 = (t0 + 11632);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t37 = (t0 + 10640);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Gate_58_14(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 9152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t4, 17, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2280U);
    t17 = *((char **)t16);
    t16 = (t0 + 2240U);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2240U);
    t22 = (t21 + 48U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t18, 17, t17, t20, t23, 2, 1, t24, 32, 1);
    t26 = (t0 + 2240U);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t25, 1, t18, t28, 2, t29, 32, 1);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 11696);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_XorGate(t35, 3, t11, t25, t30);
    t36 = (t0 + 11696);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t37 = (t0 + 10656);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Gate_58_15(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 9400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t4, 17, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2280U);
    t17 = *((char **)t16);
    t16 = (t0 + 2240U);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2240U);
    t22 = (t21 + 48U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t18, 17, t17, t20, t23, 2, 1, t24, 32, 1);
    t26 = (t0 + 2240U);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t25, 1, t18, t28, 2, t29, 32, 1);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 11760);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_XorGate(t35, 3, t11, t25, t30);
    t36 = (t0 + 11760);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t37 = (t0 + 10672);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Cont_69_16(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
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
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 9648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t4, 17, t3, t6, t9, 1, 1, t10, 32, 1);
    t11 = (t0 + 11824);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 131071U;
    t17 = t16;
    t18 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 16);
    t24 = (t0 + 10688);
    *((int *)t24) = 1;

LAB1:    return;
}

static void Cont_70_17(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
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
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 9896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t0 + 2240U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2240U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t4, 17, t3, t6, t9, 1, 1, t10, 32, 1);
    t11 = (t0 + 11888);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 131071U;
    t17 = t16;
    t18 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 16);
    t24 = (t0 + 10704);
    *((int *)t24) = 1;

LAB1:    return;
}

static void Cont_71_18(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
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
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 10144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2440U);
    t3 = *((char **)t2);
    t2 = (t0 + 2400U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2400U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t4, 17, t3, t6, t9, 1, 1, t10, 32, 1);
    t11 = (t0 + 11952);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 131071U;
    t17 = t16;
    t18 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 16);
    t24 = (t0 + 10720);
    *((int *)t24) = 1;

LAB1:    return;
}


extern void work_m_00000000003222955671_3402619342_init()
{
	static char *pe[] = {(void *)NetDecl_44_0,(void *)Cont_47_1,(void *)Cont_48_2,(void *)Cont_49_3,(void *)Gate_58_4,(void *)Gate_58_5,(void *)Gate_58_6,(void *)Gate_58_7,(void *)Gate_58_8,(void *)Gate_58_9,(void *)Gate_58_10,(void *)Gate_58_11,(void *)Gate_58_12,(void *)Gate_58_13,(void *)Gate_58_14,(void *)Gate_58_15,(void *)Cont_69_16,(void *)Cont_70_17,(void *)Cont_71_18};
	xsi_register_didat("work_m_00000000003222955671_3402619342", "isim/CORDIC_isim_beh.exe.sim/work/m_00000000003222955671_3402619342.didat");
	xsi_register_executes(pe);
}
