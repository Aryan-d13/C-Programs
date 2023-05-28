#include <stdio.h>
int main(){
    printf("Enter First Number : \n");
    int num;
    scanf("%i",&num);
    
    printf("Enter Second Number : \n");
    int num2;
    scanf("%i",&num2);

    int *ptr1 = &num;
    int *ptr2 = &num2;

    int sum = *ptr1 + *ptr2;
    printf("Sum : %d",sum);
}