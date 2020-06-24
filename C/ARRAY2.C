#include<stdio.h>
#include<conio.h>
void main()
{
	int  a[10];
	int i;
	clrscr();
	a[0]=10;
	a[2]=20;
	a[5]=30;
	a[3]=a[0]+a[5];
	printf("Printing the array elements\n");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	getch();
}

