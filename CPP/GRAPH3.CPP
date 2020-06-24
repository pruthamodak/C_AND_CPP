#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>


void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..//bgi");

	line(1,250,40,250);
	line(40,250,25,235);
	line(40,250,25,265);

	circle(400,250,10);
	cout<<"\n Press any key to throw arraw:";
	getch();
	int c=40;

	while(c<=400)
	{
	line(c-39,250,c,250);
	line(c,250,c-15,235);
	line(c,250,c-15,265);

	circle(400,250,10);
	c+=2;
	delay(30);
	cleardevice();
	}
	int r=10;
	int i=0;
	while(r<=350)
	{
	setcolor(i);
	i++;
	circle(400,250,r);
	r=r+10;
	delay(80);
	}

	getch();
	closegraph();
}





