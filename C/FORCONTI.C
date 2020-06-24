#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0;
	clrscr();
	for(i=0;i<=9;i++)
	{
		if(i==5)
		continue;
		else
		printf("%d",i);
	}
	printf("-");
	getch();
}