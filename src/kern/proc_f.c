/*
  Copyright (c) 1998
  Author: Jeff Weisberg <jaw @ tcp4me.com>
  Created: 2011-Dec-03 12:04 (EST)
  Function: process functions
 
  $Id$

*/

#include <conf.h>
#include <proc.h>
#include <nstdio.h>
#include <userint.h>

#ifdef USE_CLI

DEFUN(tthrow, "test throw")
{
    _xthrow();
}


DEFUN(kill, "kill a process")
{
    proc_t p;

    if( argc != 3 ){
        f_error("kill susp|cont|dead|unbl|<n> pid");
        return -1;
    }

    p = (proc_t)atoi_base(16, argv[2]);

    if( !strcmp(argv[1], "dead"))
        sigkill(p);
    else if( !strcmp(argv[1], "cont"))
        sigcont(p);
    else if( !strcmp(argv[1], "susp"))
        sigsuspend(p);
    else if( !strcmp(argv[1], "unbl"))
        sigunblock(p);
    else{
        sendmsg(p, atoi(argv[1]), 1);
    }
    return 0;
}

#endif /* USE_CLI */

static void
ps_header(void){

    printf("  R Runnable      D Dead         N Non-Blocking\n");
    printf("  B Blocked       C Real-Time    K Dead Child\n");
    printf("  Z Suspended     S System       M Msg Pending\n");
    printf("\n");
}


static void
proc_ps(proc_t p){
    int x;

    printf( "%08.8x %08.8x %3d %3d %c%c%c%c %c%c%c%c%c %5.5s %3d%% %3d%% %4dk %-6.6s %-8.8s\n",
	    p, p->mommy,
	    p->prio, p->timeslice,

            p==currproc ? 'R' : (p->state == PRS_RUNNABLE ? 'r' : '-'),

	    p->state & PRS_BLOCKED   ? 'B' : '-',
	    p->state & PRS_SUSPENDED ? 'Z' : '-',
	    p->state & PRS_DEAD      ? 'D' : '-',

	    p->flags & PRF_REALTIME  ? 'C' : '-',
	    p->flags & PRF_IMPORTANT ? 'S' : '-',
	    p->flags & PRF_NONBLOCK  ? 'N' : '-',
	    p->flags & PRF_DEADKID   ? 'K' : '-',
	    p->flags & PRF_MSGPEND   ? 'M' : '-',

	    (p->wmsg ? p->wmsg : "     "),
#ifdef PROC_SMALL
            0, 0, 0,
#else
            p->estcpu / KESTCPU,

	    p->timeallotted ?
	    ((p->timeallotted - p->timeyielded) * 100 / p->timeallotted) : 0,

	    (p->memused + 1023)/ 1024,
#endif
	    (p->cwd ? p->cwd->name : ""),
	    p->name);
}

DEFUN(ps, "list processes")
{
    proc_t p = 0;
    int plx;
    char *st;

    if( argc == 2 ){
        extern u_long _end;
        p = (proc_t)atoi_base(16, argv[1]);
        if( !p || ((u_long)p < (u_long)&_end)
#ifdef CHECKPROC
            || (p->magic != PROCMAGIC)
#endif
            ){
            printf("ps [pid]\n");
            return 1;
        }
    }

    ps_header();

    printf("PID      PPID     PRI TSL STATE FLGS WCHAN %%CPU %%TSL   MEM CWD    COMMAND\n");
    plx = splproc();
    if( !p ){
        for(p=(proc_t)proclist; p; p = p->next){
            proc_ps(p);
        }
    }else{
        proc_ps(p);

        printf("magic=%9.9d sp=0x%08.8x state=0x%02.2x flags=0x%02.2x wchan=0x%08.8x\n",
               p->magic, p->sp, p->state, p->flags, p->wchan);
#ifdef USE_NSTDIO
        printf("stdin=0x%08.8x stdout=0x%08.8x stderr=0x%08.8x cwd=0x%08.8x\n",
               p->stdin, p->stdout, p->stderr, p->cwd);
#endif
        printf("stack=0x%08.8x alloced=0x%08.8x exit=0x%08.8x sigmsg=0x%08.8x\n",
               p->stack_start, p->alloc_size, p->exitval, p->sigmsgs);
        printf("clist=0x%08.8x msghead=0x%08.8x msgtail=0x%08.8x throwing=%x\n",
               p->clist, p->msghead, p->msgtail, p->throwing);
#ifdef PROC_SMALL
        printf("next=0x%08.8x prev=0x%08.8x\n",
               p->next, p->prev);
#else
        printf("memused=0x%08.8x timeused=0x%08.8x timeyld=0x%08.8x timeallot=0x%08.8x\n",
               p->memused, p->timeused, p->timeyielded, p->timeallotted);
        printf("estcpu=%08.8d next=0x%08.8x prev=0x%08.8x\n",
               p->estcpu, p->next, p->prev);
#endif
#ifdef CHECKPROC
        printf("lowsp=%08.8x (%d)\n", p->lowsp, (char*)p - (char*)p->lowsp);
#endif
    }

    splx(plx);

    return 0;
}

