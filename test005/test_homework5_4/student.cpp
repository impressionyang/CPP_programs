#include"student.h"
#include<iostream>
#include<string>
using namespace std;
Student::Student(){
    num=0;
    name="default";
    sex=0;
}
Student::Student(int n,string nam,char s){
    num=n;
    name=nam;
    sex=s;
}
void Student::display(){
    cout<<num<<" "<<name<<" "<<sex<<endl;
}

Teacher::Teacher(Student &get,double s){
    s1=get;
    salary=s;
}

void Teacher::display(){
    cout<<s1.num<<" "<<s1.name<<" "<<s1.sex<<" "<<salary<<endl;
}

