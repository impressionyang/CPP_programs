# include <iostream>
# include "student.h"                    //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()              //�����ⶨ��display�ຯ��
{ cout<<"num:"<<num<<endl;
 cout<<"name:"<<name<<endl;
cout<<"sex:"<<sex<<endl;
}

void Student::set_value(){
    cout<<"��ֱ�����ѧ����ѧ�ţ��������Ա�"<<endl;
    cin>>num>>name>>sex;
}
