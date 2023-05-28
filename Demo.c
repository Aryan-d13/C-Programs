#include <stdio.h>
int main()
{
    char arr[5][5] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    char arr2[5][100];
    printf("For Arr : ")
    for(int i =0;i<12;i++)
        printf("At Index %d : %2s\n",i,arr[i]);
    


    printf("For Arr2 : ");
    for(int i = 0;i<5;i++)
    {
        printf("Enter Element At Index %d",i);
        scanf("%s" arr2[i]);
    }

    for(int i =0;i<5;i++)
        printf("At Index %d : %2s\n",i,arr2[i]);

}
    