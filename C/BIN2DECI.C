#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int num[10],n,i=0,j,sum=0,binary;
	clrscr();
	printf("\nBinary to decimal conversion:");
	printf("\nEnter 5 digit binary no.:");
	scanf("%d",&n);
	binary=n;
	while(n>0)
	{
		num[i]=n%10;
		n=n/10;
		i++;
	}
	j=i-1;
	for(i=0;i<=j;i++)
	{
		sum=sum+(num[i]*pow(2,i));
	}
	printf("\n\nBinary::%d\n\nDecimal::%d",binary,sum);
	getch();
}
