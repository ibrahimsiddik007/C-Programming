#include<stdio.h>
int main()
{
    char name[20] = "Ibrahim Siddik Antor";
    printf("My name is %s" , name);

    printf("\n");
    printf("\n");
    printf("\n");

    name[10] = 'b';
    printf("My name is %s", name);

    printf("\n");
    printf("\n");
    printf("\n");

    char fish[10] = "Hilsha";
    printf("My favorite food is %s \n" ,fish);

    printf("\n");
    printf("\n");

    strcpy (fish , "Ice Cream");
    printf("My favorite food is %s" ,fish);



    return 0;

}


