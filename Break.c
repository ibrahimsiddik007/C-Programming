#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
int main()
{
    int a;
    int b;

    printf("How many times do you want the loop to loop(max 100 times)?\n");
    scanf("%d",&b);

       {
    for(a=1; a<=100; a++){
            printf("%d\n" , a);

    if(a==b){
    break;}
    }
       }

    return 0;

}
