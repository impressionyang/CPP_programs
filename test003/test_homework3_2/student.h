#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
class Student                    //类声明
{
public :
    void display ( ) ;               //公用成员函数原型声明
    void set_value();
private :
    int num ;
    char name[20] ;
    char sex ;
} ;


#endif // STUDENT_H_INCLUDED
