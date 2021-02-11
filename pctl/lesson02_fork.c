#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    printf("before fork ");

    pid_t ret = fork();
    if (ret > 0) {
        printf("parent PID = %d\n", getpid());
        printf("parent ret = %d\n", ret);
    } else if (ret == 0){
        sleep(1);
        printf("child PID = %d\n", getpid());
        printf("child ret = %d\n", ret);
    }


    printf("after fork\n\n");
    
//    while (1);
    return 0;
}
