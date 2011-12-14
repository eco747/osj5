
/*
  Copyright (c) 2011
  Author: Jeff Weisberg <jaw @ tcp4me.com>
  Created: 2011-Dec-04 13:21 (EST)
  Function: proc machine dependent code - ARM Cortex-M4
 
  $Id$

*/

/* $Id: os.h,v 1.6 2001/10/31 18:09:12 jaw Exp $ */

#ifndef __os_machdep_arm_cm4_all_md_proc_h__
#define __os_machdep_arm_cm4_all_md_proc_h__

#include <sys/types.h>
#include <conf.h>


#define IPL_ZERO	0
#define IPL_PROC	1
#define IPL_TTY		2
#define IPL_DISK	3
#define IPL_MOTOR	4
#define IPL_CLOCK	5
#define IPL_HIGH	6

#define splproc()	splraise(IPL_PROC)
#define splalloc()	splproc()
#define spltty()	splraise(IPL_TTY)
#define splterm()	spltty()
#define spldisk()	splraise(IPL_DISK)
#define splmotor()	splraise(IPL_MOTOR)
#define splclock()	splraise(IPL_CLOCK)
#define splhigh()	splraise(IPL_HIGH)
#define spl0()		spllower(IPL_ZERO)
#define splx(x)		spllower(x)


#define NVIC_INT_CTLST	0xE000ED04
#define NVIC_PENDSVSET	0x10000000

#define irq_disable()        __asm__("cpsid i")
#define irq_enable()         __asm__("cpsie if")

static inline void
sched_yield(){
    /* cause a PendSV int to fire */
    *(volatile unsigned*)NVIC_INT_CTLST = NVIC_PENDSVSET;
}

static inline void
md_yield(){
    sched_yield();
}


static inline int
splraise(int ncpl) {
    int ocpl;

    /* ocpl = basepri */
    asm("mrs %0, basepri" : "=r" (ocpl));

    if( ncpl > ocpl ){
        /* basepri = ncpl */
        asm("msr basepri, %0" : : "r" (ncpl));
    }

    return ocpl;
}

static inline int
spllower(int ncpl) {
    int ocpl;

    /* ocpl = basepri */
    asm("mrs %0, basepri" : "=r" (ocpl));

    /* basepri = ncpl */
    asm("msr basepri, %0" : : "r" (ncpl));

    return ocpl;
}

extern void _start_proc(void (*)(void));

static inline u_long *
_setup_initial_stack(u_long *s, char *start /* NOT USED */, void *entry){

    // hardware interrupt frame
    *--s = 0;			// xpsr
    *--s = (u_long)_start_proc;	// pc
    *--s = 0;			// lr
    *--s = 0;			// r12
    *--s = 0;			// r3
    *--s = 0;			// r2
    *--s = 0;			// r1
    *--s = (u_long)entry;	// r0

    // pendsv_handler pushes
    *--s = 0xFFFFFFF9;		// lr - EXC_RETURN(thread mode, MSP, no floats)
    *--s = 0;			// r7
    *--s = 0;			// r6
    *--s = 0;			// r5
    *--s = 0;			// r4
    *--s = 0;			// r11
    *--s = 0;			// r10
    *--s = 0;			// r9
    *--s = 0;			// r8

    return s;
}

#endif /* __os_machdep_arm_cm4_all_md_proc_h__ */

