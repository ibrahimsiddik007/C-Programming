#include<stdio.h>
int main()
{
  int number;
  int product;
  printf("Enter the number: ");
  scanf("%d" , &number);

  int count = 1;
  {
      while(count <=20){
        product = number * count;
        printf("%d*%d = %d \n" , number,count,product); //printf("%d \n" , product); this can be used also here.
        count++;
      }
   return 0;
  }






}
