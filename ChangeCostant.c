#include <stdio.h>
int main()
{
    const int a  = 23;

    printf("%d", a);

    int *p = &a;
    printf("Before changing values : \na : %d", a);

    *p = 20;

    
    printf("\nAfter changing values : \na : %d", a);
}