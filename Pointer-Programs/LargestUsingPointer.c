#include <stdio.h>
int main()
{
    int c[10] = {2,4,8,3,4,2,7,5,9,3};
    int *p = &c[0];
    int smallest = 9;
    for(int i =0;i<10;i++)
    {
        int a = c[i];
        int b = *p;
        if(a<smallest)
            smallest = b;
        p++;
    }
    printf("Smallest Element : %d",smallest);
}