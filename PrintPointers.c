#include <stdio.h>
int main()
{
    int a;
    printf("Enter Value in a : ");
    scanf("%d", &a);
    int *ptr;
    ptr = &a;

    printf("Value of a : %d\n", *ptr);
    printf("Adress Of a : %d", &a);
    printf("Adress of a at pointer : %d", ptr);
    printf("Adress Of Pointer : %d", &ptr);
}