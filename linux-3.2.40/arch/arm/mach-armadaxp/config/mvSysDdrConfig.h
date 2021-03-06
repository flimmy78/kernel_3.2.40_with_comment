/*******************************************************************************
Copyright (C) Marvell International Ltd. and its affiliates

********************************************************************************
Marvell GPL License Option

If you received this File from Marvell, you may opt to use, redistribute and/or 
modify this File in accordance with the terms and conditions of the General 
Public License Version 2, June 1991 (the "GPL License"), a copy of which is 
available along with the File in the license.txt file or by writing to the Free 
Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 or 
on the worldwide web at http://www.gnu.org/licenses/gpl.txt. 

THE FILE IS DISTRIBUTED AS-IS, WITHOUT WARRANTY OF ANY KIND, AND THE IMPLIED 
WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE ARE EXPRESSLY 
DISCLAIMED.  The GPL License provides additional details about this warranty 
disclaimer.

*******************************************************************************/
/*******************************************************************************
* mvSysDdrConfig.h - Marvell DRAM controller unit specific configurations
*
* DESCRIPTION:
*       None.
*
* DEPENDENCIES:
*       None.
*
*******************************************************************************/

#include "mvSysHwConfig.h"

/*
** Base address for DDR registers.
*/
#define MV_DDR_WIN_REGS_BASE		(MV_MBUS_REGS_OFFSET)
#define MV_DDR_CTRL_REGS_BASE		(MV_DRAM_REGS_OFFSET)

/* used for ddr2 "bak" files */
#define MV_DDR_REGS_BASE		(MV_DRAM_REGS_OFFSET)

#ifndef MV_BOOTROM
#define MV_STATIC_DRAM_ON_BOARD
#endif

