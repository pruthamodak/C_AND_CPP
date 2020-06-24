#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	clrscr();
	do
	{
		if(i==6)
		break;
		else
		printf("%d",i);
		i++;
	}
	while(i<=10);
	printf("-");
	getch();
}
