#include<iostream>
using namespace std;
int gcd(int,int);
int main()
{
	int a,b,c;
	cout<<"Enter any 2 nos:";
	cin>>a>>b;
	
	c=gcd(a,b);
	cout<<"GCD= "<<c; 
	return 0;
}

int gcd(int i,int j)
{	
	int c;
	if(i>j)
	c=gcd(i-j,j);
	else if(i<j)
	c=gcd(i,j-i);
	else if(i==j)
	return i;
	else 
	return 1;
	
}
