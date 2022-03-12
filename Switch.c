#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    switch(number){
        case 1:
        printf("Sunday\n");
        break;

        case 2:
        printf("Monday\n");

        case 3:
        printf("Tuesday\n");
        break;

        case 4:
        printf("Wednesday\n");

        case 5:
        printf("Thursday\n");
        break;

        case 6:
        printf("Friday\n");
        break;

        case 7:
        printf("Saturday\n");
        break;

        default:
            printf("Invalid Number.");

    }

    return 0;

}
