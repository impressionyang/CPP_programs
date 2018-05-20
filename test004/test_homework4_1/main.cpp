#include<iostream>
#include"student.h"
using namespace std;

void fun(Student &stud,int a,float b){
    stud. change (a, b) ;
    stud. display ();
}

int main()
{
    Student stud (101, 78.5);
    stud.display();
    fun(stud,101,88.5);

    return 0;
}
