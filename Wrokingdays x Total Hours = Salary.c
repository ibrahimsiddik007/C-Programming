#include<stdio.h>
int main()

{
    int person_number,working_hours;
    float amount_one_hour,total_salary;
    printf("enter the employee number : ");
    scanf("%d", &person_number);
    printf("Enter the working days :");
    scanf("%d", &working_hours);
    printf("Enter the amount one hour :");
    scanf("%f" , &amount_one_hour);
    total_salary = amount_one_hour * working_hours;
    printf("Month end salary is : %.2f \n" , total_salary);
    return 0;





}
