//  Fibonacci series

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	int a=0,b=1,c;
	clrscr();
	printf("Enter the no :");
	scanf("%d",&n);
	printf("\nFibonacci series:");
	printf("\n%d \n%d \n",a,b);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	getch();
}


