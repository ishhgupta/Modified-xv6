#include "types.h"
#include "pstat.h"
#include "user.h"
#include "stat.h"

int main(int argc,char *argv[])
{
    if(argc != 3)
        printf(2,"Not valid number of arguments\n");
    else{
        int new_prio = atoi(argv[1]);
        int pid = atoi(argv[2]);
        set_priority(new_prio,pid);
    }
    exit();
}