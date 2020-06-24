#include<iostream.h>
#include<conio.h>

class cricket
{
	int or,tr,tot;
	public:

	cricket(int o,int t)
	{
		or=o;tr=t;
	}
	cricket()
	{
		or=0;tr=0;
	}

	void show()
	{
		cout<<"\n\n One day: "<<or;
		cout<<"\nTest runs: "<<tr;
		tot=tr+or;
		cout<<"\n\n Total= "<<tot;
	}

	int operator +(cricket c)
	{
		int t;
		t=tot+c.tot;
		return t;
	}

	cricket operator >(cricket c)
	{
		if(tot>c.tot)
		{
			return *this;
		}
		else
		{
			return c;
		}

	}

	int operator ==(cricket c)
	{
		if(tot==c.tot)
		{
		return 1;
		}
		else
		{
		return 0;
		}
	}

};

void main()
{
	cricket kohli(120,150);
	cricket dhoni(100,120);
	cricket best;
	clrscr();

	kohli.show();
	dhoni.show();

	int total=kohli+dhoni;
	cout<<"\n\n Total runs= "<<total;

	best=dhoni > kohli;
	best.show();

	if(kohli==dhoni)
	{
		cout<<"Both are equally good";
	}
	else
	{
		cout<<"Both are not equally good";
	}
	getch();
}