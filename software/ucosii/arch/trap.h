#ifndef _TRAP_H
#define _TRAP_H

#include<cpu.h>



#ifndef NULL
#define NULL ((void*)0)
#endif


extern void halt(int64_t,int64_t);
extern void syscall_handler(int64_t sp[]);
extern int64_t trap_handler(int64_t mcause,int64_t mepc,int64_t sp[],int64_t arg1);
extern int64_t timer_irq_handler(int64_t mcause,int64_t mepc,int64_t sp[]);


/*-----------------------------------------------------------*/
/*System Calls												 */
/*-----------------------------------------------------------*/
//ecall macro used to store argument in a3
#define ECALL(arg) ({			\
	register uintptr_t a3 asm ("a3") = (uintptr_t)(arg);	\
	asm volatile ("ecall"					\
		      : "+r" (a3)				\
		      : 	\
		      : "memory");				\
	a3;							\
})

#define PORT_NO  		40

/*-----------------------------------------------------------*/


/* Scheduler utilities. */
/* the return after the ECALL is VERY important */

#define portYIELD() ECALL(PORT_NO);


#endif
