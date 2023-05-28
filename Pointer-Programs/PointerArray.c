#include <stdio.h>
int main()
{
    char arr[7][5] = {"One","Two","Three","Four","Five","Six","Seven"};

    int i;

    int *ptr[7];
    int *p = &arr[0];
    for(int i =0;i<7;i++)
        ptr[i] = &arr[i];
    for(int i =0;i<7;i++)
    {
        printf("Value For at Index %d is %2s\n",i,arr[i]);
        printf("Adress For %2s at Index %d is %u By use of Pointer ptr\n",arr[i],i,ptr[i]);
        printf("Adress For %2s at Index %d is %u By use of Pointer p\n",arr[i],i,*p);
        p+=5;
    }    

}