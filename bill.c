#include <stdio.h>

int main() 
{
    int units,bill;
    printf("Enter the units consumed-");
    scanf("%d",&units);
    
    if(units<=200)
    {
        bill=units * 0; 
    }

    
    if(units>200&&units<=400)
    {
        bill=units * 4;
    }
    
    
    if(units>400&&units<=700)
    {
        bill=units * 6;
    }
    
    
     if(units>700)
    {
        bill=units * 8;
  
    }
    
    printf("\nBILL TO BE PAID IS %d",bill);

    return 0;
}