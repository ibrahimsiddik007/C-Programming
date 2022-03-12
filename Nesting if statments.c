#include<stdio.h>
int main()
{
    int age;
    char gender;
    printf("What is your age? \n");
    scanf(" %d",&age);


    printf("What is your gender? (m/f) \n");
    scanf(" %c",&gender);
//always remember to create a space between the quotation on scanf.

    if(age >= 18)
    {
    printf("You may enter into this link.",age);


    if(gender == 'm'){
    printf("Hop on dude!");}
    if(gender == 'f'){
    printf("Ok lady");}
    }
    if(age < 18){
    printf("You can't enter into this link.",age);}

    return 0;
}
