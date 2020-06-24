#include<string>
using namespace std;


class employee
{
    employee(string,string,double);
    void set();
    void get(double);
    void display();

private:
    string fname[20];
    string lname[20];
    double sal;

};
