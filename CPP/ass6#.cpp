#include<iostream>

using namespace std;

int main()
{
	int i,j,m,n;
	cout<<"Enter 2 nos: 1st>2nd::";
	cin>>j>>i;
	m=j;
	
	for(n=0;n<i;n++)
	{
		j++;
		m--;
	}
	cout<<"Sum:"<<j;
	cout<<"  Sub:"<<m;
	return 0;
	
	
	
}
