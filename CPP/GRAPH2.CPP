#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{

	int gd=DETECT,gm;
	int c=50,r=50;
	initgraph(&gd,&gm,"..//bgi");
	char ch;

	while(ch!=27)
	{
		ch=getch();
		cleardevice();
		switch(ch)
		{
			case 80: r+=2;
				if(r>500)
				r=-50;
				break;
			case 72: r-=2;
				if(r<-50)
				r=500;
				break;
			case 77: c+=2;
				break;
			case 75: c-=2;
				break;
		}
	rectangle(c,r,c+20,r+20);
	}
	getch();
}

