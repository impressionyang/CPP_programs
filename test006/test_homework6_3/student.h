#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include<string>
using namespace std;

class Student                        //��������
{
public:                             //���๫�ó�Ա
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
protected :                         //���ౣ����Ա
    int num;
    string name;
    char sex;
};

class Student1: public Student              //����һ������������
{
public:
    void get_value_1()
    {
        get_value();
        cin>>age>>addr;
    }
    void display1( )
    {
        display();
        cout<<"age: "<<age<<endl;         //�����������˽�г�Ա
        cout<<"address: "<<addr<<endl;    //�����������˽�г�Ա
    }
private:
    int age;
    string addr;
};




#endif // STUDENT_H_INCLUDED