//NSU In-Lab Assignment.

#include<stdio.h>
int main()
{   
	int x;
	printf("Enter number in 5 digits : ");
	scanf("%d",&x);
	
	int a = x%10;
	  x = x/10;
	   int b = x%10;
         x = x/10;
     	  int c = x%10;
    		x = x/10;
    	     int d =x%10;
               x = x/10;


    int  sum = a+b+c+d+x;
    printf("Your sum is : %d",sum);
    return 0;

}   