// Simple If statement
#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	clrscr();
	printf("Enter number:");
	scanf("%d",&number);
	if(number<0)
	{
		printf("your number is -ve");
	}
	getch();
}
