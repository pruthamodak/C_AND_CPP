#include<iostream>
using namespace std;

int main()
{
	int a[20];
	int l,m,s,n,p;
	cout<<"Enter terms you want:";
	cin>>n;
	
	s=0;
	l=n;
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element:";
		cin>>a[i];
	}
	int c;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
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
	m=(s+l)/2;
	
	while(s!=(l-1))
	{
		
		if(a[m]==p)
		{
			cout<<"\n "<<p<<"is found at"<<m;
			break;
		}
		
		else if(a[m]<p)
		{
			s=m;
			m=(s+l)/2;
		}
		else if(a[m]>p)
		{
			l=m;
			m=(s+l)/2;
			
		}
	}

	if(s==(l-1))
	{
		cout<<"\n "<<p<<" do not exist.";
	}
		
	return 0;
	
}
