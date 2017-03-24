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
static const char *ng0 = "D:/Documents/git/CECS-341/Labs/Lab5_MemStage/MEM_Stage_TestBench.v";
static const char *ng1 = "Test Failed: Control Signals Faulty";
static const char *ng2 = "Control Signals OK";
static int ng3[] = {0, 0};
static int ng4[] = {4, 0};
static const char *ng5 = "dmem[%h] %h";
static int ng6[] = {1, 0};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {16843009U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {303174162U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {589505315U, 0U};



static int sp_checksignals(char *t1, char *t2)
{
    char t14[8];
    char t30[8];
    char t47[8];
    char t63[8];
    char t71[8];
    char t99[8];
    char t119[8];
    char t151[8];
    char t167[8];
    char t175[8];
    char t203[8];
    char t220[8];
    char t236[8];
    char t244[8];
    char t272[8];
    char t289[8];
    char t305[8];
    char t313[8];
    char t341[8];
    char t358[8];
    char t374[8];
    char t382[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    int t143;
    int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    char *t180;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;
    char *t217;
    char *t218;
    char *t219;
    char *t221;
    char *t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    char *t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    char *t243;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    char *t248;
    char *t249;
    char *t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    char *t258;
    char *t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    char *t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    char *t279;
    char *t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    char *t285;
    char *t286;
    char *t287;
    char *t288;
    char *t290;
    char *t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    char *t304;
    char *t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    char *t312;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    char *t317;
    char *t318;
    char *t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    unsigned int t324;
    unsigned int t325;
    unsigned int t326;
    char *t327;
    char *t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    int t336;
    unsigned int t337;
    unsigned int t338;
    unsigned int t339;
    unsigned int t340;
    char *t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    char *t348;
    char *t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    char *t354;
    char *t355;
    char *t356;
    char *t357;
    char *t359;
    char *t360;
    unsigned int t361;
    unsigned int t362;
    unsigned int t363;
    unsigned int t364;
    unsigned int t365;
    unsigned int t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    unsigned int t371;
    unsigned int t372;
    char *t373;
    char *t375;
    unsigned int t376;
    unsigned int t377;
    unsigned int t378;
    unsigned int t379;
    unsigned int t380;
    char *t381;
    unsigned int t383;
    unsigned int t384;
    unsigned int t385;
    char *t386;
    char *t387;
    char *t388;
    unsigned int t389;
    unsigned int t390;
    unsigned int t391;
    unsigned int t392;
    unsigned int t393;
    unsigned int t394;
    unsigned int t395;
    char *t396;
    char *t397;
    unsigned int t398;
    unsigned int t399;
    unsigned int t400;
    int t401;
    unsigned int t402;
    unsigned int t403;
    unsigned int t404;
    int t405;
    unsigned int t406;
    unsigned int t407;
    unsigned int t408;
    unsigned int t409;
    char *t410;
    unsigned int t411;
    unsigned int t412;
    unsigned int t413;
    unsigned int t414;
    unsigned int t415;
    char *t416;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
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

LAB6:    xsi_set_current_line(33, ng0);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    xsi_process_wait(t9, 1000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(34, ng0);
    t10 = (t1 + 2504U);
    t11 = *((char **)t10);
    t10 = (t1 + 3864);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t15 = (t11 + 4);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB9;

LAB8:    if (t26 != 0)
        goto LAB10;

LAB11:    memset(t30, 0, 8);
    t31 = (t14 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t14);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t31) != 0)
        goto LAB14;

LAB15:    t38 = (t30 + 4);
    t39 = *((unsigned int *)t30);
    t40 = (!(t39));
    t41 = *((unsigned int *)t38);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB16;

LAB17:    memcpy(t71, t30, 8);

LAB18:    memset(t99, 0, 8);
    t100 = (t71 + 4);
    t101 = *((unsigned int *)t100);
    t102 = (~(t101));
    t103 = *((unsigned int *)t71);
    t104 = (t103 & t102);
    t105 = (t104 & 1U);
    if (t105 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t100) != 0)
        goto LAB32;

LAB33:    t107 = (t99 + 4);
    t108 = *((unsigned int *)t99);
    t109 = (!(t108));
    t110 = *((unsigned int *)t107);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB34;

LAB35:    memcpy(t175, t99, 8);

LAB36:    memset(t203, 0, 8);
    t204 = (t175 + 4);
    t205 = *((unsigned int *)t204);
    t206 = (~(t205));
    t207 = *((unsigned int *)t175);
    t208 = (t207 & t206);
    t209 = (t208 & 1U);
    if (t209 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t204) != 0)
        goto LAB53;

LAB54:    t211 = (t203 + 4);
    t212 = *((unsigned int *)t203);
    t213 = (!(t212));
    t214 = *((unsigned int *)t211);
    t215 = (t213 || t214);
    if (t215 > 0)
        goto LAB55;

LAB56:    memcpy(t244, t203, 8);

LAB57:    memset(t272, 0, 8);
    t273 = (t244 + 4);
    t274 = *((unsigned int *)t273);
    t275 = (~(t274));
    t276 = *((unsigned int *)t244);
    t277 = (t276 & t275);
    t278 = (t277 & 1U);
    if (t278 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t273) != 0)
        goto LAB71;

