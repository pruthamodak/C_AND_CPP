#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10];
	int i;
	clrscr();
	for(i=0;i<10;i++)
	{
		a[i]=i*i;
	}
	for(i=0;i<10;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	getch();
}



