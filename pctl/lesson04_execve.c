#include "common.h"

extern char **environ;

int main(int argc, char *argv[])
{
    pid_t ret = my_fork();

    if (ret > 0) {
        // 父进程
        exit(-1);
    } else {
        // 子进程
        // 这里可以自定义命令行参数和环境变量
        execve("main", argv, environ);
        printf(">>>>>> subpro end <<<<<<\n");
    }
    return 0;
}
