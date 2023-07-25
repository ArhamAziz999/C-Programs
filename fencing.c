#include <stdio.h>

int main() 
{
   int length,breadth,perimeter,amount,type;
   printf("Enter length of the rectangulaer field-");
   scanf("%d",&length);
   printf("Enter breadth of the rectangular field-");
   scanf("%d",&breadth);
   perimeter=2*(length+breadth);
   printf("The Available Choices Are:-\n1.TypeA\n2.TypeB\n3.TypeC\n");
   printf("Enter The Type You Want To See-");
   scanf("%d",&type);
   if(type==1)
   {
       amount=perimeter*10;
   }
   if(type==2)
   {
       amount=perimeter*15;
   }
   if(type==3)
   {
       amount=perimeter*12;
   }
   
   printf("The Cost Of Desired Fencing is %d ",amount);
   
   
    return 0;
}