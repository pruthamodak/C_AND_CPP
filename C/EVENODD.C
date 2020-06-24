#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf("Your no is even");
	}
	else
	{
		printf("Your no is odd");
	}
	getch();
}