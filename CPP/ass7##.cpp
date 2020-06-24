#include<iostream>

using namespace std;

void binsear(int [],int);
int s=0;
int l=10,m;
int main()
{
	
	int a[10];
	int l,m,s,n,p;
	
	
	for(int i=0;i<10;i++)
	{
		cout<<"Enter element:";
		cin>>a[i];
	}
	
	
	int c;
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
				
			}
		}
		
	}
	
	
	cout<<"Enter element you want to find:";
	cin>>p;
	binsear(a,p);
	return 0;
}

void binsear(int a[],int p)
{
//	int s=0,l=10,m;
	
		
	if(s!=(l-1))
	
	{
	
		m=(s+l)/2;	
		if(a[m]==p)
		{
			cout<<"\n "<<p<<"is found at"<<m;
			
		}
		
		else if(a[m]<p)
		{
			s=m;
			binsear(a,p);
		}
		else if(a[m]>p)
		{
			l=m;
			binsear(a,p);
			
		}
	}

	if(s==(l-1))
	{
		cout<<"\n "<<p<<" do not exist.";
	}
		
}
