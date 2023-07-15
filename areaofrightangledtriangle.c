#include<stdio.h>

int main()
{
    int base, height;
    float area;
    printf("\nEnter base:");
    scanf("%d", &base);
    printf("\nEnter height:");
    scanf("%d", &height);

    area=0.5 * base * height;
    printf("\nArea Of Right Angled Triangle Is %.2f\n\n",area);
    return 0;


}