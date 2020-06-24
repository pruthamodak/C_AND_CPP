#include<iostream.h>
#include<conio.h>

void main()
{
	int a[3][3],b[3][3],i,j,k;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"Enter no:";
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
			a[0][0]=(a[1][1]*a[2][2])-(a[2][1]*a[1][2]);
			a[1][1]=



