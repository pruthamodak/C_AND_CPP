#include<stdio.h>
#include<conio.h>
struct employee
{
	char empname[30];
	int empid;
	float basicsal,netsal;
	float hra,da,ta,pf;
}emp;
void main()
{
	clrscr();
	printf("\nEnter the details of an employee:\n");
	printf("\nEnter name:");
	scanf("%s",&emp.empname);
	printf("\nEnter id number:");
	scanf("%d",&emp.empid);
	printf("\nEnter basic salary:");
	scanf("%f",&emp.basicsal);
	printf("\nEnter hra:");
	scanf("%f",&emp.hra);
	printf("\nEnter da:");
	scanf("%f",&emp.da);
	printf("\nEnter ta:");
	scanf("%f",&emp.ta);
	printf("\nEnter pf:");
	scanf("%f",&emp.pf);
	emp.netsal=emp.basicsal+(emp.da+emp.hra+emp.ta)-emp.pf;
	printf("\nYour net salary is= %f ",emp.netsal);
	getch();
}

