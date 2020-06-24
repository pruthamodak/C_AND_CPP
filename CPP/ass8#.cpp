#include<iostream>
using namespace std;

int main()
{
	int r,n,i;
	cout<<"Enter number whose nth root to be find:";
	cin>>r;
	cout<<"Enter n:";
	cin>>n;
	int m;
	
	for(i=2;i<=(r/n);i++)
	{
		m=r;
		while(m%i==0)
		{
			m=m/i;
		}
		if(m==1)
		{
			break;
		}
		
	}
	
	cout<<"\n "<<r<<"'s "<<n<<"th root is :"<< i;
}
