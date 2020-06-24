#include<stdio.h>
#include<graphics.h>

void main()
{
   int gd=DETECT,gm;

   initgraph(&gd,&gm,"C:/TurboC4/TC/BGI");
   line(0,0,50,50);

   getch();

   closegraph();

}