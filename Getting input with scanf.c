#include<stdio.h>
int main()
{
char name[20];
char crush[15];
int numberofkids;

printf("Enter your name:",name);
scanf("%s", name);
printf("Enter your's crush name:",crush);
scanf("%s", crush);
printf("Enter the number of kids you wanna have: ", numberofkids);
scanf("%d",&numberofkids);
printf("\n");
printf("%s is gonna marry %s and have %d kids",name,crush,numberofkids);
return 0;


}
