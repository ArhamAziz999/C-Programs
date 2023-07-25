#include <stdio.h>

int main() 
{
    int salary,years;
    float bonus;
    printf("Enter The Salary Of Employee-");
    scanf("%d",&salary);
    printf("\nEnter The Years Employee Has Worked In The Company-");
    scanf("%d",&years);
    if(years>=5)
    {
        if(salary>5000)
        bonus=.8 * salary;
        
        else
        bonus=.6 * salary;
    }
    
    else if(years<5)
    {
        bonus=.5 * salary;
    }
    
    printf("Bonus given is %.2f",bonus);
    return 0;
}