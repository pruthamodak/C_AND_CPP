#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b;
	clrscr();
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	/*  conditional operator */
	(a>b)?printf("maximum=%d",a):printf("maximum=%d",b);
	getch();
}