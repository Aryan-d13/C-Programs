#include <stdio.h>
int main()
{
    int arr[10] = {8,4,3,6,2,1,9,6,3,1}; 
    int *p;
    p = &arr[0];
    int j =9;
    for(int i =0;i<10/2;i++)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }

    for(int i =0;i<10;i++)
        printf("%d,",arr[i]);

}