#include<stdio.h>

int main()
{
    int Radius;
    float Area, Circumference;
    
    printf("\nEnter Radius:\n\n");
    scanf("%d",&Radius);

    Area=3.14 * Radius * Radius;
    Circumference=2 * 3.14 * Radius;
    printf("\nArea Of Circle Is %f And Its Circumference Is %f\n\n",Area,Circumference);
    return 0;
}