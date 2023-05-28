#include <stdio.h>
int main(){
    printf("Enter The Number : ");
    int num, num2;
    scanf("%i",&num);

    int *p = &num;
    printf("Address Of Num : %d",p);
    printf("Address Of Num : %d",&p);
    printf("Value Of Num : %d",*p);
    p = &num2;
    printf("Adress Of Num2 : %d \n",p);
    printf("Adress Of Num2 : %p \n",&p);
    printf("Value Of Num2 : %d \n",*p);
}