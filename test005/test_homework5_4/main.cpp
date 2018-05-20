#include <iostream>
#include"student.h"
using namespace std;

int main()
{
    Student s1(1001,"233",'f');
    Teacher t1(s1,233333);
    s1.display();
    t1.display();
    return 0;
}