LAB72:    t280 = (t272 + 4);
    t281 = *((unsigned int *)t272);
    t282 = (!(t281));
    t283 = *((unsigned int *)t280);
    t284 = (t282 || t283);
    if (t284 > 0)
        goto LAB73;

LAB74:    memcpy(t313, t272, 8);

LAB75:    memset(t341, 0, 8);
    t342 = (t313 + 4);
    t343 = *((unsigned int *)t342);
    t344 = (~(t343));
    t345 = *((unsigned int *)t313);
    t346 = (t345 & t344);
    t347 = (t346 & 1U);
    if (t347 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t342) != 0)
        goto LAB89;

LAB90:    t349 = (t341 + 4);
    t350 = *((unsigned int *)t341);
    t351 = (!(t350));
    t352 = *((unsigned int *)t349);
    t353 = (t351 || t352);
    if (t353 > 0)
        goto LAB91;

LAB92:    memcpy(t382, t341, 8);

LAB93:    t410 = (t382 + 4);
    t411 = *((unsigned int *)t410);
    t412 = (~(t411));
    t413 = *((unsigned int *)t382);
    t414 = (t413 & t412);
    t415 = (t414 != 0);
    if (t415 > 0)
        goto LAB105;

LAB106:    xsi_set_current_line(42, ng0);

LAB109:    xsi_set_current_line(43, ng0);
    t4 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t4);

LAB107:    goto LAB4;

LAB9:    *((unsigned int *)t14) = 1;
    goto LAB11;

LAB10:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    *((unsigned int *)t30) = 1;
    goto LAB15;

LAB14:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB15;

LAB16:    t43 = (t1 + 2664U);
    t44 = *((char **)t43);
    t43 = (t1 + 4024);
    t45 = (t43 + 56U);
    t46 = *((char **)t45);
    memset(t47, 0, 8);
    t48 = (t44 + 4);
    t49 = (t46 + 4);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = *((unsigned int *)t48);
    t54 = *((unsigned int *)t49);
    t55 = (t53 ^ t54);
    t56 = (t52 | t55);
    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t49);
    t59 = (t57 | t58);
    t60 = (~(t59));
    t61 = (t56 & t60);
    if (t61 != 0)
        goto LAB20;

LAB19:    if (t59 != 0)
        goto LAB21;

LAB22:    memset(t63, 0, 8);
    t64 = (t47 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t47);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t64) != 0)
        goto LAB25;

LAB26:    t72 = *((unsigned int *)t30);
    t73 = *((unsigned int *)t63);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = (t30 + 4);
    t76 = (t63 + 4);
    t77 = (t71 + 4);
    t78 = *((unsigned int *)t75);
    t79 = *((unsigned int *)t76);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = *((unsigned int *)t77);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB18;

LAB20:    *((unsigned int *)t47) = 1;
    goto LAB22;

LAB21:    t62 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t63) = 1;
    goto LAB26;

LAB25:    t70 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB26;

LAB27:    t83 = *((unsigned int *)t71);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t71) = (t83 | t84);
    t85 = (t30 + 4);
    t86 = (t63 + 4);
    t87 = *((unsigned int *)t85);
    t88 = (~(t87));
    t89 = *((unsigned int *)t30);
    t90 = (t89 & t88);
    t91 = *((unsigned int *)t86);
    t92 = (~(t91));
    t93 = *((unsigned int *)t63);
    t94 = (t93 & t92);
    t95 = (~(t90));
    t96 = (~(t94));
    t97 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t97 & t95);
    t98 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t98 & t96);
    goto LAB29;

