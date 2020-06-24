#include<stdio.h>
#include<conio.h>
void main()
{
	char name[10];
	char city[10];
	char add[20];
	clrscr();
	printf("Enter your name:");
	scanf("%s",&name);
	printf("\nEnter your city:");
	scanf("%s",&city);
	printf("\nEnter your address:");
	scanf("%s",&add);
	printf("\n\n name=%s",name);
	printf("\n city=%s",city);
	printf("\n address=%s",add);
	getch();
}
