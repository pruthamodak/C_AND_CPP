#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{

	int gd=DETECT,gm;  //gd=graphics detail,,,gm=graphics mode.
	initgraph(&gd,&gm,"..//bgi");
	setcolor(YELLOW);
	line(50,50,200,50);  //starting column,starting row,end column,end row.
	line(50,50,50,200);

	rectangle(60,60,100,100); // column,row,width,height
	circle(230,130,60); //center column, center row,radius
	getch();
	cleardevice();


    /*	int i;
	for(i=1;i<=7;i++)
	{

	settextstyle(i,0,6); // style,vertical 1/horizontal 0,size.
	outtextxy(100,150,"Prutha");
	getch();
	cleardevice();
	}   */



    /*	int i;
	for(i=1;i<=10;i++)
	{
	setfilstyle(i,MAGENTA);
	bar(100,200,200,100); //column,row,width,height.
	getch();
	cleardevice();
	}     */


     /*	setcolor(YELLOW);
	setfillstyle(1,BLUE);
	circle(200,200,100);
	floodfill(200,200,YELLOW);
	*/

     /*	arc(200,200,90,360,100); //  center column ,center row,start angle.end angle,radius.

	pieslice(200,200,90,360,100);*/


	 putpixel(100,100,YELLOW);





	getch();
	closegraph();

}