#include <stdio.h>

int main() 
{
    int a=75,b=50;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d,b=%d",a,b);
    
    return 0;
}