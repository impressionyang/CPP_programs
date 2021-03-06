#include"complex.h"
#include<iostream>
using namespace std;

Complex::Complex(){
    real=0;
    image=0;
}

Complex::Complex(double r, double i){
    real=r;
    image=i;
}

Complex operator + (Complex &c1,Complex &c2){
    return Complex(c1.real+c2.real, c1.image+c2.image);
}

Complex operator - (Complex &c1,Complex &c2){
    return Complex(c1.real-c2.real, c1.image-c2.image);
}

Complex operator * (Complex &c1,Complex &c2){
    double r=(c1.real*c2.real)-(c1.image*c2.image);
    double i=(c1.real*c2.real)+(c1.image*c2.image);
    return Complex(r, i);
}

Complex operator / (Complex &c1,Complex &c2){
    double r=( (c1.real*c2.real)+(c1.image*c2.image) )/( (c2.real*c2.real)+(c2.image*c2.image) );
    double i=( (c1.real*c2.real)-(c1.image*c2.image) )/( (c2.real*c2.real)+(c2.image*c2.image) );
    return Complex(r, i);
}

void Complex::display(){
    if(image>0){
        cout<<"("<<real<<"+"<<image<<" i)";
    }else{
        cout<<"("<<real<<image<<" i)";
    }
}
