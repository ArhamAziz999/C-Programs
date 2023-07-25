#include <stdio.h>

int main() 
{
    int cost,quantity,amount;
    float discount,afd;
    printf("\nEnter cost of the product-");
    scanf("%d",&cost);
    printf("\nEnter the quantity of the product-");
    scanf("%d",&quantity);
    amount=cost * quantity;
    if(amount<1000)
    {
        discount=0;
    }
    
    if(amount==1000)
    {
        discount=0.1 * amount;
    }
    
    if(amount==3000)
    {
        discount=0.2 * amount;
    }
    
    if(amount>=5000)
    {
        discount=0.3 * amount;
    }
    
    afd=amount-discount;
    printf("AMOUNT AFTER DISCOUNT IS %.2f",afd);
    

    return 0;
}