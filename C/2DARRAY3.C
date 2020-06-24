#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,arr[2][2];
	clrscr();
	printf("Enter value in array:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n2*2 matrix= square value of entered elements.\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d \t",arr[i][j]*arr[i][j]);
		}
		printf("\n");
	}
	getch();
}
