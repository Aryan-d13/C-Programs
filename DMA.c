#include <stdio.h>
#include <stdlib.h>

int main()
{
    //malloc
    int *ptr;
    int n;
    printf("Enter N : \n");
    scanf("%i", &n);

    ptr = (int*) malloc(n * sizeOf(int));
    //if(ptr == NULL)
    //{
       // printf("Memory Did Not Get Alocatted");
        //exit(0);
    //}
    for(int i = 0; i<n;i++)
    {
        printf("Enter Element : \n");
        scanf("%i", &ptr[i]);
    }
    for(int i = 0; i<n;i++)
    {
        printf("Elements : ",*(&ptr[i]));
        
    }
}

