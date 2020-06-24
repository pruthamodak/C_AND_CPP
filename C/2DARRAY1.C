#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2];
	clrscr();
	a[0][0]=1;
	a[0][1]=2;
	a[1][0]=3;
	a[1][1]=4;
	printf("matrix 2*2 \n\n");
	printf(" %d\t %d",a[0][0],a[0][1]);
	printf("\n\n %d\t %d",a[1][0],a[1][1]);
	getch();
}