#include<iostream>
using namespace std;
void print(int);
int main()
{
	int i=1;
	print(i);
	return 0;
}
 void print(int i)
{	
	if(i<=100)
	{

	cout<<i<<"\n";
	i++;
	print(i);
	}
	
}
