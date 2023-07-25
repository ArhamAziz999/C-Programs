#include <stdio.h>

int main() 
{
    int days;
    printf("Enter Days In A year-");
    scanf("%d",&days);
    if(days==366)
    {
        printf("\nIt's a Leap Year");
    }
    else
    {
        printf("\nIt's not a Leap Year");
    }
    return 0;
}