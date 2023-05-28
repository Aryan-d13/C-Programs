#include <stdio.h>

int main(int argc, char *argv)
{
    printf("Number Of Arguments : %d",argc);

    printf("The Arguments Are : ");
    for(int i = 0;i<argc;i++)
        printf("%s",argv[i]);
}