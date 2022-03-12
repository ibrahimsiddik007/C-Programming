//C program to print the last digit of a number and all the other digits of it
#include<stdio.h>
void main()
{
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	int last = n%10;
	int others = n/10;
	printf("last digit: %d", last);
	printf("\nOther digits: %d", others);
}
