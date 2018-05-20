#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include<string>
using namespace std;

class Student                        //声明基类
{
public:                             //基类公用成员
    void get_value()
    {
        cin>>num>>name>>sex;
    }
    void display( )
    {
        cout<<"num: "<<num<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"sex: "<<sex<<endl;
    }
protected :                         //基类保护成员
    int num;
    string name;
    char sex;
};

class Student1: protected Student              //声明一个保护派生类
{
public:
    void get_value_1()
    {
        get_value();
        cin>>age>>addr;
    }
    void display1( )
    {
        cout<<"num: "<<num<<endl;         //引用基类的保护成员
        cout<<"name: "<<name<<endl;       //引用基类的保护成员
        cout<<"sex: "<<sex<<endl;         //引用基类的保护成员
        cout<<"age: "<<age<<endl;         //引用派生类的私有成员
        cout<<"address: "<<addr<<endl;    //引用派生类的私有成员
    }
private:
    int age;
    string addr;
};




#endif // STUDENT_H_INCLUDED
