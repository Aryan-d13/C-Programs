#include <stdio.h>
struct Student
{
    char name[50];
    char mob[11];
    char enrol[13];
    int roll;
};
void display(struct Student *ptr);

int main()
{
    struct Student s1;
    printf("Enter Name: \n");    
    gets(s1.name);

    printf("Enter Mobile No.\n");
    gets(s1.mob);

    printf("Enter Enrol :\n");
    gets(s1.enrol);

    printf("Enter Roll No.\n");
    scanf("%d",&(s1.roll));
    
    display(&s1);

}
void display(struct Student *ptr)
{
    printf("Name : %s\n",ptr->name);
    printf("Mobile No. : %s\n",ptr->mob);
    printf("Roll No. : %d\n",ptr->roll);
    printf("Enrollment No : %s\n",ptr->enrol);
}

