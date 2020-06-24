#include<iostream>
#include"complex.cpp"
using namespace std;

int main()
{
	complex c1,c2,c3,c4,c5;
	
	cin>>c1;
	cin>>c2;
	
	cout<<c1;
	cout<<c2;
	
	c3=c1*c2;
	cout<<c3;
	
	c4=c3*2;
	cout<<c4;
	
	c5=5*c1;
	cout<<c5;
	
	return 0;
	
}
