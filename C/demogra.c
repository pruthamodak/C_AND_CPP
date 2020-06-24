#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int ch,x1,x2,y1,y2;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	clrscr();

	while(ch!=6)
	{

	printf("There are 5 options for origin :");
	printf("\n1.Left-Top\n2.Right-Top\n3.Left Bottom\n4.Right Bottom\n5.Center\n6.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	clrscr();

	     if(ch==1)
		printf("\n Range is (0,0) to (639,-399)");
	     else if(ch==2)
		printf("\n Range is (0,0) to (-639,-399)");
	     else if(ch==3)
		printf("\n Range is (0,0) to (639,399)");
	     else if(ch==4)
		printf("\n Range is (0,0) to (-639,399)");
	     else if(ch==5)
		printf("\n Range is (-319,-199) to (319,199)");
	     else if(ch==6)
		exit(0);
	     else
		{
		printf("Invalid choice...Try again!!");
		continue;
		}

	     printf("\nEnter x co-ordinate for starting point:");
	     scanf("%d",&x1);
	     printf("Enter y co-ordinate for starting point:");
	     scanf("%d",&y1);
	     printf("Enter x co-ordinate for ending point:");
	     scanf("%d",&x2);
	     printf("Enter y co-ordinate for ending point:");
	     scanf("%d",&y2);

	     clrscr();

	     rectangle(0,0,639,399);
	     line(319,0,319,399);
	     line(0,199,639,199);

	     if(ch==1)
		line(x1,y1,x2,y2+798);
	     if(ch==2)
		line(639+x1,y1,x2+639,y2+798);
	     if(ch==3)
		line(x1,399+y1,x2,-399+y2);
	     if(ch==4)
		line(x1+639,y1+399,x2+639,y2-399);
	     if(ch==5)
		line(319+x1,598+y1,x2+319,y2-199);



	}
	getch();
}



