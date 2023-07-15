#include<stdio.h>

int main()

{
    int l,b;
    printf("Enter Length Of The Cardboard-");
    scanf("%d", &l);
    printf("Enter Breadth Of Cardboard-");
    scanf("%d",&b);

    (l>b)? printf("Cardboard Is Rectangle In Shape") : printf("Cardboard Is Square In Shape");
    return 0;
}
