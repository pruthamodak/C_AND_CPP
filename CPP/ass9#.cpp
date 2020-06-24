#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int i,j=0,k=0,n;
	
	cout<<"Enter no:";
	cin>>n;
	
	for(i=1;n/pow(2,i)!=0;i++)
	{
		k=k+n/pow(2,i);
	}
	
	for(i=1;n/pow(5,i)!=0;i++)
	{
		j=j+n/pow(5,i);
	}
	
	if(k<j)
	{
		cout<<k<<" no of trailing zeros.";
	}
	else
	{
		cout<<j<<" no of trailing zeros.";
	}
	
	return 0;
}
