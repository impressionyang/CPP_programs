#include <iostream>
#include"student.h"

using namespace std;

int main( )
{
    Student1 stud1;                      //stud1是派生类student1类的对象
    stud1.get_value_1();                 //调用派生类对象stud1的公用成员函数
    stud1.display1( );                   //调用派生类对象stud1的公用成员函数
    return 0;
}
