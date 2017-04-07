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
static const char *ng0 = "D:/Documents/git/CECS-341/Labs/Lab6_MIPS_IF/IF_Stage_TestBench.v";
static const char *ng1 = "Test Case %d";
static const char *ng2 = "pcsrc = %b\tpcbranch = %h";
static const char *ng3 = "pc = %h\tinstr = %h";
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};
static int ng6[] = {64, 0};
static int ng7[] = {10, 0};



static int sp_testcase(char *t1, char *t2)
{
    char t8[8];
    char t10[16];
    char t28[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(38, ng0);
    *((int *)t8) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t9 = (t8 + 4);
    *((int *)t9) = 0;
    memcpy(t10, t8, 8);
    t11 = (t10 + 8);
    memset(t11, 0, 8);
    t14 = *((unsigned int *)t8);
    t15 = (t14 & 2147483648U);
    t12 = t15;
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (t17 & 2147483648U);
    t13 = t18;
    t19 = (t15 != 0);
    if (t19 == 1)
        goto LAB7;

LAB8:    t23 = (t18 != 0);
    if (t23 == 1)
        goto LAB9;

LAB10:    memcpy(t28, t10, 8);
    t29 = (t28 + 8);
    memset(t29, 0, 8);
    t32 = *((unsigned int *)t10);
    t33 = (t32 & 2147483648U);
    t30 = t33;
    t34 = (t10 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (t35 & 2147483648U);
    t31 = t36;
    t37 = (t33 != 0);
    if (t37 == 1)
        goto LAB11;

LAB12:    t41 = (t36 != 0);
    if (t41 == 1)
        goto LAB13;

LAB14:    t46 = (t1 + 2520);
    xsi_vlogvar_assign_value(t46, t28, 0, 0, 32);
    t47 = (t1 + 2360);
    xsi_vlogvar_assign_value(t47, t28, 32, 0, 1);
    t48 = (t1 + 2200);
    xsi_vlogvar_assign_value(t48, t28, 33, 0, 1);
    t49 = (t1 + 2040);
    xsi_vlogvar_assign_value(t49, t28, 34, 0, 1);
    xsi_set_current_line(39, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB15;
    goto LAB1;

LAB7:    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 | 0U);
    t21 = (t10 + 8);
    t22 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t22 | 4294967295U);
    goto LAB8;

LAB9:    t24 = (t10 + 4);
    t25 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t25 | 0U);
    t26 = (t10 + 12);
    t27 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t27 | 4294967295U);
    goto LAB10;

LAB11:    t38 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t38 | 0U);
    t39 = (t28 + 8);
    t40 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t40 | 4294967295U);
    goto LAB12;

LAB13:    t42 = (t28 + 4);
    t43 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t43 | 0U);
    t44 = (t28 + 12);
    t45 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t45 | 4294967295U);
    goto LAB14;

LAB15:    xsi_set_current_line(39, ng0);
    t7 = (t1 + 2680);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t16 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t16, (char)119, t11, 32);
    xsi_set_current_line(40, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB16;
    t0 = 1;
    goto LAB1;

LAB16:    xsi_set_current_line(40, ng0);
    t6 = (t1 + 2200);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t11 = (t1 + 2520);
    t16 = (t11 + 56U);
    t21 = *((char **)t16);
    t24 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 3, t24, (char)118, t9, 1, (char)118, t21, 32);
    xsi_set_current_line(41, ng0);
    t4 = (t1 + 5876);
    t5 = *((char **)t4);
    t6 = ((((char*)(t5))) + 40U);
    t7 = *((char **)t6);
    t6 = (t1 + 1480U);
    t9 = *((char **)t6);
    t6 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t6, (char)118, t7, 32, (char)118, t9, 32);
    goto LAB4;

}

static void Always_27_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3408);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 2040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2040);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_29_1(char *t0)
{
    char t6[8];
    char t13[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    int t32;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;

LAB0:    t1 = (t0 + 3848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);

LAB4:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3656);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2360);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(32, ng0);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB11:    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3656);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB7:    xsi_set_current_line(31, ng0);
    *((int *)t13) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t14 = (t13 + 4);
    *((int *)t14) = 0;
    t15 = (t0 + 5900);
    t16 = *((char **)t15);
    t19 = (t0 + 5924);
    t20 = *((char **)t19);
    t21 = ((((char*)(t20))) + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 5948);
    t24 = *((char **)t23);
    t25 = ((((char*)(t24))) + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 2680);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_array_indices(t17, t18, t22, t26, 2, 1, t29, 32, 1);
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t18 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2680);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB9:    t37 = *((unsigned int *)t17);
    t38 = *((unsigned int *)t18);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(((char*)(t16)), t13, 0, *((unsigned int *)t18), t40);
    goto LAB10;

LAB12:    xsi_set_current_line(32, ng0);
    t14 = (t0 + 3656);
    t15 = (t0 + 848);
    t16 = xsi_create_subprogram_invocation(t14, 0, t0, t15, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t15, t16);

LAB16:    t19 = (t0 + 3752);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t32 = ((int  (*)(char *, char *))t26)(t0, t20);

LAB18:    if (t32 != 0)
        goto LAB19;

LAB14:    t20 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t20);

LAB15:    t27 = (t0 + 3752);
    t28 = *((char **)t27);
    t27 = (t0 + 848);
    t29 = (t0 + 3656);
    t30 = 0;
    xsi_delete_subprogram_invocation(t27, t28, t0, t29, t30);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2680);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB11;

LAB17:;
LAB19:    t19 = (t0 + 3848U);
    *((char **)t19) = &&LAB16;
    goto LAB1;

LAB20:    xsi_set_current_line(33, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000002345280864_3297898938_init()
{
	static char *pe[] = {(void *)Always_27_0,(void *)Initial_29_1};
	static char *se[] = {(void *)sp_testcase};
	xsi_register_didat("work_m_00000000002345280864_3297898938", "isim/IF_Stage_TestBench_isim_beh.exe.sim/work/m_00000000002345280864_3297898938.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
