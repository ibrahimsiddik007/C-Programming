#include<stdio.h>
#include<math.h>
#define PI 3.14169
int main()

{
	double area,radius,circumference;
	printf("Enter the radius of the circle: ");
	scanf("%lf",&radius);

	area = PI*pow(radius,2);
	circumference = 2*PI*radius;

	printf("Your area is : %.2f ", area);
	printf("\nYour circumference is : %.2f",circumference);


    return(0);

}