LAB30:    *((unsigned int *)t99) = 1;
    goto LAB33;

LAB32:    t106 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB33;

LAB34:    t112 = (t1 + 2344U);
    t113 = *((char **)t112);
    t112 = (t1 + 4344);
    t114 = (t112 + 56U);
    t115 = *((char **)t114);
    t116 = (t1 + 4504);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    t120 = *((unsigned int *)t115);
    t121 = *((unsigned int *)t118);
    t122 = (t120 & t121);
    *((unsigned int *)t119) = t122;
    t123 = (t115 + 4);
    t124 = (t118 + 4);
    t125 = (t119 + 4);
    t126 = *((unsigned int *)t123);
    t127 = *((unsigned int *)t124);
    t128 = (t126 | t127);
    *((unsigned int *)t125) = t128;
    t129 = *((unsigned int *)t125);
    t130 = (t129 != 0);
    if (t130 == 1)
        goto LAB37;

LAB38:
LAB39:    memset(t151, 0, 8);
    t152 = (t113 + 4);
    t153 = (t119 + 4);
    t154 = *((unsigned int *)t113);
    t155 = *((unsigned int *)t119);
    t156 = (t154 ^ t155);
    t157 = *((unsigned int *)t152);
    t158 = *((unsigned int *)t153);
    t159 = (t157 ^ t158);
    t160 = (t156 | t159);
    t161 = *((unsigned int *)t152);
    t162 = *((unsigned int *)t153);
    t163 = (t161 | t162);
    t164 = (~(t163));
    t165 = (t160 & t164);
    if (t165 != 0)
        goto LAB41;

LAB40:    if (t163 != 0)
        goto LAB42;

LAB43:    memset(t167, 0, 8);
    t168 = (t151 + 4);
    t169 = *((unsigned int *)t168);
    t170 = (~(t169));
    t171 = *((unsigned int *)t151);
    t172 = (t171 & t170);
    t173 = (t172 & 1U);
    if (t173 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t168) != 0)
        goto LAB46;

LAB47:    t176 = *((unsigned int *)t99);
    t177 = *((unsigned int *)t167);
    t178 = (t176 | t177);
    *((unsigned int *)t175) = t178;
    t179 = (t99 + 4);
    t180 = (t167 + 4);
    t181 = (t175 + 4);
    t182 = *((unsigned int *)t179);
    t183 = *((unsigned int *)t180);
    t184 = (t182 | t183);
    *((unsigned int *)t181) = t184;
    t185 = *((unsigned int *)t181);
    t186 = (t185 != 0);
    if (t186 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB36;

LAB37:    t131 = *((unsigned int *)t119);
    t132 = *((unsigned int *)t125);
    *((unsigned int *)t119) = (t131 | t132);
    t133 = (t115 + 4);
    t134 = (t118 + 4);
    t135 = *((unsigned int *)t115);
    t136 = (~(t135));
    t137 = *((unsigned int *)t133);
    t138 = (~(t137));
    t139 = *((unsigned int *)t118);
    t140 = (~(t139));
    t141 = *((unsigned int *)t134);
    t142 = (~(t141));
    t143 = (t136 & t138);
    t144 = (t140 & t142);
    t145 = (~(t143));
    t146 = (~(t144));
    t147 = *((unsigned int *)t125);
    *((unsigned int *)t125) = (t147 & t145);
    t148 = *((unsigned int *)t125);
    *((unsigned int *)t125) = (t148 & t146);
    t149 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t149 & t145);
    t150 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t150 & t146);
    goto LAB39;

LAB41:    *((unsigned int *)t151) = 1;
    goto LAB43;

LAB42:    t166 = (t151 + 4);
    *((unsigned int *)t151) = 1;
    *((unsigned int *)t166) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t167) = 1;
    goto LAB47;

LAB46:    t174 = (t167 + 4);
    *((unsigned int *)t167) = 1;
    *((unsigned int *)t174) = 1;
    goto LAB47;

