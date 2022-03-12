#include<stdio.h>
int main()
{
    int number;
    int count;
    printf("Enter the number for your multiplication table :");
    scanf("%d", &number);

    count= 10;
    while(count>0){
        int product = number * count;
        printf("%d * %d = %d \n" , number,count,product);
        count--;
        }

    return 0;


}
