#include<iostream.h>
#include<conio.h>
#include<string.h>

class employee
{
	char f[10],l[10];
	double sal,ysal,fsal;
	public:

	employee(char f[],char l[],double sal)
	{
		strcpy(this->f,f);
		strcpy(this->l,l);
		this->sal=sal;
	}

	void set()
	{
		cout<<"\n\nEnter your first name:";
		cin>>f;
		cout<<"\nEnter your last name:";
		cin>>l;
		cout<<"\nEnter monthly salary:";
		cin>>sal;
	}

	void get()
	{
		cout<<"\n\n Empoyee's Data:"<<"\n First name:"<<f<<"\n Last name:"<<l;
		if(sal<0)
		{
		sal=0;
		}
		cout<<"\n Monthly salary:"<<sal;
		ysal=sal*12;
		cout<<"\n\n Yearly salary:"<<ysal;
		fsal=ysal+(ysal*0.1);
		cout<<"\n\n After 10% raise in salary....Final sal:"<<fsal;

	}

};

void main()
{
	employee e1("","",0);
	employee e2("","",0);

	clrscr();

	e1.set();
	e1.get();

	e2.set();
	e2.get();

	getch();
}