#include<iostream>
#include"ass1.h"
using namespace std;

int main()
{

    employee e1("","",0);
    employee e2("","",0);

    e1.set();
    e2.set();
    e1.get(0);
    e2.get(0);

    e1.display();
    e2.display();

    return 0;
}
