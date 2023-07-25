#include <stdio.h>

int main() 
{
    int a,b,c;
    printf("\nEnter Side 1-");
    scanf("%d",&a);
     printf("\nEnter Side 2-");
    scanf("%d",&b);
     printf("\nEnter Side 3-");
    scanf("%d",&c);
    
    if(a==b&&b==c)
    {
        printf("\n Triangle is Equilateral");
    }
    else
    {
        printf("\nTriangle is not Equilateral");
    }
    return 0;
}