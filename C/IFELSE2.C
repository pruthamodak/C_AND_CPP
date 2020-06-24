#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter only single character (y/n) :");
	scanf("%c",&ch);
	if(ch=='y')
	{
		printf("Hello");
	}
	else
	{
		printf("Good bye");
	}
	getch();
}
