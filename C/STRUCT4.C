#include<stdio.h>
#include<conio.h>
struct entry
{
	char fname[20],mname[20],lname[20];
}list[6];
void main()
{
	int i;
	clrscr();
	for(i=0;i<6;i++)
	{
		printf("\nEnter your first name:");
		scanf("%s",&list[i].fname);
		printf("\nEnter your middle name:");
		scanf("%s",&list[i].mname);
		printf("\nEnter your last name:");
		scanf("%s",&list[i].lname);
	}
	for(i=0;i<6;i++)
	{
		printf("\n\nName: %s %s %s",list[i].fname,list[i].mname,list[i].lname);
	}
	getch();
}
