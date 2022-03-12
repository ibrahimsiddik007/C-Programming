//NSU Lab Manual - HW : 2
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,inside_root,divisor,plus,minus;
       printf("Enter the value of a: ");
        scanf("%d",&a);
          printf("Enter the value of b: ");
            scanf("%d",&b);
                printf("Enter the value of c: ");
                    scanf("%d",&c);

       inside_root = sqrt(b*b - 4*a*c);
       divisor = 2*a;


       plus = (-b + inside_root)/divisor;
       minus = (-b - inside_root)/divisor;

       printf("If we take plus sign the answer is : %.2f\n  ",plus);
       printf("If we take minus sign the answer is : %.2f",minus);

    return 0;




}


