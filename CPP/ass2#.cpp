#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter terms";
	cin>>n;
	
	int i=0;
	cout<<i<<"\n";
	
	int j=1,l=0;
	cout<<j<<"\n";
	
	while(j<=n)
	{
		
		l=i+j;
		cout<<l<<"\n";
		i=j;
		j=l;
		
		
	}
	
	return 0;
	
	
	
}
