#include<stdio.h>
int main()
{
 float averageprofit;
 int priceofthetable=200;
 int saleprice=700;
 int workdays=10;
/*before doing this equation,a little note!!
float and int don't really want to go together.They wants to be the same type.So what we can do is in the average section try to add a value that says
float in the 1st bracket before the main bracket.This will count the variable as a float.Hence, it will do the work in a better way.However,if i don't the program \
will only count this as a integer.Not as a float or a decimal. */

 averageprofit = ((float)priceofthetable*(float)saleprice) / (float)workdays;
 printf("The averageprofit will be : $%.2f \n ",averageprofit);
return 0;
}


