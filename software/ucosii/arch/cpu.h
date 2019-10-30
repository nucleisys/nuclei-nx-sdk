#ifndef _CPU_H
#define _CPU_H

#include<stdint.h>


#include "core/drivers/func.h"
#include "soc/drivers/soc.h"
#include "soc/drivers/board.h"
#include "core/drivers/riscv_encoding.h"
#include "core/drivers/timer.h"
#include "core/drivers/eclic.h"


#define enable_global_int() asm("csrsi mstatus,0x8")
#define disable_global_int() asm("csrci mstatus,0x8")
#define enable_time_int() asm("li t0,0x80\n\tcsrs mie,t0")
#define disable_time_int() asm("li t0,0x80\n\tcsrc mie,t0")


#endif

