#include<stdio.h>
int main()

{
    int day = 1;
    float amount = .01;
    while(day <= 31){
    //if we don't add the previous line the loop will go forever.
    printf("Day : %d \t amount: %.2f \n",day,amount);
    amount *= 2;
    day++;

    }

    return 0;

}
