#include<stdio.h>
#include<math.h>
float square (float x);

int main()
{
 	float m,n;
 	printf("/nEnter a number to find a square : ");
 	scanf("%f",&m);
 	n = square (m);
 	printf("The square of the given number %f is %f",m,n);
}
float square(float x)
{
	float q;
   q = x*x;
   return (q);
}