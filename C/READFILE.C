#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<graphics.h>

int xs,ys,xe,ye;


int* convertint(char line[])
{
	int i=0,j=0,k=0,c=0;
	int a[2]={0};
	i+=2;
			k=i;
			while(line[i]!=' ')
			{
				i++;
				c++;
			}
			i=k;
			c--;
			while(line[i]!=' ')
			{
				a[0]=a[0]+((int)(line[i])-48)*pow(10,c);
				c--;
				i++;
			}
			i++;
			k=i;
			c=0;
			while(line[i]!='\n')
			{
				i++;
				c++;
			}
			i=k;
			c--;
			while(line[i]!='\n')
			{
				a[1]=a[1]+((int)(line[i])-48)*pow(10,c);
				c--;
				i++;
			}

	return a;
}

void main()
{

   char line[50][50];
	int i=0,j=0;
	int *a;




   FILE *fp;


   int gd=DETECT,gm;

   initgraph(&gd,&gm,"C:\\TurboC4\\TC\\BGI");

   clrscr();


   fp = fopen("test1.in","r"); // read mode

   if( fp == NULL )
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }



   while(fgets(line[j],sizeof(line),fp)!='\0')
	{

		i=0;
		if(line[j][i]=='1')
		{
			a=convertint(line[j]);
			xs=a[0];
			ys=a[1];
 //			printf("\nx1=%d y1=%d",xs,ys);

		}
		else if(line[j][i]='2')
		{
			a=convertint(line[j]);
			xe=a[0];
			ye=a[1];
   //			printf("\nx1=%d y1=%d x2=%d y2=%d",xs,ys,xe,ye);
			xs=xe;ys=ye;
		}
	//		printf("%s",line);

      j++;
	}
   fclose(fp);
  getch();
    //	return 0;
}

