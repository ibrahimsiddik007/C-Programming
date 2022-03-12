#include<stdio.h>
#include<ctype.h>
int main()
{

    char ch;
    printf("Enter the alphabet: ");
    scanf(" %c",&ch);

    if(ch >= 'A' && ch <= 'Z' ){
    printf("%c is uppercase. ",ch);

    ch = tolower(ch);
    printf("lowercase : %c.\n",ch);

}

else
{
    printf("%c is lowercase.",ch);
    printf("No conversion is done.");
}
    return (0);
}
