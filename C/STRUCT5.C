#include<stdio.h>
#include<conio.h>
struct student
{
	char name[10];
	char school[10];
	int age;
	long phoneno;
}p1;
void main()
{
	clrscr();
	printf("\nEnter your name:");
	scanf("%s",&p1.name);
	printf("\nEnter your school name:");
	scanf("%s",&p1.school);
	printf("\nEnter your age:");
	scanf("%d",&p1.age);
	printf("\nEnter your phone no.:");
	scanf("%ld",&p1.phoneno);
	printf("\nStudent's information:");
	printf("\n%s \n%s \n%d \n%ld",p1.name,p1.school,p1.age,p1.phoneno);
	getch();
}
