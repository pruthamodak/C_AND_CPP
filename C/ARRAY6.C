#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int num[10],i,min,max,search,n,flag;
	clrscr();
	printf("\n Operations on array elements:");
	while(n)
	{
		printf("\n\n****************\n");
		printf("\n1:To enter 10 integer elements in an array.");
		printf("\n2:To display the array elements.");
		printf("\n3:To find the minimum number.");
		printf("\n4:To find the maximum number.");
		printf("\n5:To search an element.");
		printf("\n6:Exit");
		printf("\n\n****************\n");
		printf("\nEnter your choice:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("\nEnter 10 valus in array:");
				for(i=0;i<10;i++)
				{
					printf("\n\nEnter no %d=",i+1);
					scanf("%d",&num[i]);
				}
				getch();
				clrscr();
				break;
			case 2:
				printf("\nYour array elements are:");
				for(i=0;i<10;i++)
				{
					printf("\n%d",num[i]);
				}
				getch();
				clrscr();
				break;
			case 3:
				min=num[0];
				for(i=0;i<10;i++)

					if(num[i]<min)
					min=num[i];
				printf("\nminimum no =%d",min);
				getch();
				clrscr();
				break;
			case 4:
				max=num[0];
				for(i=0;i<10;i++)
					if(num[i]>max)
					max=num[i];
				printf("\nmaximum no =%d",max);
				getch();
				clrscr();
				break;
			case 5:
				printf("\n\nEnter number to search in array:");
				scanf("%d",&search);
				flag=0;
				for(i=0;i<10;i++)
					if(num[i]==search)
					{
						flag=1;
						break;
					}
				if(flag==1)
					printf("\nNumber is found in array.");
				else
					printf("\nNumber is not found in array.");
				getch();
				clrscr();
				break;
			case 6:
				exit(0);
			default:
				printf("\n\nEnter a valid choice.");
		}
	}
	getch();
}









