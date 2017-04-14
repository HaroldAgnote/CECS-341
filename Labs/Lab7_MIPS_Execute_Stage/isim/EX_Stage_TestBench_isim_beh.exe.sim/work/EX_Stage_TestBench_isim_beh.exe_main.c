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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000004065515638_2725559894_init();
    work_m_00000000003876415653_3174721860_init();
    work_m_00000000003876415653_3865991805_init();
    work_m_00000000002211021786_1433279867_init();
    work_m_00000000002386620356_1887464097_init();
    work_m_00000000002410850841_2598732222_init();
    work_m_00000000001690968501_2384324955_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001690968501_2384324955");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
