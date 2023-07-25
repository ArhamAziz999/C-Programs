// Program To Find Greatest in Four Numbers
#include <stdio.h>

int main() 
{
   int a, b, c, d, f;
   printf("Enter the numbers-");
   scanf("%d %d %d  %d",&a,&b,&c,&d);
   f=(a>b&&a>c&&a>d)? a: (b>a&&b>c&&b>d)? b : (c>a&&c>b&&c>d)? c : d;
   printf("GREATEST OF %d, %d, %d, %d, is %d",a,b,c,d,f);

    return 0;
}