LAB48:    t187 = *((unsigned int *)t175);
    t188 = *((unsigned int *)t181);
    *((unsigned int *)t175) = (t187 | t188);
    t189 = (t99 + 4);
    t190 = (t167 + 4);
    t191 = *((unsigned int *)t189);
    t192 = (~(t191));
    t193 = *((unsigned int *)t99);
    t194 = (t193 & t192);
    t195 = *((unsigned int *)t190);
    t196 = (~(t195));
    t197 = *((unsigned int *)t167);
    t198 = (t197 & t196);
    t199 = (~(t194));
    t200 = (~(t198));
    t201 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t201 & t199);
    t202 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t202 & t200);
    goto LAB50;

LAB51:    *((unsigned int *)t203) = 1;
    goto LAB54;

LAB53:    t210 = (t203 + 4);
    *((unsigned int *)t203) = 1;
    *((unsigned int *)t210) = 1;
    goto LAB54;

LAB55:    t216 = (t1 + 2824U);
    t217 = *((char **)t216);
    t216 = (t1 + 4664);
    t218 = (t216 + 56U);
    t219 = *((char **)t218);
    memset(t220, 0, 8);
    t221 = (t217 + 4);
    t222 = (t219 + 4);
    t223 = *((unsigned int *)t217);
    t224 = *((unsigned int *)t219);
    t225 = (t223 ^ t224);
    t226 = *((unsigned int *)t221);
    t227 = *((unsigned int *)t222);
    t228 = (t226 ^ t227);
    t229 = (t225 | t228);
    t230 = *((unsigned int *)t221);
    t231 = *((unsigned int *)t222);
    t232 = (t230 | t231);
    t233 = (~(t232));
    t234 = (t229 & t233);
    if (t234 != 0)
        goto LAB59;

LAB58:    if (t232 != 0)
        goto LAB60;

LAB61:    memset(t236, 0, 8);
    t237 = (t220 + 4);
    t238 = *((unsigned int *)t237);
    t239 = (~(t238));
    t240 = *((unsigned int *)t220);
    t241 = (t240 & t239);
    t242 = (t241 & 1U);
    if (t242 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t237) != 0)
        goto LAB64;

LAB65:    t245 = *((unsigned int *)t203);
    t246 = *((unsigned int *)t236);
    t247 = (t245 | t246);
    *((unsigned int *)t244) = t247;
    t248 = (t203 + 4);
    t249 = (t236 + 4);
    t250 = (t244 + 4);
    t251 = *((unsigned int *)t248);
    t252 = *((unsigned int *)t249);
    t253 = (t251 | t252);
    *((unsigned int *)t250) = t253;
    t254 = *((unsigned int *)t250);
    t255 = (t254 != 0);
    if (t255 == 1)
        goto LAB66;

LAB67:
LAB68:    goto LAB57;

LAB59:    *((unsigned int *)t220) = 1;
    goto LAB61;

LAB60:    t235 = (t220 + 4);
    *((unsigned int *)t220) = 1;
    *((unsigned int *)t235) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t236) = 1;
    goto LAB65;

LAB64:    t243 = (t236 + 4);
    *((unsigned int *)t236) = 1;
    *((unsigned int *)t243) = 1;
    goto LAB65;

LAB66:    t256 = *((unsigned int *)t244);
    t257 = *((unsigned int *)t250);
    *((unsigned int *)t244) = (t256 | t257);
    t258 = (t203 + 4);
    t259 = (t236 + 4);
    t260 = *((unsigned int *)t258);
    t261 = (~(t260));
    t262 = *((unsigned int *)t203);
    t263 = (t262 & t261);
    t264 = *((unsigned int *)t259);
    t265 = (~(t264));
    t266 = *((unsigned int *)t236);
    t267 = (t266 & t265);
    t268 = (~(t263));
    t269 = (~(t267));
    t270 = *((unsigned int *)t250);
    *((unsigned int *)t250) = (t270 & t268);
    t271 = *((unsigned int *)t250);
    *((unsigned int *)t250) = (t271 & t269);
    goto LAB68;

LAB69:    *((unsigned int *)t272) = 1;
    goto LAB72;

LAB71:    t279 = (t272 + 4);
    *((unsigned int *)t272) = 1;
    *((unsigned int *)t279) = 1;
    goto LAB72;

