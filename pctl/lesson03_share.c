#include "common.h"

void fun1()
{
    pid_t ret = my_fork();

    if (ret > 0) {
        // 父进程
        int fd = my_open("file.txt", O_RDWR | O_CREAT | O_APPEND, 0644);
        write(fd, "hello\n", 6);
    } else {
        // 子进程
        int fd = my_open("file.txt", O_RDWR | O_CREAT | O_APPEND, 0644);
        write(fd, "world\n", 6);
    }
}

void fun2()
{
    int fd = my_open("file.txt", O_RDWR | O_CREAT, 0644);
    pid_t ret = my_fork();

    if (ret > 0) {
        // 父进程
        write(fd, "hello\n", 6);
    } else {
        // 子进程
        write(fd, "world\n", 6);
    }
}

int main(int argc, char *argv[])
{
    //fun1();
    fun2();
    return 0;
}
