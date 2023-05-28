#include <stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,3,5,5,8,5,8};

    printf("The Value At First Element : %d \n ",arr[0]);
    printf("The Value At Second Element : %d \n ",arr[1]);
    printf("The Value At Third Element : %d \n ",arr[2]);
    printf("The Value At Fourth Element : %d \n ",arr[3]);
    printf("The Value At Fifth Element : %d \n ",arr[4]);
    printf("The Value At Sixth Element : %d \n ",arr[5]);

    printf("The Adress At First Element : %d \n ",(arr + 0));
    printf("The Adress At Second Element : %d \n ",(arr+1));
    printf("The Adress At Third Element : %d \n ",(arr+2));
    printf("The Adress At Fourth Element : %d \n ",(arr+3));
    printf("The Adress At Fifth Element : %d \n ",(arr+4));
    printf("The Adress At Sixth Element : %d \n ",(arr+5));
}