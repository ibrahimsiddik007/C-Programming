#include<stdio.h>
int main()
{

    printf("Hello! This is an app for determining your age.\n");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("To start checking your age please enter the current year first and then input your birth year .");

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");


    int age,currentYear,birthYear;
    printf("Enter the current year: ");
    scanf("%d" , &currentYear );

    printf("\n");

    printf("\n");

    printf("Enter your birth year: ");
    scanf("%d" , &birthYear );

    printf("\n");
    printf("\n");

    age= currentYear-birthYear;
    printf("You are %d years old" , age);
    return 0;


}
