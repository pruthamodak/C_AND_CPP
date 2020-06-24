#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a1[2][2],a2[2][2];
	clrscr();
	printf("Enter values in array");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter a1[%d][%d]=",i,j);
			scanf("%d",&a1[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter a2[%d][%d]=",i,j);
			scanf("%d",&a2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d\t",(a1[i][j]+a2[i][j]));
		}
		printf("\n");
	}
	getch();
}
