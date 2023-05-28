#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter First Number : ");
    scanf("%i", &num1);
    int *ptr1 = &num1;

    printf("Enter Second Number : ");
    scanf("%i", &num2);
    int *ptr2 = &num2;

    if(*ptr1 > *ptr2)
        printf("%d is greater than %d", *ptr1, *ptr2);
    else if(*ptr1 < *ptr2)
        printf("%d is greater than %d", *ptr2, *ptr1);
    else
        printf("%d is equal to %d", *ptr1, *ptr2);
}