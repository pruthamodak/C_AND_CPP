#include<iostream>
using namespace std;

class complex
{
	public:
	friend void operator >> (istream&,complex&);
	friend void operator << (ostream&,complex);
	friend complex operator * (int,complex);
	complex operator * (complex);
	complex operator *(int);
	
	private:
		int real,img;
};