LAB73:    t285 = (t1 + 3304U);
    t286 = *((char **)t285);
    t285 = (t1 + 5144);
    t287 = (t285 + 56U);
    t288 = *((char **)t287);
    memset(t289, 0, 8);
    t290 = (t286 + 4);
    t291 = (t288 + 4);
    t292 = *((unsigned int *)t286);
    t293 = *((unsigned int *)t288);
    t294 = (t292 ^ t293);
    t295 = *((unsigned int *)t290);
    t296 = *((unsigned int *)t291);
    t297 = (t295 ^ t296);
    t298 = (t294 | t297);
    t299 = *((unsigned int *)t290);
    t300 = *((unsigned int *)t291);
    t301 = (t299 | t300);
    t302 = (~(t301));
    t303 = (t298 & t302);
    if (t303 != 0)
        goto LAB77;

LAB76:    if (t301 != 0)
        goto LAB78;

LAB79:    memset(t305, 0, 8);
    t306 = (t289 + 4);
    t307 = *((unsigned int *)t306);
    t308 = (~(t307));
    t309 = *((unsigned int *)t289);
    t310 = (t309 & t308);
    t311 = (t310 & 1U);
    if (t311 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t306) != 0)
        goto LAB82;

LAB83:    t314 = *((unsigned int *)t272);
    t315 = *((unsigned int *)t305);
    t316 = (t314 | t315);
    *((unsigned int *)t313) = t316;
    t317 = (t272 + 4);
    t318 = (t305 + 4);
    t319 = (t313 + 4);
    t320 = *((unsigned int *)t317);
    t321 = *((unsigned int *)t318);
    t322 = (t320 | t321);
    *((unsigned int *)t319) = t322;
    t323 = *((unsigned int *)t319);
    t324 = (t323 != 0);
    if (t324 == 1)
        goto LAB84;

LAB85:
LAB86:    goto LAB75;

LAB77:    *((unsigned int *)t289) = 1;
    goto LAB79;

LAB78:    t304 = (t289 + 4);
    *((unsigned int *)t289) = 1;
    *((unsigned int *)t304) = 1;
    goto LAB79;

LAB80:    *((unsigned int *)t305) = 1;
    goto LAB83;

LAB82:    t312 = (t305 + 4);
    *((unsigned int *)t305) = 1;
    *((unsigned int *)t312) = 1;
    goto LAB83;

LAB84:    t325 = *((unsigned int *)t313);
    t326 = *((unsigned int *)t319);
    *((unsigned int *)t313) = (t325 | t326);
    t327 = (t272 + 4);
    t328 = (t305 + 4);
    t329 = *((unsigned int *)t327);
    t330 = (~(t329));
    t331 = *((unsigned int *)t272);
    t332 = (t331 & t330);
    t333 = *((unsigned int *)t328);
    t334 = (~(t333));
    t335 = *((unsigned int *)t305);
    t336 = (t335 & t334);
    t337 = (~(t332));
    t338 = (~(t336));
    t339 = *((unsigned int *)t319);
    *((unsigned int *)t319) = (t339 & t337);
    t340 = *((unsigned int *)t319);
    *((unsigned int *)t319) = (t340 & t338);
    goto LAB86;

LAB87:    *((unsigned int *)t341) = 1;
    goto LAB90;

LAB89:    t348 = (t341 + 4);
    *((unsigned int *)t341) = 1;
    *((unsigned int *)t348) = 1;
    goto LAB90;

LAB91:    t354 = (t1 + 3144U);
    t355 = *((char **)t354);
    t354 = (t1 + 4824);
    t356 = (t354 + 56U);
    t357 = *((char **)t356);
    memset(t358, 0, 8);
    t359 = (t355 + 4);
    t360 = (t357 + 4);
    t361 = *((unsigned int *)t355);
    t362 = *((unsigned int *)t357);
    t363 = (t361 ^ t362);
    t364 = *((unsigned int *)t359);
    t365 = *((unsigned int *)t360);
    t366 = (t364 ^ t365);
    t367 = (t363 | t366);
    t368 = *((unsigned int *)t359);
    t369 = *((unsigned int *)t360);
    t370 = (t368 | t369);
    t371 = (~(t370));
    t372 = (t367 & t371);
    if (t372 != 0)
        goto LAB95;

