#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("square root of the number is : %f & cube of the number is : %.2f ",sqrt(a) , pow(a,3));
    return 0;

}
