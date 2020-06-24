#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter only single character:");
	scanf("%c",&ch);
	if(ch>='0' && ch<='9')
	{
		printf("It is a digit");
	}
	else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("It is an alphabet.");
	}
	else
	{
		printf("It is a special character.");
	}
	getch();
}