// See LICENSE file for licence details

#ifndef FUNC_H
#define FUNC_H

__BEGIN_DECLS

#include "core/drivers/timer.h"
#include "core/drivers/eclic.h"

void pmp_open_all_space();

void switch_m2u_mode();

uint32_t get_mtime_freq();

//unsigned long mtime_lo();
uint32_t mtime_lo();

uint32_t mtime_hi(void);

uint64_t get_mtime_value();

uint64_t get_instret_value();

uint64_t get_cycle_value();

unsigned long get_cpu_freq();

//static unsigned long __attribute__((noinline)) measure_cpu_freq(size_t n);
uint64_t __attribute__((noinline)) measure_cpu_freq(size_t n);

void disable_mcycle_minstret();
void enable_mcycle_minstret();
void core_wfe();

uint32_t get_timer_freq();

///////////////////////////////////////////////////////////////////
/////// ECLIC relevant functions
///////
void eclic_init ( uint32_t num_irq );

void eclic_enable_interrupt (uint32_t source);
void eclic_disable_interrupt (uint32_t source);

void eclic_set_pending(uint32_t source);
void eclic_clear_pending(uint32_t source);

void eclic_set_intctrl (uint32_t source, uint8_t intctrl);
uint8_t eclic_get_intctrl  (uint32_t source);

void eclic_set_intattr (uint32_t source, uint8_t intattr);
uint8_t eclic_get_intattr  (uint32_t source);

void eclic_set_cliccfg (uint8_t cliccfg);
uint8_t eclic_get_cliccfg ();

void eclic_set_mth (uint8_t mth);
uint8_t eclic_get_mth();

//sets nlbits 
void eclic_set_nlbits(uint8_t nlbits);


//get nlbits 
uint8_t eclic_get_nlbits();

void eclic_set_irq_lvl(uint32_t source, uint8_t lvl);
uint8_t eclic_get_irq_lvl(uint32_t source);

void eclic_set_irq_lvl_abs(uint32_t source, uint8_t lvl_abs);
uint8_t eclic_get_irq_lvl_abs(uint32_t source);

void eclic_mode_enable();

void eclic_set_vmode(uint32_t source);
void eclic_set_nonvmode(uint32_t source);

void eclic_set_level_trig(uint32_t source);
void eclic_set_posedge_trig(uint32_t source);
void eclic_set_negedge_trig(uint32_t source);

__END_DECLS

#endif
