#include <stdio.h>

int main() 
{
    int a=75,b=50,c;
    c=a;
    a=b;
    b=c;
    printf("a=%d,b=%d",a,b);
    
    return 0;
}