#include<iostream>
using namespace std;

int main()
{
	int a[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\n Enter the number:";
			cin>>a[i][j];
			
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j];
		}
		cout<<"\n";
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i+j)==0)
			cout<<a[i][j];
		}
	
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i+j)==1)
			cout<<a[i][j];
		}
	
	}
	
	for(i=2;i>=0;i--)
	{
		for(j=2;j>=0;j--)
		{
			if((i+j)==2)
			cout<<a[i][j];
		}
	
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i+j)==3)
			cout<<a[i][j];
		}
	
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i+j)==4)
			cout<<a[i][j];
		}
	
	}
	return 0;
	
}
