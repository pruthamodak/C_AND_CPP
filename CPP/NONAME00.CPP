#include<iostream.h>
#include<conio.h>

class cal
{
	int a,b;

	void input()
	{
		cout<<"Enter any 2 no:";
		cin>>a>>b;
	}
	int add()
	{
		return(a+b);
	}
	int sub()
	{
		return(a-b);
	}
};
void main