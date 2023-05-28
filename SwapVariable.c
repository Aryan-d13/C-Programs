#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter First Number :");
    scanf("%d", &a);
    printf("Enter Second Number :");
    scanf("%d", &b);

    printf("a : %d", a );
    printf("\nb : %d", b);

    int c = a;
    a=b;
    b=c;
    printf("\na : %d", a);
    printf("\nb : %d", b);
}