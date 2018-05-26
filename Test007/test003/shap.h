#ifndef SHAP_H_INCLUDED
#define SHAP_H_INCLUDED

//����������Shape
class Shape
{
public:
    virtual double area() const =0;            //���麯��
};

//����Circle��
class Circle:public Shape
{
public:
    Circle(double r):radius(r) {}                                    //�ṹ����
    virtual double area() const
    {
        return 3.14159*radius*radius;
    };
protected:
    double radius;                                                 //�뾶
};

//����Rectangle��
class Rectangle:public Shape
{
public:
    Rectangle(double w,double h):width(w),height(h) {}              //�ṹ����
    virtual double area() const
    {
        return width*height;
    }
protected:
    double width,height;                                           //�����
};

class Triangle:public Shape
{
public:
    Triangle(double w,double h):width(w),height(h) {}               //�ṹ����
    virtual double area() const
    {
        return 0.5*width*height;
    }
protected:
    double width,height;                                            //�����
};



#endif // SHAP_H_INCLUDED
