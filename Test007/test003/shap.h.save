#ifndef SHAP_H_INCLUDED
#define SHAP_H_INCLUDED

//定义抽象基类Shape
class Shape
{
public:
    virtual double area() const =0;            //纯虚函数
};

//定义Circle类
class Circle:public Shape
{
public:
    Circle(double r):radius(r) {}                                    //结构函数
    virtual double area() const
    {
        return 3.14159*radius*radius;
    };
protected:
    double radius;                                                 //半径
};

//定义Rectangle类
class Rectangle:public Shape
{
public:
    Rectangle(double w,double h):width(w),height(h) {}              //结构函数
    virtual double area() const
    {
        return width*height;
    }
protected:
    double width,height;                                           //宽与高
};

class Triangle:public Shape
{
public:
    Triangle(double w,double h):width(w),height(h) {}               //结构函数
    virtual double area() const
    {
        return 0.5*width*height;
    }
protected:
    double width,height;                                            //宽与高
};



#endif // SHAP_H_INCLUDED
