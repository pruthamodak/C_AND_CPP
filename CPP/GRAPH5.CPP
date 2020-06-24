#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..//bgi");
	int c=1,f=1;

	while(!kbhit())
	{
		settextstyle(1,0,3);
		outtextxy(c,150,"PRUTHA");
		if(f==1)
		{
			if(c<=520)
			c++;
			else
			f=0;
		}
		if(f==0)
		{
			if(c>=1)
			c--;
			else
			f=1;
		}
		delay(5);
		cleardevice();
	}
	getch();
	closegraph();
}
