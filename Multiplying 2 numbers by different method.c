#include<stdio.h>
int main()
{
    double x,y,product;
    printf("Enter your first number: ");
    scanf("%lf",&x);
    printf("Enter your second number: ");
    scanf("%lf",&y);
    product=x*y;
    printf("Your result is : %.2lf",product);
    return 0;
}
