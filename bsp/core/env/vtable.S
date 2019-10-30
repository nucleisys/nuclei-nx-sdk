// See LICENSE for license details.

// See LICENSE for license details.

#include "core/drivers/riscv_encoding.h"

	.section .vtable


    .weak  eclic_msip_handler 

    .weak  eclic_mtip_handler 

    .weak  eclic_meip_handler 

    .weak  eclic_irq19_handler

    .weak  eclic_irq20_handler
    .weak  eclic_irq21_handler
    .weak  eclic_irq22_handler
    .weak  eclic_irq23_handler

    .weak  eclic_irq24_handler
    .weak  eclic_irq25_handler
    .weak  eclic_irq26_handler
    .weak  eclic_irq27_handler

    .weak  eclic_irq28_handler
    .weak  eclic_irq29_handler
    .weak  eclic_irq30_handler
    .weak  eclic_irq31_handler

    .weak  eclic_irq32_handler
    .weak  eclic_irq33_handler
    .weak  eclic_irq34_handler
    .weak  eclic_irq35_handler

    .weak  eclic_irq36_handler
    .weak  eclic_irq37_handler
    .weak  eclic_irq38_handler
    .weak  eclic_irq39_handler

    .weak  eclic_irq40_handler
    .weak  eclic_irq41_handler
    .weak  eclic_irq42_handler
    .weak  eclic_irq43_handler

    .weak  eclic_irq44_handler
    .weak  eclic_irq45_handler
    .weak  eclic_irq46_handler
    .weak  eclic_irq47_handler

    .weak  eclic_irq48_handler
    .weak  eclic_irq49_handler
    .weak  eclic_irq50_handler

    .globl vector_base
vector_base:
     j _start
     .align 3
    .dword  0 
    .dword  0 
    .dword  eclic_msip_handler 

    .dword  0 
    .dword  0 
    .dword  0 
    .dword  eclic_mtip_handler 

    .dword  0 
    .dword  0 
    .dword  0 
    .dword  0 

    .dword  0
    .dword  0
    .dword  0
    .dword  0

    .dword  0
    .dword  0
    .dword  0
    .dword  eclic_irq19_handler

    .dword  eclic_irq20_handler
    .dword  eclic_irq21_handler
    .dword  eclic_irq22_handler
    .dword  eclic_irq23_handler

    .dword  eclic_irq24_handler
    .dword  eclic_irq25_handler
    .dword  eclic_irq26_handler
    .dword  eclic_irq27_handler

    .dword  eclic_irq28_handler
    .dword  eclic_irq29_handler
    .dword  eclic_irq30_handler
    .dword  eclic_irq31_handler

    .dword  eclic_irq32_handler
    .dword  eclic_irq33_handler
    .dword  eclic_irq34_handler
    .dword  eclic_irq35_handler

    .dword  eclic_irq36_handler
    .dword  eclic_irq37_handler
    .dword  eclic_irq38_handler
    .dword  eclic_irq39_handler

    .dword  eclic_irq40_handler
    .dword  eclic_irq41_handler
    .dword  eclic_irq42_handler
    .dword  eclic_irq43_handler

    .dword  eclic_irq44_handler
    .dword  eclic_irq45_handler
    .dword  eclic_irq46_handler
    .dword  eclic_irq47_handler

    .dword  eclic_irq48_handler
    .dword  eclic_irq49_handler
    .dword  eclic_irq50_handler



