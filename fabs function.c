#include<stdio.h>
#include<math.h>
int main()
{
//finding the area of the circle but using fabs.
    
    double area,radius,result;
	printf("Enter the radius of the circle : ");
	scanf("%lf",&radius);

	area = 3.14169*radius*radius;
     	result = ceil(area);
     	printf("Your area is : %f",result);

     	return (0);
}