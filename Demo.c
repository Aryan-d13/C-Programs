#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("Enter Number Of Elements to put in a Array : \n");
    scanf("%i",&n);
    ptr = (int*)malloc(n * sizeof(int));

    for(int i =0;i<n;i++)
    {
        printf("Enter %dth Number : \n",i);
        scanf("%i",&ptr[i]);
    }
    for(int i =0; i<n;i++)
        printf("%d \n",*(&ptr[i]));
}