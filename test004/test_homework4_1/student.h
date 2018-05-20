#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include<iostream>
using namespace std;
class Student
{
public:
    Student ( int n, float s ) : num(n), score(s) { }
    void change ( int n, float s )
    {
        num=n;
        score=s;
    }
    void display ( )
    {
        cout<< num <<" "<<score<<endl;
    }
private :
    int num ;
    float score ;
} ;


#endif // STUDENT_H_INCLUDED
