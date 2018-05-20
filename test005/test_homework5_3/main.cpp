#include <iostream>
#include"matrix.h"
using namespace std;

int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[2][3]={{2,3,4},{5,6,7}};

    Matrix m1(a),m2(b),m3;
    m3=m1+m2;
    m1.display();
    cout<<endl;
    m2.display();
    cout<<endl;
    m3.display();
    return 0;
}
