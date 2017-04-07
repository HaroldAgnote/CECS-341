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
    work_m_00000000001474958758_2111676637_init();
    work_m_00000000002386620356_1887464097_init();
    work_m_00000000003876415653_3174721860_init();
    work_m_00000000003936846236_2731210154_init();
    work_m_00000000003523412422_4205540194_init();
    work_m_00000000002345280864_3297898938_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002345280864_3297898938");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
