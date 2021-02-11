#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[])
{
    printf(">-------argv--------<\n");
    char **p = argv;
    while (p[0] != NULL) {
        printf("%s\n", *p++);
    }

    printf(">-------env--------<\n");
//    p = environ;
//    while (p[0] != NULL) {
//        printf("%s\n", *p++);
//    }

    printf(">--------end-------<\n");

    //while (1);
    return 20;
}
