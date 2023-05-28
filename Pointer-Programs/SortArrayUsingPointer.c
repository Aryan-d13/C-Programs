#include <stdio.h>
int main()
{
    int arr[10] = {8,4,3,6,2,1,9,6,3,1}; 
    int *p;
    p = &arr[0];

    for(int i =1;i<=10;i++)
    {
        for(int j =0;j<10;j++)
        {
            int a;
            if(*(p+j)>*(p+i))
            {
                a = *(p+j);
                *(p +j) = *(p+i);
                *(p+i) =a; 
            }
        }
            
    }

    for(int i =0;i<10;i++)
        printf("%d,",arr[i]);

}