LAB94:    if (t370 != 0)
        goto LAB96;

LAB97:    memset(t374, 0, 8);
    t375 = (t358 + 4);
    t376 = *((unsigned int *)t375);
    t377 = (~(t376));
    t378 = *((unsigned int *)t358);
    t379 = (t378 & t377);
    t380 = (t379 & 1U);
    if (t380 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t375) != 0)
        goto LAB100;

LAB101:    t383 = *((unsigned int *)t341);
    t384 = *((unsigned int *)t374);
    t385 = (t383 | t384);
    *((unsigned int *)t382) = t385;
    t386 = (t341 + 4);
    t387 = (t374 + 4);
    t388 = (t382 + 4);
    t389 = *((unsigned int *)t386);
    t390 = *((unsigned int *)t387);
    t391 = (t389 | t390);
    *((unsigned int *)t388) = t391;
    t392 = *((unsigned int *)t388);
    t393 = (t392 != 0);
    if (t393 == 1)
        goto LAB102;

LAB103:
LAB104:    goto LAB93;

LAB95:    *((unsigned int *)t358) = 1;
    goto LAB97;

LAB96:    t373 = (t358 + 4);
    *((unsigned int *)t358) = 1;
    *((unsigned int *)t373) = 1;
    goto LAB97;

LAB98:    *((unsigned int *)t374) = 1;
    goto LAB101;

LAB100:    t381 = (t374 + 4);
    *((unsigned int *)t374) = 1;
    *((unsigned int *)t381) = 1;
    goto LAB101;

LAB102:    t394 = *((unsigned int *)t382);
    t395 = *((unsigned int *)t388);
    *((unsigned int *)t382) = (t394 | t395);
    t396 = (t341 + 4);
    t397 = (t374 + 4);
    t398 = *((unsigned int *)t396);
    t399 = (~(t398));
    t400 = *((unsigned int *)t341);
    t401 = (t400 & t399);
    t402 = *((unsigned int *)t397);
    t403 = (~(t402));
    t404 = *((unsigned int *)t374);
    t405 = (t404 & t403);
    t406 = (~(t401));
    t407 = (~(t405));
    t408 = *((unsigned int *)t388);
    *((unsigned int *)t388) = (t408 & t406);
    t409 = *((unsigned int *)t388);
    *((unsigned int *)t388) = (t409 & t407);
    goto LAB104;

LAB105:    xsi_set_current_line(37, ng0);

LAB108:    xsi_set_current_line(38, ng0);
    t416 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t416);
    xsi_set_current_line(39, ng0);
    xsi_vlog_finish(1);
    goto LAB107;

}

static int sp_rndctrlsig(char *t1, char *t2)
{
    char t5[8];
    char t7[16];
    char t25[16];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(49, ng0);
    *((int *)t5) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t6 = (t5 + 4);
    *((int *)t6) = 0;
    memcpy(t7, t5, 8);
    t8 = (t7 + 8);
    memset(t8, 0, 8);
    t11 = *((unsigned int *)t5);
    t12 = (t11 & 2147483648U);
    t9 = t12;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (t14 & 2147483648U);
    t10 = t15;
    t16 = (t12 != 0);
    if (t16 == 1)
        goto LAB5;

LAB6:    t20 = (t15 != 0);
    if (t20 == 1)
        goto LAB7;

LAB8:    memcpy(t25, t7, 8);
    t26 = (t25 + 8);
    memset(t26, 0, 8);
    t29 = *((unsigned int *)t7);
    t30 = (t29 & 2147483648U);
    t27 = t30;
    t31 = (t7 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (t32 & 2147483648U);
    t28 = t33;
    t34 = (t30 != 0);
    if (t34 == 1)
        goto LAB9;

LAB10:    t38 = (t33 != 0);
    if (t38 == 1)
        goto LAB11;

LAB12:    t43 = (t1 + 4824);
    xsi_vlogvar_assign_value(t43, t25, 0, 0, 32);
    t44 = (t1 + 5144);
    xsi_vlogvar_assign_value(t44, t25, 32, 0, 5);
    t45 = (t1 + 4504);
    xsi_vlogvar_assign_value(t45, t25, 37, 0, 1);
    t46 = (t1 + 4344);
    xsi_vlogvar_assign_value(t46, t25, 38, 0, 1);
    t47 = (t1 + 4024);
    xsi_vlogvar_assign_value(t47, t25, 39, 0, 1);
    t48 = (t1 + 3864);
    xsi_vlogvar_assign_value(t48, t25, 40, 0, 1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB5:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 | 0U);
    t18 = (t7 + 8);
    t19 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t19 | 4294967295U);
    goto LAB6;

LAB7:    t21 = (t7 + 4);
    t22 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t22 | 0U);
    t23 = (t7 + 12);
    t24 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t24 | 4294967295U);
    goto LAB8;

