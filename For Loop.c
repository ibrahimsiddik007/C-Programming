#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int money;

        for(money=0; money<=2000; money+=10 )
        {
        printf("Total money is %d \n",money);
        }

        return 0;
}

/* This loop ensure the money to go through the process according to the rules that i set betweeen the braces.
we can also put money =1 instead of '0' .. But this will count the process from 0.
and to determine the skip of money in here or variable in the program we can make some modification in the ""money +=""
bebodhan 1 kom */

