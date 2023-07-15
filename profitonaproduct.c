#include<stdio.h>

int main()
{
    int Cost_price, Selling_price,Profit;
    printf("\nEnter Cost Price Of A Product-");
    scanf("%d",&Cost_price);

    printf("\nEnter Selling Price Of a Product-");
    scanf("%d",&Selling_price);

    Profit= Selling_price - Cost_price;
    printf("\nSeller Got A Profit of %drs On Selling The Product\n\n",Profit);
    return 0;

}