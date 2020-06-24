#include<iostream>

using namespace std;

int main()
{
	long double amt;
	int rs,ps;
	
	cout<<"Enter amount:";
	cin>>amt;
	cout<<"\n";
	
	rs=int(amt);
	ps=(amt-rs)*100;
	cout<<"RS:"<<rs<<"\n";
	cout<<"PS:"<<ps;
	return 0;
}