LAB9:    t35 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t35 | 0U);
    t36 = (t25 + 8);
    t37 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t37 | 4294967295U);
    goto LAB10;

LAB11:    t39 = (t25 + 4);
    t40 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t40 | 0U);
    t41 = (t25 + 12);
    t42 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t42 | 4294967295U);
    goto LAB12;

}

static int sp_showmem(char *t1, char *t2)
{
    char t12[8];
    char t22[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
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

LAB6:    xsi_set_current_line(54, ng0);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    xsi_process_wait(t9, 1000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(55, ng0);
    xsi_set_current_line(55, ng0);
    t10 = ((char*)((ng3)));
    t11 = (t1 + 5304);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 32);

LAB8:    t4 = (t1 + 5304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t12, 0, 8);
    xsi_vlog_signed_less(t12, 32, t6, 32, t7, 32);
    t8 = (t12 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB9;

LAB10:    goto LAB4;

LAB9:    xsi_set_current_line(56, ng0);
    t9 = (t1 + 5304);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t18 = (t1 + 8972);
    t19 = *((char **)t18);
    t20 = ((((char*)(t19))) + 56U);
    t21 = *((char **)t20);
    t23 = (t1 + 8996);
    t24 = *((char **)t23);
    t25 = ((((char*)(t24))) + 72U);
    t26 = *((char **)t25);
    t27 = (t1 + 9020);
    t28 = *((char **)t27);
    t29 = ((((char*)(t28))) + 64U);
    t30 = *((char **)t29);
    t31 = (t1 + 5304);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlog_generic_get_array_select_value(t22, 32, t21, t26, t30, 2, 1, t33, 32, 1);
    t34 = (t1 + 1712);
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t34, (char)119, t11, 32, (char)118, t22, 32);
    xsi_set_current_line(55, ng0);
    t4 = (t1 + 5304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t6, 32, t7, 32);
    t8 = (t1 + 5304);
    xsi_vlogvar_assign_value(t8, t12, 0, 0, 32);
    goto LAB8;

}

static void Always_20_0(char *t0)
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

LAB0:    t1 = (t0 + 6224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 6032);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 3704);
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
    t24 = (t0 + 3704);
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

static void Initial_21_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 6472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);

LAB4:    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 6792);
    *((int *)t2) = 1;
    t3 = (t0 + 6504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(22, ng0);
    t4 = (t0 + 6280);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);

LAB8:    t7 = (t0 + 6376);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB10:    if (t15 != 0)
        goto LAB11;

LAB6:    t8 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t8);

LAB7:    t16 = (t0 + 6376);
    t17 = *((char **)t16);
    t16 = (t0 + 1280);
    t18 = (t0 + 6280);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 6280);
    t3 = (t0 + 1712);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB14:    t5 = (t0 + 6376);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB16:    if (t15 != 0)
        goto LAB17;

LAB12:    t6 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t6);

LAB13:    t13 = (t0 + 6376);
    t14 = *((char **)t13);
    t13 = (t0 + 1712);
    t16 = (t0 + 6280);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t14, t0, t16, t17);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 6280);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB20:    t5 = (t0 + 6376);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB22:    if (t15 != 0)
        goto LAB23;

LAB18:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB19:    t13 = (t0 + 6376);
    t14 = *((char **)t13);
    t13 = (t0 + 848);
    t16 = (t0 + 6280);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t14, t0, t16, t17);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 6808);
    *((int *)t2) = 1;
    t3 = (t0 + 6504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB9:;
LAB11:    t7 = (t0 + 6472U);
    *((char **)t7) = &&LAB8;
    goto LAB1;

LAB15:;
LAB17:    t5 = (t0 + 6472U);
    *((char **)t5) = &&LAB14;
    goto LAB1;

LAB21:;
LAB23:    t5 = (t0 + 6472U);
    *((char **)t5) = &&LAB20;
    goto LAB1;

LAB24:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 6280);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);

