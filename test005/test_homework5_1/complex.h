#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
class Complex{
private:
    double real;
    double image;
public:
    Complex();
    Complex(double r,double i);
    friend Complex operator + (Complex &c1,Complex &c2);
    friend Complex operator - (Complex &c1,Complex &c2);
    friend Complex operator * (Complex &c1,Complex &c2);
    friend Complex operator / (Complex &c1,Complex &c2);
    void display();
};


#endif // COMPLEX_H_INCLUDED
