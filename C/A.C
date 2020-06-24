#include<stdio.h>
#include<conio.h>
void main()
{
	int no[10],max=0,i;
	clrscr();
	printf("\nMaximun number in array elements:\n");
	printf("\n\nEnter 10 integer values:\n");
	for(i=0;i<10;i++)
	{
		printf("\nnumber=%d:",i+1);
		scanf("%d",&no[ia]);
	}
	max=no[0];
	for(i=0;i<10;i++)
	{
		if(max<no[i])
		max=no[i];
	}
	printf("\nmaximum number:=>%d",max);
	getch();
}
