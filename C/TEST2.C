#include<stdio.h>
#include<conio.h>
#include "test.c"

void main()
{
	extern a,b;
	int c=a+b;
	printf("%d",c);

	getch();
}