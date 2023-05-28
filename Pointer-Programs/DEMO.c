#include <string.h>
#include <stdio.h>
struct Employee
{
    char name[50];
    char mob[15];
    int salry;
    char email[50];
};

int main()
{
    struct Employee *ptr;
    struct Employee e1;
    ptr = &e1;
    printf("Enter Name : \n");    
    gets(e1.name);

    printf("Enter Mob : ");
    gets(e1.mob);

    printf("Enter Email : \n");
    gets(e1.email);

    printf("Enter Salary : \n");
    scanf("%d", &e1.salry);

    

    printf("Mobile Number : %s \n Name: %s \n Email ID : %s \n Salary : %d " ,(*ptr).mob, (*ptr).name, (*ptr).email, (*ptr).salry);

    

    

}