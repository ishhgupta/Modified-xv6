# Modifications to the xv6 operating system

## OVERVIEW

Some modifications has been made to the xv6 operating system  like waitx,ps,set_priority syscall has been introduced and also many scheduling policy has been introduuced.

## UserPrograms

``` ps,time,setPriority```

## Syscalls

``` waitx,set_priority,ps```

### for introducing syscalls following files have been modified

The files that have been modified are:

1. user.h
2. usys.S
3. syscall.h
4. syscall.c
5. sysproc.c
6. defs.h
7. proc.c
8. proc.h

## FCFS 
first come first serve

## PBS 
priority based scheduling 

### How can this be exploited ?

When a process voluntarily relinquishes control of the CPU, it leaves the queuing
network, and when the process becomes ready again after the I/O, it is​ ​ inserted
at the tail of the same queue, from which it is relinquished earlier.
This is exploited as it will give up IO just before its time slice is over so that it will retain the same priority queue over and over again. Thus it's priority will never decrement.

