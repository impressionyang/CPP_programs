#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include<string>
using namespace std;
class Teacher;
class Student{
private:
    int num;
    string name;
    char sex;
public:
    friend Teacher;
    Student();
    Student(int n,string nam,char s);
    void display();
};

class Teacher{
private:
    Student s1;
    double salary;
public:
    Teacher(Student &get,double s);
    void display();
};


#endif // STUDENT_H_INCLUDED
