#include<stdio.h>
 
int main()
{
   int a, b, sum,diff;
 
   printf("Enter two numbers to add\n");
   scanf("%d%d",&a,&b);
 
   sum = a + b;
 
   printf("Sum of entered numbers = %d\n",sum);
   diff = a - b;
   printf("Difference of the entered numbers =%d\n",diff);
 
   return 0;
}


