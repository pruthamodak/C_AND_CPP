#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	float a, b;
	clrscr();
	printf(" 1) Addition \n 2) subtraction \n 3) Multiplication \n 4) Divide \n 5) Exit \n Enter your choice:");
	scanf("%c",&ch);
	printf("\n\n Enter value of a:");
	scanf("%f",&a);
	printf(" Enter value of b:");
	scanf("%f",&b);
	switch(ch)
	{
		case '1':
			printf("\n\n Addition=%f",a+b);
			break;
		case '2':
			printf("\n\n Subtraction=%f",a-b);
			break;
		case '3':
			printf("\n\n Multiplication=%f",a*b);
			break;
		case '4':
			printf("\n\n divide=%f",a/b);
			break;
		case '5':
			exit(0);

		default:
			printf("Invalid choice");
	}
	getch();
}