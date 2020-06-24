#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[10];
};
void main()
{
	struct student s1;
	clrscr();
	printf("\nEnter roll no:");
	scanf("%d",&s1.rollno);
	printf("\nEnter name:");
	scanf("%s",&s1.name);
	printf("\n\nStudent info: \n Roll no=%d \n Name=%s",s1.rollno,s1.name);
	getch();
}