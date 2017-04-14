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
static const char *ng0 = "D:/Documents/git/CECS-341/Labs/Lab7_MIPS_Execute_Stage/EX_Stage_TestBench.v";
static int ng1[] = {0, 0};
static const char *ng2 = "ALU is performing AND";
static int ng3[] = {1, 0};
static const char *ng4 = "ALU is performing OR";
static int ng5[] = {2, 0};
static const char *ng6 = "ALU is performing ADD";
static int ng7[] = {6, 0};
static const char *ng8 = "ALU is performing SUB";
static int ng9[] = {7, 0};
static const char *ng10 = "ALU is performing SLT";
static const char *ng11 = "ALU Operation is invalid";
static const char *ng12 = "aluoute = %h";
static const char *ng13 = "zero flag is malfunctioning";
static const char *ng14 = "Control signals did not pass correctly";
static unsigned int ng15[] = {0U, 0U};
static const char *ng16 = "Branch Adder is malfunctioning";
static int ng17[] = {3, 0};
static int ng18[] = {5, 0};
static unsigned int ng19[] = {4626U, 0U};
static unsigned int ng20[] = {13364U, 0U};
static unsigned int ng21[] = {4294967295U, 0U};
static unsigned int ng22[] = {1145324612U, 0U};
static int ng23[] = {8, 0};



static int sp_testcase(char *t1, char *t2)
{
    char t5[8];
    char t19[8];
    char t44[8];
    char t59[8];
    char t67[8];
    char t94[8];
    char t111[8];
    char t127[8];
    char t135[8];
    char t163[8];
    char t180[8];
    char t196[8];
    char t204[8];
    char t232[8];
    char t249[8];
    char t265[8];
    char t273[8];
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
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t181;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    char *t209;
    char *t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    char *t218;
    char *t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    char *t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    char *t239;
    char *t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    char *t245;
    char *t246;
    char *t247;
    char *t248;
    char *t250;
    char *t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    char *t264;
    char *t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    char *t272;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    char *t277;
    char *t278;
    char *t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    char *t287;
    char *t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    char *t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    char *t307;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(90, ng0);

LAB5:    xsi_set_current_line(91, ng0);
    *((int *)t5) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t6 = (t5 + 4);
    *((int *)t6) = 0;
    t7 = (t1 + 4120);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    t8 = (t1 + 3960);
    xsi_vlogvar_assign_value(t8, t5, 1, 0, 1);
    t9 = (t1 + 3640);
    xsi_vlogvar_assign_value(t9, t5, 2, 0, 1);
    t10 = (t1 + 3480);
    xsi_vlogvar_assign_value(t10, t5, 3, 0, 1);
    t11 = (t1 + 3320);
    xsi_vlogvar_assign_value(t11, t5, 4, 0, 1);
    t12 = (t1 + 3160);
    xsi_vlogvar_assign_value(t12, t5, 5, 0, 1);
    xsi_set_current_line(92, ng0);
    t4 = (t1 + 5240);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3800);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    xsi_set_current_line(93, ng0);
    t4 = (t1 + 3800);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);

LAB6:    t8 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t7, 3, t8, 32);
    if (t13 == 1)
        goto LAB7;

LAB8:    t4 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t7, 3, t4, 32);
    if (t13 == 1)
        goto LAB9;

LAB10:    t4 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t7, 3, t4, 32);
    if (t13 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t7, 3, t4, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t4 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t7, 3, t4, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(99, ng0);
    t4 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t4);

LAB19:    xsi_set_current_line(101, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB20;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB7:    xsi_set_current_line(94, ng0);
    t9 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t9);
    goto LAB19;

LAB9:    xsi_set_current_line(95, ng0);
    t6 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t6);
    goto LAB19;

LAB11:    xsi_set_current_line(96, ng0);
    t6 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t6);
    goto LAB19;

LAB13:    xsi_set_current_line(97, ng0);
    t6 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t6);
    goto LAB19;

LAB15:    xsi_set_current_line(98, ng0);
    t6 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t6);
    goto LAB19;

LAB20:    xsi_set_current_line(101, ng0);
    t8 = (t1 + 2280U);
    t9 = *((char **)t8);
    t8 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t8, (char)118, t9, 32);
    xsi_set_current_line(102, ng0);
    t4 = (t1 + 2120U);
    t6 = *((char **)t4);
    t4 = (t1 + 2280U);
    t8 = *((char **)t4);
    memset(t5, 0, 8);
    t4 = (t8 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 4294967295U);
    if (t18 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t4) == 0)
        goto LAB21;

LAB23:    t9 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t9) = 1;

