#ifndef TEACHER_H_INCLUDED
#define TEACHER_H_INCLUDED
#include<string>
using namespace std;

class Teacher{
protected:
    string name;
    int age;
    char sex;
    string addr;
    long phone;
    string title;
public:
    Teacher();
    Teacher(string na,int ag,char se,string ad,long ph,string ti);
    void display();
};

class Cadre{
protected:
    string name;
    int age;
    char sex;
    string addr;
    long phone;
    string post;
public:
    Cadre();
    Cadre(string na,int ag,char se,string ad,long ph,string po);
    void display();
};

class Teacher_Cadre:public Teacher,public Cadre{
    protected:
    double wages;
public:
    Teacher_Cadre();
    void show();
};


#endif // TEACHER_H_INCLUDED
