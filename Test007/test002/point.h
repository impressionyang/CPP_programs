#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include<iostream>
using namespace std;
class Point

{
public:
    Point(float a,float b):x(a),y(b) {}
    ~Point();
private:
    float x;
    float y;
};

class Circle:public Point
{
public:
    Circle(float a,float b,float r):Point(a,b),radius(r) {}
    ~Circle();
private:
    float radius;
};

Point::~Point()
{
    cout<<"executing Point destructor"<<endl;
}

Circle::~Circle()
{
    cout<<"executing Circle destructor"<<endl;
}


#endif // POINT_H_INCLUDED
