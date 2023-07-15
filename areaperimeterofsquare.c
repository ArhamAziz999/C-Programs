#include<stdio.h>

int main()
{
    int side, area, perimeter;
    printf("\nEnter side of the square-");
    scanf("%d",&side);
    
    area= side * side;
    perimeter= 4 * side;
    printf("\nArea of square is %d and its perimeter is %d", area, perimeter);
    return 0;
}
