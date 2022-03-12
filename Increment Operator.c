#include<stdio.h>
int main()

{
    int a = 20 , b = 10 , answer;
    answer = ++a * b;
    printf("Your result is %d \n",answer);
    //the reason to put '++a' is to increment the value before it runs its calculation.It is called a pre-increment operator.

    a = 20 , b = 10 , answer;
    answer = a++ * b;
    printf("Your result is %d \n",answer);
    //putting "a++" will make sure that it runs its calculation and do the incrementation later.it is called a post- increment operator.
    //It means nothing totally.The answer will be the calculation itself.






/* A note that if we add ++a or a++ without placing it . It will basically run like nothing changed. adding only 1.

example :

*/
    a = 20;
    printf("%d \n", a++);
    a = 20;
    printf("%d \n", ++a);
}

