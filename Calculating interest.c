#include<stdio.h>
int main()
{


int pageview = 0;
pageview = pageview + 1;
printf("Total views :  %d \n",pageview);
pageview = pageview + 1;
printf("Total views :  %d \n",pageview);
pageview = pageview + 1;
printf("Total views :  %d \n",pageview);

float balance = 2200.50;
balance *= 1.5;
//you can also use the method balance = balance*1.1 (it means the same.)
printf("Total balance: %f \n",balance);
balance *= 1.5;
printf("Total balance: %f \n",balance);
balance *= 1.5;
printf("Total balance: %f \n",balance);

return 0;


}
