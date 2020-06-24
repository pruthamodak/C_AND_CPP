#include<iostream>
using namespace std;

int main()
{
	int a[3][3],i,j,k,l,x;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"Enter element";
			cin>>a[i][j];
			
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]%2==0)
			{
				cout<<" "<<a[i][j];
			}
		}
	}
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]%2!=0)
			{
				cout<<" "<<a[i][j];
			}
		}
	}
	cout<<"\n\n";
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	x=j+1;
			for(k=i;k<3;k++)
			{
				for(l=x;l<3;l++)
				{
					if(a[i][j]<a[k][l])
					{
						swap(a[i][j],a[k][l]);
					}
				}
				x=0;
			}
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
	return 0;
}


void swap(int &x, int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
