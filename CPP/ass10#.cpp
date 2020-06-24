#include<iostream>
using namespace std;

void reverse (char *a)
{
	char ch;
	if(*a!='\0')
	{
		ch=*a;
		a++;
		reverse(a);
		cout<<ch;
			
	}	

}

int main()
{
	char b[50];
	cout<<"Enter string:";
	cin>>b;
	reverse(b);
	return 0;	
}
	