LAB24:    memset(t19, 0, 8);
    t10 = (t6 + 4);
    t11 = (t5 + 4);
    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t5);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t11);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB26;

LAB25:    if (t29 != 0)
        goto LAB27;

LAB28:    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t19);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(103, ng0);
    t4 = (t1 + 1480U);
    t6 = *((char **)t4);
    t4 = (t1 + 3160);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    memset(t5, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t11);
    t20 = (t17 ^ t18);
    t21 = (t16 | t20);
    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t11);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB33;

LAB32:    if (t24 != 0)
        goto LAB34;

LAB35:    memset(t19, 0, 8);
    t32 = (t5 + 4);
    t27 = *((unsigned int *)t32);
    t28 = (~(t27));
    t29 = *((unsigned int *)t5);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t32) != 0)
        goto LAB38;

LAB39:    t39 = (t19 + 4);
    t33 = *((unsigned int *)t19);
    t34 = (!(t33));
    t35 = *((unsigned int *)t39);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB40;

LAB41:    memcpy(t67, t19, 8);

LAB42:    memset(t94, 0, 8);
    t95 = (t67 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t67);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t95) != 0)
        goto LAB56;

LAB57:    t102 = (t94 + 4);
    t103 = *((unsigned int *)t94);
    t104 = (!(t103));
    t105 = *((unsigned int *)t102);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB58;

LAB59:    memcpy(t135, t94, 8);

LAB60:    memset(t163, 0, 8);
    t164 = (t135 + 4);
    t165 = *((unsigned int *)t164);
    t166 = (~(t165));
    t167 = *((unsigned int *)t135);
    t168 = (t167 & t166);
    t169 = (t168 & 1U);
    if (t169 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t164) != 0)
        goto LAB74;

LAB75:    t171 = (t163 + 4);
    t172 = *((unsigned int *)t163);
    t173 = (!(t172));
    t174 = *((unsigned int *)t171);
    t175 = (t173 || t174);
    if (t175 > 0)
        goto LAB76;

LAB77:    memcpy(t204, t163, 8);

LAB78:    memset(t232, 0, 8);
    t233 = (t204 + 4);
    t234 = *((unsigned int *)t233);
    t235 = (~(t234));
    t236 = *((unsigned int *)t204);
    t237 = (t236 & t235);
    t238 = (t237 & 1U);
    if (t238 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t233) != 0)
        goto LAB92;

LAB93:    t240 = (t232 + 4);
    t241 = *((unsigned int *)t232);
    t242 = (!(t241));
    t243 = *((unsigned int *)t240);
    t244 = (t242 || t243);
    if (t244 > 0)
        goto LAB94;

LAB95:    memcpy(t273, t232, 8);

LAB96:    t301 = (t273 + 4);
    t302 = *((unsigned int *)t301);
    t303 = (~(t302));
    t304 = *((unsigned int *)t273);
    t305 = (t304 & t303);
    t306 = (t305 != 0);
    if (t306 > 0)
        goto LAB108;

LAB109:
LAB110:    xsi_set_current_line(106, ng0);
    t4 = (t1 + 2760U);
    t6 = *((char **)t4);
    t4 = ((char*)((ng15)));
    t8 = (t1 + 4920);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t19, 0, 8);
    t11 = (t19 + 4);
    t12 = (t10 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 0);
    *((unsigned int *)t19) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t18 & 1073741823U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1073741823U);
    xsi_vlogtype_concat(t5, 32, 32, 2U, t19, 30, t4, 2);
    t32 = (t1 + 5080);
    t38 = (t32 + 56U);
    t39 = *((char **)t38);
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 32, t5, 32, t39, 32);
    memset(t59, 0, 8);
    t40 = (t6 + 4);
    t41 = (t44 + 4);
    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t44);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t40);
    t25 = *((unsigned int *)t41);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t40);
    t29 = *((unsigned int *)t41);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t33 = (t27 & t31);
    if (t33 != 0)
        goto LAB113;

LAB112:    if (t30 != 0)
        goto LAB114;

LAB115:    t43 = (t59 + 4);
    t34 = *((unsigned int *)t43);
    t35 = (~(t34));
    t36 = *((unsigned int *)t59);
    t37 = (t36 & t35);
    t47 = (t37 != 0);
    if (t47 > 0)
        goto LAB116;

LAB117:
LAB118:    xsi_set_current_line(111, ng0);
    t4 = (t1 + 5240);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng17)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t8, 32, t9, 32);
    t10 = (t5 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB120;

LAB121:
LAB122:    goto LAB4;

LAB21:    *((unsigned int *)t5) = 1;
    goto LAB24;

LAB26:    *((unsigned int *)t19) = 1;
    goto LAB28;

LAB27:    t12 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(102, ng0);
    t38 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t38);
    goto LAB31;

