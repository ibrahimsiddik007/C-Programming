#include<stdio.h>
int main()
{
   float celsius;
   float farenhite;
   printf("Enter the celsius output :");
   scanf("%f",&celsius);
   //you can also use the int . The result will also be same.

   farenhite = ((9*celsius)+160)/5;
   printf("Your result is: %f",farenhite);

   return 0;


}
