#include <unistd.h> 
#include <stdio.h> 
#include <sys/wait.h> 

extern char **environ;

int main(int argc, char *argv[])
{
    pid_t ret = fork();

    if (ret > 0) {
        // 父进程
        int status = 0;
        
        // 子进程的进程终止状态
        wait(&status);
        printf("status = %d\n", status);

        if (WIFEXITED(status)) {
//            status = 5120
//            exited: 20
            printf("exited: %d\n", WEXITSTATUS(status));
        } else if (WIFSIGNALED(status)) {
//            status = 15
//            signaled: 15
            printf("signaled: %d\n", WTERMSIG(status));
        }
    } else if (ret == 0) {
        // 子进程
        
        execve("a.out", argv, environ);
    }
    return 0;
}
