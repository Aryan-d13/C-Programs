#include <stdio.h>
int main()
{
    int n[7];
    printf("Enter Elements: \n");
    for(int i =0;i<6;i++)
    {
        scanf("%i",&n[i]);
    }
    printf("At what position do you want to Insert the Element : \n");
    int position, element;
    scanf("%i",&position);
    printf("What do you want to Insert? : \n");
    scanf("%i",&element);
    for(int i = 5;i>=position-1;i--)
    {
        n[i+1] = n[i];
    }
    n[position] = element;
    for(int i =0;i<7;i++)
    {
        printf("%d ," , n[i]);
    }
}