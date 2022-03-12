#include<stdio.h>
int main()
{
    int dividend,divisor,quotient,remainder;
    printf("Enter dividend :");
    scanf("%d",&dividend);
    printf("Enter divisor: ");
    scanf("%d",&divisor);
    //computing question in this step

    quotient = dividend / divisor;
    remainder= dividend % divisor;

    // % is used to compute remainder.fucking memorize it!!!!!!!

    printf("Quotient = %d",quotient);
    printf("\n");
    printf("Remainder = %d",remainder);
    return 0;
}
