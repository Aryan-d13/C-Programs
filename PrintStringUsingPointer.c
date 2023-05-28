#include <stdio.h>
int main()
{
    char str[100];
    char *p;
    printf("Enter Any String : \n");
    fgets(str, 100, stdin);
    p = str;
    
    printf("Input String is ");
    while(*p != '\0'){
        printf("%c", *p++);
    }
    
}