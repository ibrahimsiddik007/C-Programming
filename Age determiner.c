#include <stdlib.h>
int main()
{
 int age;
 int currentYear;
 int birthYear;
 printf("Enter your birthyear: ");
 scanf("%d",&birthYear);
 printf("Enter the currentyear: ");
 scanf("%d",&currentYear);
 age = currentYear - birthYear;
 printf("you are %d years old", age);
 return 0;
}
