#include<stdio.h>
#include<conio.h>
union employee
{
	int empid;
	float salary;
}emp;
void main()
{
	clrscr();
	printf("\n Enter empid:");
	scanf("%d",&emp.empid);
	printf("\n Enter salary:");
	scanf("%f",&emp.salary);
	printf("\n\n Employee information:");
	printf("\n Empid=%d \n Salary=%f",emp.empid,emp.salary);
	getch();
}

