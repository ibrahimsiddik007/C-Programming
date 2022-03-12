#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
int main()
{
    int num = 1;

    do{
        if(num == 5 || num == 7){
            num++;
            continue;
             }


        printf("%d is available now \n" , num);
        num++;

        }while(num<=20);

     return 0;
    }
