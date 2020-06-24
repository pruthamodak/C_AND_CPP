#include<iostream>
#include"complex.h"
using namespace std;

void operator >> (istream &pru,complex &c)
{
	cout<<"\n Enter Real:";
	pru>>c.real;
	cout<<"\n Enter imaginary:";
	pru>>c.img;
	
}

void operator << (ostream &aks,complex c)
{
	aks<<"\n\n Real:"<<c.real<<"  Img:"<<c.img;
	
}

complex operator * (int a,complex c)
{
	complex t;
	t.real=a*c.real;
	t.img=a*c.img;
	return t;
}

complex complex ::operator * (complex c)
{
	complex t;
	t.real=real*c.real;
	t.img=img*c.img;
	return t;
}

complex complex ::operator * (int a)
{
	complex t;
	t.real=real*a;
	t.img=img*a;
	return t;
}



