#include<iostream.h>
#include<conio.h>
#include<string.h>

class icecream
{
	int a[10];
	char b[10][20];
	public:

	void get()
	{
	     //	char b[10][20]={"Chocolate","Strawberry","Sitafal","Butterscotch","Vanila","Mango","Rajbhog","Kesarbadam","Mavamalai","Apple"}
		int i=0;
	      //	char b[10][20]={"Chocolate","Strawberry","Sitafal","Butterscotch","Vanila","Mango","Rajbhog","Kesarbadam","Mavamalai","Apple"}
		while(i!=11)
		{
		cout<<"\nYou have 10 choices.";
		cout<<"\n1.Chocolate \n2.Strawberry \n3.Sitafal \n4.Butterscotch \n5.Vanila \n6.Mango \n7.Rajbhog \n8.Kesarbadam  \n9.Mavamalai \n10.Apple";
		cout<<"\nEnter your choice:";
		cin>>i;
		int b[10]={0},n,am1[10]={0};
		cout<<"No of quantities:";
		cin>>n;
		int rs=0;

		switch(i)
		{
			case 1: b[0]+=n; am1[0]+=50; rs=b[0]*am1[0]; break;
			case 2: b[1]+=n; am1[1]+=30; rs=b[1]*am1[1]; break;
			case 3: b[2]+=n; am1[2]+=35; rs=b[2]*am1[2]; break;
			case 4: b[3]+=n; am1[3]+=45; rs=b[3]*am1[3]; break;
			case 5: b[4]+=n; am1[4]+=40; rs=b[4]*am1[4]; break;
			case 6: b[5]+=n; am1[5]+=30; rs=b[5]*am1[5]; break;
			case 7: b[6]+=n; am1[6]+=25; rs=b[6]*am1[6]; break;
			case 8: b[7]+=n; am1[7]+=35; rs=b[7]*am1[7]; break;
			case 9: b[8]+=n; am1[8]+=30; rs=b[8]*am1[8]; break;
			case 10: b[9]+=n; am1[9]+=40; rs=b[9]*am1[9];
		}
		cout<<"\n\nYou have to pay:"<<rs<<"Rs...";
		}

	}
};


class juice
{

}

void main()
{
	icecream i1;
	i1.get();
	getch();
}