LAB33:    *((unsigned int *)t5) = 1;
    goto LAB35;

LAB34:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t19) = 1;
    goto LAB39;

LAB38:    t38 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB39;

LAB40:    t40 = (t1 + 1640U);
    t41 = *((char **)t40);
    t40 = (t1 + 3320);
    t42 = (t40 + 56U);
    t43 = *((char **)t42);
    memset(t44, 0, 8);
    t45 = (t41 + 4);
    t46 = (t43 + 4);
    t37 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t43);
    t48 = (t37 ^ t47);
    t49 = *((unsigned int *)t45);
    t50 = *((unsigned int *)t46);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t45);
    t54 = *((unsigned int *)t46);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB44;

LAB43:    if (t55 != 0)
        goto LAB45;

LAB46:    memset(t59, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t60) != 0)
        goto LAB49;

LAB50:    t68 = *((unsigned int *)t19);
    t69 = *((unsigned int *)t59);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = (t19 + 4);
    t72 = (t59 + 4);
    t73 = (t67 + 4);
    t74 = *((unsigned int *)t71);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB42;

LAB44:    *((unsigned int *)t44) = 1;
    goto LAB46;

LAB45:    t58 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t59) = 1;
    goto LAB50;

LAB49:    t66 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB50;

LAB51:    t79 = *((unsigned int *)t67);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t67) = (t79 | t80);
    t81 = (t19 + 4);
    t82 = (t59 + 4);
    t83 = *((unsigned int *)t81);
    t84 = (~(t83));
    t85 = *((unsigned int *)t19);
    t13 = (t85 & t84);
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t59);
    t89 = (t88 & t87);
    t90 = (~(t13));
    t91 = (~(t89));
    t92 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t92 & t90);
    t93 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t93 & t91);
    goto LAB53;

LAB54:    *((unsigned int *)t94) = 1;
    goto LAB57;

LAB56:    t101 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB57;

LAB58:    t107 = (t1 + 1800U);
    t108 = *((char **)t107);
    t107 = (t1 + 3480);
    t109 = (t107 + 56U);
    t110 = *((char **)t109);
    memset(t111, 0, 8);
    t112 = (t108 + 4);
    t113 = (t110 + 4);
    t114 = *((unsigned int *)t108);
    t115 = *((unsigned int *)t110);
    t116 = (t114 ^ t115);
    t117 = *((unsigned int *)t112);
    t118 = *((unsigned int *)t113);
    t119 = (t117 ^ t118);
    t120 = (t116 | t119);
    t121 = *((unsigned int *)t112);
    t122 = *((unsigned int *)t113);
    t123 = (t121 | t122);
    t124 = (~(t123));
    t125 = (t120 & t124);
    if (t125 != 0)
        goto LAB62;

LAB61:    if (t123 != 0)
        goto LAB63;

LAB64:    memset(t127, 0, 8);
    t128 = (t111 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t111);
    t132 = (t131 & t130);
    t133 = (t132 & 1U);
    if (t133 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t128) != 0)
        goto LAB67;

LAB68:    t136 = *((unsigned int *)t94);
    t137 = *((unsigned int *)t127);
    t138 = (t136 | t137);
    *((unsigned int *)t135) = t138;
    t139 = (t94 + 4);
    t140 = (t127 + 4);
    t141 = (t135 + 4);
    t142 = *((unsigned int *)t139);
    t143 = *((unsigned int *)t140);
    t144 = (t142 | t143);
    *((unsigned int *)t141) = t144;
    t145 = *((unsigned int *)t141);
    t146 = (t145 != 0);
    if (t146 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB60;

LAB62:    *((unsigned int *)t111) = 1;
    goto LAB64;

LAB63:    t126 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t127) = 1;
    goto LAB68;

LAB67:    t134 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t134) = 1;
    goto LAB68;

LAB69:    t147 = *((unsigned int *)t135);
    t148 = *((unsigned int *)t141);
    *((unsigned int *)t135) = (t147 | t148);
    t149 = (t94 + 4);
    t150 = (t127 + 4);
    t151 = *((unsigned int *)t149);
    t152 = (~(t151));
    t153 = *((unsigned int *)t94);
    t154 = (t153 & t152);
    t155 = *((unsigned int *)t150);
    t156 = (~(t155));
    t157 = *((unsigned int *)t127);
    t158 = (t157 & t156);
    t159 = (~(t154));
    t160 = (~(t158));
    t161 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t161 & t159);
    t162 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t162 & t160);
    goto LAB71;

