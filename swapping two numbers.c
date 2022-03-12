#include<stdio.h>
int main()

{


double first,second,temp;
printf("Enter first number: ");
scanf("%d",&first);
printf("Enter second number: ");
scanf("%d",&second);

//value of first is assigned to temp
temp=first;
//value of second is assigned to first
first=second;
//value of temp is assigned to second.
second=temp;

//%.2lf displays number up to 2 decimals
printf("\n");
printf("After swapping,first number %d",first);
printf("\n");
printf("After swapping,second number %d",second);
return 0;
}
