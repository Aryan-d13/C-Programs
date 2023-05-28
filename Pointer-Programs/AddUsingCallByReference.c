#include <stdio.h>
int sumOFNumbers(int*, int*);
int main(){
    int num1,num2;
    printf("Enter First Number : ");
    scanf("%i", &num1);
    
    printf("Enter Second Number : ");
    scanf("%i", &num2);

    int sum = sumOFNumbers(&num1, &num2);
    printf("Sum : %d",sum);
}
sumOFNumbers(int *ptr1, int *ptr2)
{
    return (*ptr1 + *ptr2);
}