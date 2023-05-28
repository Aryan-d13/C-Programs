#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, *ptr, sum;
    i=1;char choice = 'Y';
    printf("Enter Number : \n");
        scanf("%i",&ptr[0]);
    sum = *(&ptr[0]);
    do
    {
        ptr = (int*)malloc(4 * sizeof(int));
        printf("Enter Number : \n");
        scanf("%i",&ptr[i]);
        sum = sum + *(&ptr[i]);
        printf("Sum : %d\n", sum);
        printf("Do You Wanna Continue(Y/N) : \n");
        scanf("%c", &choice);
        free(ptr);
    } while (choice != 'N');
    
}