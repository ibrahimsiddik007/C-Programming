#include<stdio.h>
int main()
{
int a,b,max;
scanf("%d %d",&a,&b);
printf("Your two number is :%d %d ",a,b);

max = (a>b) ? a : b;
     printf("\n%d is the largest number.",max);

  return 0;
}
