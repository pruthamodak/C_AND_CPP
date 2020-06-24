#include<stdio.h>
#include<conio.h>
struct book
{
	char bookname[20];
	char auther[10];
	int pages;
	float cost;
}b1;
void main()
{
	clrscr();
	printf("Entre book name:");
	scanf("%s",&b1.bookname);
	printf("\nEnter auther name:");
	scanf("%s",&b1.auther);
	printf("\nEnter no of pages:");
	scanf("%d",&b1.pages);
	printf("\nEnter the cost of book:");
	scanf("%f",&b1.cost);
	printf("\n\n Bookname=%s \n Auther name=%s \n Pages=%d \n cost=%f",b1.bookname,b1.auther,b1.pages,b1.cost);
	getch();
}
