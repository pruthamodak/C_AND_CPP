#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i=0,decimal,n,num[10];
	clrscr();
	printf("\nEnter decimal no:");
	scanf("%d",&n);
	decimal=n;
	while(n>0)
	{
		num[i]=n%2;
		n=n/2;
		i++;
	}
	i--;
	printf("\n\nDecimal=%d \nBinary=",decimal);
	for(;i>=0;i--)
	{
		printf("%d",num[i]);
	}

	getch();
}
