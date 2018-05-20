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

Complex operator + (int a,Complex &c2){
    return Complex(a+c2.real,c2.image);
}

Complex operator + (Complex &c1,int b){
    return Complex(c1.real+b, c1.image);
}



void Complex::display(){
    if(image>0){
        cout<<"("<<real<<"+"<<image<<" i)";
    }else{
        cout<<"("<<real<<image<<" i)";
    }
}
