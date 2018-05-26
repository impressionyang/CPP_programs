#include <iostream>
#include"shap.h"
using namespace std;

//提前声明
void printArea(const Shape &s);

int main()
{
    Circle circle(10);
    cout<<"圆的面积=";
    printArea(circle);
    Rectangle rectangle(5,8);
    cout<<"矩形的面积=";
    printArea(rectangle);
    Triangle triangle(4,7);
    cout<<"三角形的面积=";
    printArea(triangle);
    return 0;
}

//输出面积的函数
void printArea(const Shape &s)
{
    cout<<s.area()<<endl;
}