LAB27:    t7 = (t0 + 6376);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB29:    if (t15 != 0)
        goto LAB30;

LAB25:    t8 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t8);

LAB26:    t16 = (t0 + 6376);
    t17 = *((char **)t16);
    t16 = (t0 + 1280);
    t18 = (t0 + 6280);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 6280);
    t3 = (t0 + 1712);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB33:    t5 = (t0 + 6376);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB35:    if (t15 != 0)
        goto LAB36;

LAB31:    t6 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t6);

LAB32:    t13 = (t0 + 6376);
    t14 = *((char **)t13);
    t13 = (t0 + 1712);
    t16 = (t0 + 6280);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t14, t0, t16, t17);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 6280);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB39:    t5 = (t0 + 6376);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB41:    if (t15 != 0)
        goto LAB42;

LAB37:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB38:    t13 = (t0 + 6376);
    t14 = *((char **)t13);
    t13 = (t0 + 848);
    t16 = (t0 + 6280);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t14, t0, t16, t17);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 6824);
    *((int *)t2) = 1;
    t3 = (t0 + 6504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB28:;
LAB30:    t7 = (t0 + 6472U);
    *((char **)t7) = &&LAB27;
    goto LAB1;

LAB34:;
LAB36:    t5 = (t0 + 6472U);
    *((char **)t5) = &&LAB33;
    goto LAB1;

LAB40:;
LAB42:    t5 = (t0 + 6472U);
    *((char **)t5) = &&LAB39;
    goto LAB1;

LAB43:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 6280);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);

LAB46:    t7 = (t0 + 6376);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB48:    if (t15 != 0)
        goto LAB49;

LAB44:    t8 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t8);

LAB45:    t16 = (t0 + 6376);
    t17 = *((char **)t16);
    t16 = (t0 + 1280);
    t18 = (t0 + 6280);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 6280);
    t3 = (t0 + 1712);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB52:    t5 = (t0 + 6376);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB54:    if (t15 != 0)
        goto LAB55;

LAB50:    t6 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t6);

LAB51:    t13 = (t0 + 6376);
    t14 = *((char **)t13);
    t13 = (t0 + 1712);
    t16 = (t0 + 6280);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t14, t0, t16, t17);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 6280);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB58:    t5 = (t0 + 6376);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB60:    if (t15 != 0)
        goto LAB61;

LAB56:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB57:    t13 = (t0 + 6376);
    t14 = *((char **)t13);
    t13 = (t0 + 848);
    t16 = (t0 + 6280);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t14, t0, t16, t17);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 6280);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB47:;
LAB49:    t7 = (t0 + 6472U);
    *((char **)t7) = &&LAB46;
    goto LAB1;

LAB53:;
LAB55:    t5 = (t0 + 6472U);
    *((char **)t5) = &&LAB52;
    goto LAB1;

LAB59:;
LAB61:    t5 = (t0 + 6472U);
    *((char **)t5) = &&LAB58;
    goto LAB1;

LAB62:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 6280);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB65:    t6 = (t0 + 6376);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t15 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB67:    if (t15 != 0)
        goto LAB68;

LAB63:    t7 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t7);

LAB64:    t14 = (t0 + 6376);
    t16 = *((char **)t14);
    t14 = (t0 + 1712);
    t17 = (t0 + 6280);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t16, t0, t17, t18);
    xsi_set_current_line(28, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB66:;
LAB68:    t6 = (t0 + 6472U);
    *((char **)t6) = &&LAB65;
    goto LAB1;

}


extern void work_m_00000000003841897033_2359454341_init()
{
	static char *pe[] = {(void *)Always_20_0,(void *)Initial_21_1};
	static char *se[] = {(void *)sp_checksignals,(void *)sp_rndctrlsig,(void *)sp_showmem};
	xsi_register_didat("work_m_00000000003841897033_2359454341", "isim/MEM_Stage_TestBench_isim_beh.exe.sim/work/m_00000000003841897033_2359454341.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
