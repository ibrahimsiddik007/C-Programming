#include<stdio.h>
int main()
{
    int age;
// it is like in the math. less than equal,not less than equal,greater than equal,not greater than equal,greater than,less than//
//you have to use specified symbol according to your need.//

    printf("What is your age? \n");
    scanf("%d",&age);

    if(age >= 18){
    printf("You may enter into this link.",age);
    }

    if(age < 18){
    printf("You can't enter into this link.",age);
    }

    return 0;
}
