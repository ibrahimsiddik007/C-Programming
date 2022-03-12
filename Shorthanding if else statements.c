#include<stdio.h>

int main()
{
    char lastname[20];
    printf("Enter your last name : \n");
    scanf(" %c",lastname);
    (lastname[0] < 'M') ? printf("Blue Team") : printf("Red Team");

    return 0;
}

 /* This program simply just meaning that if your last name is starting anything with the letter before 'M' it will be on Blue Team other
 wise it will be on the red team.This is just the things that I will have to keep in mind.
 and the lastname[0] is simply meaning that the 1st letter.if it was the 2nd letter it will be 1 inside the third bracket. */