LAB72:    *((unsigned int *)t163) = 1;
    goto LAB75;

LAB74:    t170 = (t163 + 4);
    *((unsigned int *)t163) = 1;
    *((unsigned int *)t170) = 1;
    goto LAB75;

LAB76:    t176 = (t1 + 1960U);
    t177 = *((char **)t176);
    t176 = (t1 + 3640);
    t178 = (t176 + 56U);
    t179 = *((char **)t178);
    memset(t180, 0, 8);
    t181 = (t177 + 4);
    t182 = (t179 + 4);
    t183 = *((unsigned int *)t177);
    t184 = *((unsigned int *)t179);
    t185 = (t183 ^ t184);
    t186 = *((unsigned int *)t181);
    t187 = *((unsigned int *)t182);
    t188 = (t186 ^ t187);
    t189 = (t185 | t188);
    t190 = *((unsigned int *)t181);
    t191 = *((unsigned int *)t182);
    t192 = (t190 | t191);
    t193 = (~(t192));
    t194 = (t189 & t193);
    if (t194 != 0)
        goto LAB80;

LAB79:    if (t192 != 0)
        goto LAB81;

LAB82:    memset(t196, 0, 8);
    t197 = (t180 + 4);
    t198 = *((unsigned int *)t197);
    t199 = (~(t198));
    t200 = *((unsigned int *)t180);
    t201 = (t200 & t199);
    t202 = (t201 & 1U);
    if (t202 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t197) != 0)
        goto LAB85;

LAB86:    t205 = *((unsigned int *)t163);
    t206 = *((unsigned int *)t196);
    t207 = (t205 | t206);
    *((unsigned int *)t204) = t207;
    t208 = (t163 + 4);
    t209 = (t196 + 4);
    t210 = (t204 + 4);
    t211 = *((unsigned int *)t208);
    t212 = *((unsigned int *)t209);
    t213 = (t211 | t212);
    *((unsigned int *)t210) = t213;
    t214 = *((unsigned int *)t210);
    t215 = (t214 != 0);
    if (t215 == 1)
        goto LAB87;

LAB88:
LAB89:    goto LAB78;

LAB80:    *((unsigned int *)t180) = 1;
    goto LAB82;

LAB81:    t195 = (t180 + 4);
    *((unsigned int *)t180) = 1;
    *((unsigned int *)t195) = 1;
    goto LAB82;

LAB83:    *((unsigned int *)t196) = 1;
    goto LAB86;

LAB85:    t203 = (t196 + 4);
    *((unsigned int *)t196) = 1;
    *((unsigned int *)t203) = 1;
    goto LAB86;

LAB87:    t216 = *((unsigned int *)t204);
    t217 = *((unsigned int *)t210);
    *((unsigned int *)t204) = (t216 | t217);
    t218 = (t163 + 4);
    t219 = (t196 + 4);
    t220 = *((unsigned int *)t218);
    t221 = (~(t220));
    t222 = *((unsigned int *)t163);
    t223 = (t222 & t221);
    t224 = *((unsigned int *)t219);
    t225 = (~(t224));
    t226 = *((unsigned int *)t196);
    t227 = (t226 & t225);
    t228 = (~(t223));
    t229 = (~(t227));
    t230 = *((unsigned int *)t210);
    *((unsigned int *)t210) = (t230 & t228);
    t231 = *((unsigned int *)t210);
    *((unsigned int *)t210) = (t231 & t229);
    goto LAB89;

LAB90:    *((unsigned int *)t232) = 1;
    goto LAB93;

LAB92:    t239 = (t232 + 4);
    *((unsigned int *)t232) = 1;
    *((unsigned int *)t239) = 1;
    goto LAB93;

LAB94:    t245 = (t1 + 2440U);
    t246 = *((char **)t245);
    t245 = (t1 + 4440);
    t247 = (t245 + 56U);
    t248 = *((char **)t247);
    memset(t249, 0, 8);
    t250 = (t246 + 4);
    t251 = (t248 + 4);
    t252 = *((unsigned int *)t246);
    t253 = *((unsigned int *)t248);
    t254 = (t252 ^ t253);
    t255 = *((unsigned int *)t250);
    t256 = *((unsigned int *)t251);
    t257 = (t255 ^ t256);
    t258 = (t254 | t257);
    t259 = *((unsigned int *)t250);
    t260 = *((unsigned int *)t251);
    t261 = (t259 | t260);
    t262 = (~(t261));
    t263 = (t258 & t262);
    if (t263 != 0)
        goto LAB98;

