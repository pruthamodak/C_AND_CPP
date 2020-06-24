#include<stdio.h>
#include<conio.h>
void main()
{
	float per;
	clrscr();
	printf("Enter your percentage:");
	scanf("%f",&per);
	if(per>=70)
	{
		printf("Distintion");
	}
	else if(per<70 && per>=60)
	{
		printf("First class");
	}
	else if(per<60 && per>=50)
	{
		printf("Second class");
	}
	else if(per<50 && per>=35)
	{
		printf("Third class");
	}
	else
	{
		printf("Fail");
	}
	getch();
}

