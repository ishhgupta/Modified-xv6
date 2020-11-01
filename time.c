#include "types.h"
#include "user.h"
#include "stat.h"

int main(int argc,char *argv[])
{
    int pid;
    pid = fork();
    if(pid<0){
        printf(2,"fork failed\n");
        exit();
    }
    else if(pid == 0){
        if(argc == 1){
            printf(1,"default time command\n");
            exit();
        }
        if(exec(argv[1],argv+1)<0)
        {
            printf(2,"exec %s got failed\n",argv[1]);
            exit();
        }
    }
    else
    {
        int *wtime = (int *)malloc(sizeof(int));
        int *rtime = (int *)malloc(sizeof(int));
        waitx(wtime,rtime);
        printf(1,"time taken by %s: \n  Running time: %d, Waiting time: %d\n",argv[1],*rtime,*wtime);
    }
   
}

