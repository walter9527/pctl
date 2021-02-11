#include "common.h"

extern char **environ;

void zombie(char **argv)
{
    pid_t ret = fork();

    if (ret > 0) {
        // 父进程被卡住，无法释放子进程的资源，子进程就是僵尸进程
        while (1);
    } else if (ret == 0){
       execve("main", argv, environ);
    }
}


void lonely(char **argv)
{
    pid_t ret = fork();

    if (ret > 0) {
    } else if (ret == 0){
        // 父进程结束了，子进程还
        while (1);
    }
}

int main(int argc, char *argv[])
{
    //zombie(argv);
    //lonely(argv);
    return 256;
}
