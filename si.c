#include<stdio.h>

int main()
{
    int principle,time,interest;
    printf("Enter Priciple:-");
    scanf("%d",&principle);
    printf("\nEnter Time In Years:-");
    scanf("%d",&time);
    
    if(time==2)
    {
        interest=(principle * 4 * time)/100;
    }
    
    else if(time<=4)
    {
         interest=(principle * 6 * time)/100;

    }
    
    else if(time>4)
    {
         interest= (principle * 7 * time)/100;

    }
    
    printf("Interest Earned On The Amount Deposited is %d",interest);
    return 0;
}