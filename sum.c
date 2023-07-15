#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("\nEnter Three Numbers:\n\n");
    scanf("%d %d %d",&a,&b,&c);
    d=a+b+c;
    printf("\nSum of %d,%d and %d is %d\n\n",a,b,c,d);
    
    float avg;
    avg=d/3;
    printf("\nAverage of %d,%d and %d is %f\n\n",a,b,c,avg);
    return 0;
}