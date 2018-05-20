#include <iostream>
#include"complex.h"
using namespace std;

int main()
{
    Complex c1(1,2),c2(3,4),c3;
    c3=c1+c2;
    c1.display();cout<<"+";c2.display();cout<<"=";
    c3.display();
    cout<<endl;

    c3=c1+1;
    c1.display();cout<<"+ 1=";
    c3.display();
    cout<<endl;

    c3=1+c2;
    cout<<"1 +";c2.display();cout<<"=";
    c3.display();
    cout<<endl;
    return 0;
}
