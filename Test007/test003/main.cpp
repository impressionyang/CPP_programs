#include <iostream>
#include"shap.h"
using namespace std;

//��ǰ����
void printArea(const Shape &s);

int main()
{
    Circle circle(10);
    cout<<"Բ�����=";
    printArea(circle);
    Rectangle rectangle(5,8);
    cout<<"���ε����=";
    printArea(rectangle);
    Triangle triangle(4,7);
    cout<<"�����ε����=";
    printArea(triangle);
    return 0;
}

//�������ĺ���
void printArea(const Shape &s)
{
    cout<<s.area()<<endl;
}
