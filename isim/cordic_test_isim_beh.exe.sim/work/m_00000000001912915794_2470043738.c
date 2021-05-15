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
static const char *ng0 = "%d %d %d";
static const char *ng1 = "F:/Miscellaneous/Avishkar/FPGA/CORDIC_Final2/CORDIC3_Gate_FixedPoint/CORDIC3/cordic_test.v";
static unsigned int ng2[] = {3932160U, 0U};
static int ng3[] = {10000, 0, 0, 0};
static unsigned int ng4[] = {0U, 0U};

void Monitor_56_2(char *);
void Monitor_56_2(char *);


static void Monitor_56_2_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 1184U);
    t2 = *((char **)t1);
    t1 = (t0 + 1344U);
    t3 = *((char **)t1);
    t1 = (t0 + 1824U);
    t4 = *((char **)t1);
    xsi_vlogfile_write(1, 0, 3, ng0, 4, t0, (char)118, t2, 17, (char)118, t3, 17, (char)118, t4, 17);

LAB1:    return;
}

static void Initial_40_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    double t3;
    double t4;

LAB0:    xsi_set_current_line(41, ng1);

LAB2:    xsi_set_current_line(45, ng1);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2544);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(49, ng1);
    t1 = ((char*)((ng3)));
    t3 = xsi_vlog_convert_to_real(t1, 32, 1);
    t4 = (t3 / 1.6470000000000000);
    xsi_vlog_convert_real_to_values(t4, t5, 16);
    t2 = (t0 + 2224);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 16);
    xsi_set_current_line(50, ng1);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2384);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Initial_55_1(char *t0)
{

LAB0:    xsi_set_current_line(56, ng1);
    Monitor_56_2(t0);

LAB1:    return;
}

void Monitor_56_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3768);
    t2 = (t0 + 4280);
    xsi_vlogfile_monitor((void *)Monitor_56_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000001912915794_2470043738_init()
{
	static char *pe[] = {(void *)Initial_40_0,(void *)Initial_55_1,(void *)Monitor_56_2};
	xsi_register_didat("work_m_00000000001912915794_2470043738", "isim/cordic_test_isim_beh.exe.sim/work/m_00000000001912915794_2470043738.didat");
	xsi_register_executes(pe);
}
