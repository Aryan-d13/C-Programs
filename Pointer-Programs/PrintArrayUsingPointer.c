#include <stdio.h>
int main(){
    int arr[10] = {1,8,6,4,5,6,9,8,7,8};

    int *ptr = arr;

    for(int i = 0;i<10;i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
}