LAB97:    if (t261 != 0)
        goto LAB99;

LAB100:    memset(t265, 0, 8);
    t266 = (t249 + 4);
    t267 = *((unsigned int *)t266);
    t268 = (~(t267));
    t269 = *((unsigned int *)t249);
    t270 = (t269 & t268);
    t271 = (t270 & 1U);
    if (t271 != 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t266) != 0)
        goto LAB103;

LAB104:    t274 = *((unsigned int *)t232);
    t275 = *((unsigned int *)t265);
    t276 = (t274 | t275);
    *((unsigned int *)t273) = t276;
    t277 = (t232 + 4);
    t278 = (t265 + 4);
    t279 = (t273 + 4);
    t280 = *((unsigned int *)t277);
    t281 = *((unsigned int *)t278);
    t282 = (t280 | t281);
    *((unsigned int *)t279) = t282;
    t283 = *((unsigned int *)t279);
    t284 = (t283 != 0);
    if (t284 == 1)
        goto LAB105;

LAB106:
LAB107:    goto LAB96;

LAB98:    *((unsigned int *)t249) = 1;
    goto LAB100;

LAB99:    t264 = (t249 + 4);
    *((unsigned int *)t249) = 1;
    *((unsigned int *)t264) = 1;
    goto LAB100;

LAB101:    *((unsigned int *)t265) = 1;
    goto LAB104;

LAB103:    t272 = (t265 + 4);
    *((unsigned int *)t265) = 1;
    *((unsigned int *)t272) = 1;
    goto LAB104;

LAB105:    t285 = *((unsigned int *)t273);
    t286 = *((unsigned int *)t279);
    *((unsigned int *)t273) = (t285 | t286);
    t287 = (t232 + 4);
    t288 = (t265 + 4);
    t289 = *((unsigned int *)t287);
    t290 = (~(t289));
    t291 = *((unsigned int *)t232);
    t292 = (t291 & t290);
    t293 = *((unsigned int *)t288);
    t294 = (~(t293));
    t295 = *((unsigned int *)t265);
    t296 = (t295 & t294);
    t297 = (~(t292));
    t298 = (~(t296));
    t299 = *((unsigned int *)t279);
    *((unsigned int *)t279) = (t299 & t297);
    t300 = *((unsigned int *)t279);
    *((unsigned int *)t279) = (t300 & t298);
    goto LAB107;

LAB108:    xsi_set_current_line(105, ng0);

LAB111:    xsi_set_current_line(105, ng0);
    t307 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t307);
    xsi_set_current_line(105, ng0);
    xsi_vlog_finish(1);
    goto LAB110;

LAB113:    *((unsigned int *)t59) = 1;
    goto LAB115;

LAB114:    t42 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB115;

LAB116:    xsi_set_current_line(107, ng0);

LAB119:    xsi_set_current_line(108, ng0);
    t45 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t45);
    xsi_set_current_line(109, ng0);
    xsi_vlog_finish(1);
    goto LAB118;

LAB120:    xsi_set_current_line(111, ng0);
    t11 = ((char*)((ng18)));
    t12 = (t1 + 5240);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB122;

}

static void Initial_81_0(char *t0)
{
    char t6[8];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 6160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);

LAB4:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 4280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 4440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 5080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 5240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng23)));
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

LAB7:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 5968);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB14;

LAB1:    return;
LAB6:    xsi_set_current_line(85, ng0);
    t13 = (t0 + 5968);
    t14 = (t0 + 848);
    t15 = xsi_create_subprogram_invocation(t13, 0, t0, t14, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t14, t15);

LAB10:    t16 = (t0 + 6064);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t24 = ((int  (*)(char *, char *))t23)(t0, t17);

LAB12:    if (t24 != 0)
        goto LAB13;

LAB8:    t17 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t17);

LAB9:    t25 = (t0 + 6064);
    t26 = *((char **)t25);
    t25 = (t0 + 848);
    t27 = (t0 + 5968);
    t28 = 0;
    xsi_delete_subprogram_invocation(t25, t26, t0, t27, t28);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 5240);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB11:;
LAB13:    t16 = (t0 + 6160U);
    *((char **)t16) = &&LAB10;
    goto LAB1;

LAB14:    xsi_set_current_line(86, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000001690968501_2384324955_init()
{
	static char *pe[] = {(void *)Initial_81_0};
	static char *se[] = {(void *)sp_testcase};
	xsi_register_didat("work_m_00000000001690968501_2384324955", "isim/EX_Stage_TestBench_isim_beh.exe.sim/work/m_00000000001690968501_2384324955.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
