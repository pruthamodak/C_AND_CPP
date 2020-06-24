#include<stdio.h>
#include<conio.h>
void main()
{
	int w=10, x=20, y=30, z;
	clrscr();
	printf(" w=%d \n x=%d \n y=%d",w,x,y);
	printf("\n values after increment and decrement operator:\n");
	//pre increment
	y=++x;
	//post decrement
	z=w--;
	printf("--- \n w=%d \n x=%d \n y=%d \n z=%d",w,x,y,z);
	x=(z++) + (++z);
	printf(" \n w=%d \n x=%d \n y=%d \n z=%d",w,x,y,z);
	getch();
}
