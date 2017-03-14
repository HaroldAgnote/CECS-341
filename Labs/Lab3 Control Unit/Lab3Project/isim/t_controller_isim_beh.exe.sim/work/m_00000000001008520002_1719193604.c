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
static const char *ng0 = "D:/Documents/git/CECS-341/Labs/Lab3 Control Unit/Lab3Project/testbench.v";
static const char *ng1 = "%b";
static unsigned int ng2[] = {32U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {34U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {36U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {37U, 0U};
static int ng9[] = {3, 0};
static unsigned int ng10[] = {42U, 0U};
static int ng11[] = {4, 0};
static const char *ng12 = "Testing R- Type Instructions";
static int ng13[] = {5, 0};
static unsigned int ng14[] = {63U, 63U};
static unsigned int ng15[] = {35U, 0U};
static const char *ng16 = "lw";
static unsigned int ng17[] = {43U, 0U};
static const char *ng18 = "sw";
static unsigned int ng19[] = {4U, 0U};
static const char *ng20 = "beq (branch taken)";
static const char *ng21 = "beq (branch NOT taken)";
static unsigned int ng22[] = {8U, 0U};
static const char *ng23 = "addi";
static unsigned int ng24[] = {2U, 0U};
static const char *ng25 = "j";
static const char *ng26 = "End Simulation!";



static int sp_showsignals(char *t1, char *t2)
{
    char t5[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t6 = (t1 + 2600U);
    t7 = *((char **)t6);
    t6 = (t1 + 2440U);
    t8 = *((char **)t6);
    t6 = (t1 + 2280U);
    t9 = *((char **)t6);
    t6 = (t1 + 2120U);
    t10 = *((char **)t6);
    t6 = (t1 + 1960U);
    t11 = *((char **)t6);
    t6 = (t1 + 1800U);
    t12 = *((char **)t6);
    t6 = (t1 + 1640U);
    t13 = *((char **)t6);
    t6 = (t1 + 1480U);
    t14 = *((char **)t6);
    xsi_vlogtype_concat(t5, 10, 10, 8U, t14, 1, t13, 1, t12, 1, t11, 1, t10, 1, t9, 1, t8, 1, t7, 3);
    t6 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t6, (char)118, t5, 10);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static void Initial_16_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(16, ng0);

LAB2:    xsi_set_current_line(17, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3640);
    t5 = (t0 + 3640);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3640);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(18, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3640);
    t5 = (t0 + 3640);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3640);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(19, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 3640);
    t5 = (t0 + 3640);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3640);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(20, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 3640);
    t5 = (t0 + 3640);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3640);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(21, ng0);
    t1 = ((char*)((ng10)));
    t2 = (t0 + 3640);
    t5 = (t0 + 3640);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3640);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng11)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB11;

LAB12:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB8;

LAB9:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB10;

LAB11:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB12;

}

static void Initial_24_1(char *t0)
{
    char t6[8];
    char t16[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;

LAB0:    t1 = (t0 + 4808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);

LAB4:    xsi_set_current_line(25, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(27, ng0);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4616);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB6:    xsi_set_current_line(28, ng0);

LAB8:    xsi_set_current_line(29, ng0);
    t13 = (t0 + 3640);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 3640);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3640);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3480);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t16, 6, t15, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t0 + 3160);
    xsi_vlogvar_assign_value(t26, t16, 0, 0, 6);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 4616);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 4616);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB12:    t7 = (t0 + 4712);
    t13 = *((char **)t7);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t17 = (t15 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t27 = ((int  (*)(char *, char *))t20)(t0, t13);

LAB14:    if (t27 != 0)
        goto LAB15;

LAB10:    t13 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t13);

LAB11:    t21 = (t0 + 4712);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t23 = (t0 + 4616);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t23, t24);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3480);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB13:;
LAB15:    t7 = (t0 + 4808U);
    *((char **)t7) = &&LAB12;
    goto LAB1;

LAB16:    xsi_set_current_line(32, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4616);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB19:    t5 = (t0 + 4712);
    t7 = *((char **)t5);
    t13 = (t7 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t17 = *((char **)t15);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t27 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB21:    if (t27 != 0)
        goto LAB22;

LAB17:    t7 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t7);

LAB18:    t20 = (t0 + 4712);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4616);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4616);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB20:;
LAB22:    t5 = (t0 + 4808U);
    *((char **)t5) = &&LAB19;
    goto LAB1;

LAB23:    xsi_set_current_line(33, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4616);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB26:    t5 = (t0 + 4712);
    t7 = *((char **)t5);
    t13 = (t7 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t17 = *((char **)t15);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t27 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB28:    if (t27 != 0)
        goto LAB29;

LAB24:    t7 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t7);

LAB25:    t20 = (t0 + 4712);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4616);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4616);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB27:;
LAB29:    t5 = (t0 + 4808U);
    *((char **)t5) = &&LAB26;
    goto LAB1;

LAB30:    xsi_set_current_line(34, ng0);
    xsi_vlogfile_write(1, 0, 0, ng20, 1, t0);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4616);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB33:    t5 = (t0 + 4712);
    t7 = *((char **)t5);
    t13 = (t7 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t17 = *((char **)t15);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t27 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB35:    if (t27 != 0)
        goto LAB36;

LAB31:    t7 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t7);

LAB32:    t20 = (t0 + 4712);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4616);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4616);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB34:;
LAB36:    t5 = (t0 + 4808U);
    *((char **)t5) = &&LAB33;
    goto LAB1;

LAB37:    xsi_set_current_line(35, ng0);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4616);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB40:    t5 = (t0 + 4712);
    t7 = *((char **)t5);
    t13 = (t7 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t17 = *((char **)t15);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t27 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB42:    if (t27 != 0)
        goto LAB43;

LAB38:    t7 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t7);

LAB39:    t20 = (t0 + 4712);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4616);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4616);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB41:;
LAB43:    t5 = (t0 + 4808U);
    *((char **)t5) = &&LAB40;
    goto LAB1;

LAB44:    xsi_set_current_line(36, ng0);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t0);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4616);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB47:    t5 = (t0 + 4712);
    t7 = *((char **)t5);
    t13 = (t7 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t17 = *((char **)t15);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t27 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB49:    if (t27 != 0)
        goto LAB50;

LAB45:    t7 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t7);

LAB46:    t20 = (t0 + 4712);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4616);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4616);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB48:;
LAB50:    t5 = (t0 + 4808U);
    *((char **)t5) = &&LAB47;
    goto LAB1;

LAB51:    xsi_set_current_line(37, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4616);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB54:    t5 = (t0 + 4712);
    t7 = *((char **)t5);
    t13 = (t7 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t17 = *((char **)t15);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t27 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB56:    if (t27 != 0)
        goto LAB57;

LAB52:    t7 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t7);

LAB53:    t20 = (t0 + 4712);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4616);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(39, ng0);
    xsi_vlogfile_write(1, 0, 0, ng26, 1, t0);
    xsi_set_current_line(40, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB55:;
LAB57:    t5 = (t0 + 4808U);
    *((char **)t5) = &&LAB54;
    goto LAB1;

}


extern void work_m_00000000001008520002_1719193604_init()
{
	static char *pe[] = {(void *)Initial_16_0,(void *)Initial_24_1};
	static char *se[] = {(void *)sp_showsignals};
	xsi_register_didat("work_m_00000000001008520002_1719193604", "isim/t_controller_isim_beh.exe.sim/work/m_00000000001008520002_1719193604.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
