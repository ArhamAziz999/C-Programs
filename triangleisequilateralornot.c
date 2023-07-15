#include<stdio.h>

int main()

{
    int a,b,c;
    printf("Enter 1st Side-");
    scanf("%d", &a);
    printf("Enter 2nd Side-");
    scanf("%d", &b);
    printf("Enter 3rd Side-");
    scanf("%d", &c);

    (a==b && a==c)? printf("Triangle Is Equilateral") : printf("Triangle Is Not Equilateral");
    return 0;

}