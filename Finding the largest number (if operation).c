#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the 1st Number:");
    scanf("%d",&a);
    printf("\nEnter the second number:");
    scanf("%d",&b);
    printf("\nEnter the third number:");
    scanf("%d",&c);
       if(a>b && a>c){
        printf("\n%d is the largest number.",a);
       }
       if(b>c && b>a){
        printf("\n%d is the largest number.",b);
       }
       if(c>a && c>b){
        printf("\n%d is the largest number.",c);
       }
       if(a==b && a==c){
        printf("\nAll numbers are equal.");
       }
       return 0;

}


