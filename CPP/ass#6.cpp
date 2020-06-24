
#include<iostream>
using namespace std;

long int sum(long int);
long int s;


int main()
{
	long int i,j,n;
	cout<<"Enter no:";
	cin>>n;
	i=sum(n);
	cout<<i;
	return 0;
}

long int sum (long int n)
{
	int r;
	;
	if(n>=1)
	{
	
	r=n%10;
	s=s+r;
	return sum(n/10);
	
	}
	else
	return s;
}
