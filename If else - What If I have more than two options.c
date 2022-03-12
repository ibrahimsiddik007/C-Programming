#include<stdio.h>
int main()
{

  float Bangla,English,Physics,Chemistry,Math,Biology;
  printf("Enter your Bangla's grade : ");
  scanf(" %f",&Bangla);
  printf("Enter your English's grade : ");
  scanf(" %f",&English);
  printf("Enter your Physics's grade : ");
  scanf(" %f",&Physics);
  printf("Enter your Chemistry's grade : ");
  scanf(" %f",&Chemistry);
  printf("Enter your Math's grade : ");
  scanf(" %f",&Math);
  printf("Enter your Biology's grade : ");
  scanf(" %f",&Biology);

  float avg = (Bangla + English + Physics + Chemistry + Math + Biology) / 6;
  if(avg>80){
    printf("Your grade is A");
    }
    else if(avg>70){
       printf("Your grade is B");}
    else if(avg>60){
       printf("Your grade is C");}
    else if(avg>50){
       printf("Your grade is D");}
    else if(avg>=40){
       printf("Your grade is E");}
    else{
       printf("Your grade is F");}
    printf ("\n");
    printf ("\n");
    printf ("\n");
    return 0;
    }


