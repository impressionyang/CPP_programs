#include"teacher.h"
#include<iostream>
using namespace std;
Teacher::Teacher(){
    name="0";
    age=0;
    sex='0';
    addr="0";
    phone=0;
    title="0";
}

Teacher::Teacher(string na,int ag,char se,string ad,long ph,string ti):name(na),
                age(ag),sex(se),addr(ad),phone(ph),title(ti){}

void Teacher::display(){
    cout<<"姓名: "<<name<<endl;
    cout<<"年龄: "<<age<<endl;
    cout<<"性别: "<<sex<<endl;
    cout<<"地址: "<<addr<<endl;
    cout<<"电话: "<<phone<<endl;
    cout<<"职称: "<<title<<endl;
}
Cadre::Cadre(){
    name="0";
    age=0;
    sex='0';
    addr="0";
    phone=0;
    post="0";
}

Cadre::Cadre(string na,int ag,char se,string ad,long ph,string po):name(na),
                age(ag),sex(se),addr(ad),phone(ph),post(po){}

void Cadre::display(){
    cout<<"姓名: "<<name<<endl;
    cout<<"年龄: "<<age<<endl;
    cout<<"性别: "<<sex<<endl;
    cout<<"地址: "<<addr<<endl;
    cout<<"电话: "<<phone<<endl;
    cout<<"职务: "<<post<<endl;
}


Teacher_Cadre::Teacher_Cadre(){
    //让系统自动调用无参的构造函数
    cout<<"姓名、年龄、性别、地址、电话、职称、职务、工资"<<endl;
    cin>>Teacher::name>>Teacher::age>>Teacher::sex>>Teacher::addr>>Teacher::phone>>
            Teacher::title>>Cadre::post>>wages;
}

void Teacher_Cadre::show(){
    Teacher::display();
     cout<<"职务: "<<post<<endl;
      cout<<"工资: "<<wages<<endl;
}
