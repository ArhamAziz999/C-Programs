#include<stdio.h>

int main()
{
    int cost, quantity, amount, discount, net_amount;
    
    printf("\nEnter cost of the product:");
    scanf("%d", &cost);
    printf("\nEnter quantity of the product:");
    scanf("%d", &quantity);

    amount= cost * quantity;
    discount= 0.1 * amount;
    net_amount= amount - discount;

    printf("\nThe amount of the product is %d, Discount is %d and Net amount to be paid is %d", amount, discount, net_amount);
    return 0;

}