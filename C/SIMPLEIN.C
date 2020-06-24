#include<stdio.h>
#include<conio.h>
void main()
{
	int p, n;
	double r, si;
	clrscr();
	printf("Enter amount:");
	scanf("%d",&p);
	printf("Enter rate:");
	scanf("%lf",&r);
	printf("Enter year:");
	scanf("%d",&n);
	si=p*r*n/100;
	printf("your simple interest is: %lf",si);
	getch();
}