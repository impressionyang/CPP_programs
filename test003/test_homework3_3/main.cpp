#include <iostream>
#include"cube.h"

using namespace std;

int main()
{
    Cube c1;
    c1.cal_v();
    cout<<"����������Ϊ:"<<c1.get_volume()
    <<endl;

    Cube c2;
    c2.cal_v();
    cout<<"����������Ϊ:"<<c2.get_volume()<<endl;

    Cube c3;
    c3.cal_v();
    cout<<"����������Ϊ:"<<c3.get_volume()<<endl;

    return 0;
}
