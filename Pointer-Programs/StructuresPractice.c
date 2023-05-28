#include <stdio.h>
struct student {
    char name[15];
    int roll;
    char enr[12];
} s;

int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter Enrollment No : ");
    fgets(s.enr, sizeof(s.enr), stdin);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Enrollment Number: %s\n", s.enr);

    return 0;
}