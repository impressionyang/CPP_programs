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
    cout<<"����: "<<name<<endl;
    cout<<"����: "<<age<<endl;
    cout<<"�Ա�: "<<sex<<endl;
    cout<<"��ַ: "<<addr<<endl;
    cout<<"�绰: "<<phone<<endl;
    cout<<"ְ��: "<<title<<endl;
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
    cout<<"����: "<<name<<endl;
    cout<<"����: "<<age<<endl;
    cout<<"�Ա�: "<<sex<<endl;
    cout<<"��ַ: "<<addr<<endl;
    cout<<"�绰: "<<phone<<endl;
    cout<<"ְ��: "<<post<<endl;
}


Teacher_Cadre::Teacher_Cadre(){
    //��ϵͳ�Զ������޲εĹ��캯��
    cout<<"���������䡢�Ա𡢵�ַ���绰��ְ�ơ�ְ�񡢹���"<<endl;
    cin>>Teacher::name>>Teacher::age>>Teacher::sex>>Teacher::addr>>Teacher::phone>>
            Teacher::title>>Cadre::post>>wages;
}

void Teacher_Cadre::show(){
    Teacher::display();
     cout<<"ְ��: "<<post<<endl;
      cout<<"����: "<<wages<<endl;
}