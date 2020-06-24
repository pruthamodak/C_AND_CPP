#include<iostream>
#include"arrope.h"
using namespace std;

void number::operator [](int size)
{
	this->size=size;
	n=new int[size];	
} 

void number::input()
{
	for(i=0;i<size;i++)
	{
		cout<<"Enter no:";
		cin>>n[i];
		
	}
}

void number::show()
{
	int sum=0;
	for(i=0;i<size;i++)
	{
		cout<<" "<<n[i];
		sum+=n[i];
	}
	cout<<"\n\n Sum: "<<sum;
}


