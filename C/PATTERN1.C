/*
0
01
010
0101
01010  */

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=5;i++)
	{
		k=0;
		for(j=1;j<=i;j++)
		{
			if(k%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
			k++;
		}
			printf("\n");
	}

	getch();
}
