#include<stdio.h>
#include<conio.h>
struct data
{
	char fname[10];
	char lname[10];
}record;
void main()
{
	clrscr();
	printf("Enter first name:");
	scanf("%s",&record.fname);
	printf("\nEnter last name:");
	scanf("%s",&record.lname);
	printf("\nYour first name is %s.",record.fname);
	printf("\nYour last name is %s.",record.lname);
	getch();
}
