#include<stdio.h>
int main()
{
    float marks = 0;
    float numberEntered = 0;
    float numberoftests = 0;
    float average = 0;

    printf("Enter '0' to continue \n");
    do{
        printf("Tests : %.0f    Average: %.2f \n\n" , numberoftests,average);

        printf("\n\nEnter your test score: ");
        scanf(" %f" ,&numberEntered);

        marks += numberEntered;
        numberoftests++;
        average = marks / numberoftests;
        }while (numberEntered !=0);

        return 0;
}
