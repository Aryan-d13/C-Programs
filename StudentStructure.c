#include <stdio.h>
struct Student
{
    char mobNo[13];
    char name[50];
    int scholarNo;
    char enrollmentNo[15];
}aryan;

int main()
{
    printf("\t\t\t\tEnter Details For Student\t\t\t\t \n");
    printf("Enter Name Of Student :  \n");
    gets(aryan.name);
    printf("Enter Mobile No Of Student :  \n");
    gets(aryan.mobNo);
    printf("Enter Enrollment Number Of Student :  \n");
    gets(aryan.enrollmentNo);
    printf("Enter Scholar Number Of Student : \n ");
    scanf("%i",&aryan.scholarNo);
    
    
    printf("Name : %s \n", aryan.name);
    printf("Enrollment Number : %s \n", aryan.enrollmentNo);
    printf("Scholar Number : %d \n",aryan.scholarNo);
    printf("Mobile No : %s \n",aryan.mobNo);
}
