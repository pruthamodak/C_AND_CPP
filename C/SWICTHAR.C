#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	float r, l, b, area;
	clrscr();
	printf(" 1) Area of circle \n\n 2) Area of square \n\n 3) Area of rectangle \n\n 4) exit \n\n Enter your choice:");
	scanf("%c",&ch);
	switch(ch)
	{
		case '1':
			printf("\n\n Enter radius:");
			scanf("%f",&r);
			area=3.14*r*r;
			printf("\n\n Area of circle= %f",area);
			break;
		case '2':
			printf("\n\n Enter length:");
			scanf("%f",&l);
			area=l*l;
			printf("\n\n Area of square= %f",area);
			break;
		case '3':
			printf("\n\n Enter length:");
			scanf("%f",&l);
			printf("\n\n Enter depth:");
			scanf("%f",&b);
			area=l*b;
			printf("\n\n Area of rectangle= %f",area);
			break;
		case '4':
			exit(0);
		default:
			printf("\n\nInvalid choice.");
	}
	getch();
}



