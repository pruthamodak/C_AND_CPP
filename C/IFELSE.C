#include<stdio.h>
#include<conio.h>
void main()
{
	float percentage;
	clrscr();
	printf("Enter your percentage:");
	scanf("%f",&percentage);
	if(percentage<35)
	{
		printf("You are fail.");
	}
	else
	{
		printf("you are pass.");
	}
	getch();
}