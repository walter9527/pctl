#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    pid_t pid = getpid();
    pid_t ppid = getppid();

    uid_t uid = getuid();
    gid_t gid = getgid();

    printf("pid = %d\n", pid);
    printf("ppid = %d\n", ppid);
    printf("uid = %d\n", uid);
    printf("gid = %d\n", gid);

    while (1);
    return 0;
}
