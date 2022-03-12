#include<stdio.h>
int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    //sizeof evaulates the size of a variable...
    printf("Size of int: %lu bytes\n",sizeof(intType));
    printf("Size of float: %lu bytes\n",sizeof(floatType));
    printf("Size of double: %lu bytes\n",sizeof(doubleType));
    printf("Size of charType: %lu bytes\n",sizeof(charType));
    return 0;

}
