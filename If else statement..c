#include<stdio.h>
int main()

{
   int age;
   char gender;

   printf("What is your age? \n");
   scanf(" %d", &age);

   printf("What is your gender? m/f \n");
   scanf(" %c" , &gender);

   if(age>=18){
   printf("You may enter this website");

        if(gender=='m'){
        printf("bro");}
           else{
           printf("Hi sis! \n");}

   }else{
       printf("Get out bruh!!!");
   }
   return 0;

}
