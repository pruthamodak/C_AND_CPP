#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	float f;
	char c;
	long l;
	short s;
	double d;
	long double ld;
	clrscr();
	printf("\n size operators:\n");
       printf("\n data type \t\t size");
	printf("\n integer\t\t %d",sizeof(i));
	printf("\n float\t\t\t %d",sizeof(f));
	printf("\n character\t\t %d",sizeof(c));
	printf("\n long\t\t\t %d",sizeof(l));
      printf("\n short\t\t\t %d",sizeof(s));
	printf("\n double\t\t\t %d",sizeof(d));
	printf("\n long double\t\t %d",sizeof(ld));
	getch();
}
