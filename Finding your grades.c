#include<stdio.h>
int main()
{

  float Bangla,English,Physics,Chemistry,Math,Biology;
  printf("Enter your Bangla's grade : ");
  scanf(" %f",&Bangla);
  printf ("\n");
  printf("Enter your English's grade : ");
  scanf(" %f",&English);
  printf ("\n");
  printf("Enter your Physics's grade : ");
  scanf(" %f",&Physics);
  printf ("\n");
  printf("Enter your Chemistry's grade : ");
  scanf(" %f",&Chemistry);
  printf ("\n");
  printf("Enter your Math's grade : ");
  scanf(" %f",&Math);
  printf ("\n");
  printf("Enter your Biology's grade : ");
  scanf(" %f",&Biology);

  float avg = (Bangla + English + Physics + Chemistry + Math + Biology) / 6;
  printf ("\n");
  printf ("\n");
  if(avg>=80){
    printf("Your grade is A");
    }
    else if(avg>=70){
       printf("Your grade is B \n");}
    else if(avg>=60){
       printf("Your grade is C \n");}
    else if(avg>=50){
       printf("Your grade is D \n");}
    else if(avg>=40){
       printf("Your grade is E \n");}
    else{
       printf("You have failed. \n");}
    printf ("\n");
    printf ("\n");
    printf ("\n");
    return 0;
    }


