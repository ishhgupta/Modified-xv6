//// created to make stats for each process for ps command

struct proc_stat {
    int pid;                ///pid of each process
    char state[100];        ///state of process whether running or sleeping or other
    int rtime;              ///total time for each process run    
    int wtime;              /// time for which process has been waiting    
    int n_run;              /// numbers of times the process was picked up to run    
    int cur_q;              /// current queue which was assigned
    int q[5];               ///Number of ticks the process has received at each of the 5 queues
};