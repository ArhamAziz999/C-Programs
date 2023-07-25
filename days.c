#include<stdio.h>

int main()
{
    int day;
    printf("Enter A Day-");
    scanf("%d",&day); 
    if(day==1)
    {
        printf("Day Is Monday");
    }
    else if(day==2) 
    {
        printf("Day Is Tuesday");
    }
   else if(day==3)
    {
        printf("Day Is Wednesday");  
    }
    else if(day==4)
    {
        printf("Day Is Thursday");
    }
    else if(day==5)
    {
        printf("Day Is Friday");
    }
    else if(day==6)
    {
        printf("Day Is Saturday");
    }
    else if(day==7)
    {
       printf("Day Is Sunday");
    }
    else
    {
        printf("Error: Please Enter A Day Between 1-7");
    }
    return 0;
}