#include<iostream>
#include<string>
#include"ass1.h"
using namespace std;

employee::employee(string fname,string lname,double sal)
{
    strcpy(this->fname=fname);
    strcpy(this->lname=lname);
    this->sal=sal;
}

void employee::set()
{
    cout<<"Enter firstname:";
    cin>>fname;
    cout<<"\nEnter Lastname:";
    cin>>lname;
    cout<<"\nEnter your salary:";
    cin>>sal;
}

void employee::get(double fsal)
{
    cout<<"Employee's yearly sal:"<<sal*12;
    fsal=(sal*10/100)+sal;
    cout<<"Employee's final sal:"<<fsal;
    return fsal;
}

void employee::display()
{

    cout<<"\n\nFirst Name:"<<fname;
    cout<<"\nLast Name:"<<lname;
    cout<<"\nMonthly Salary:"<<sal;
    cout<<"\nYearly salary without raise:"<<sal*12;
    cout<<"\nYearly salary with raise of 10 persent:"<<fsal;
}


