#include <iostream>
#include"product.h"
using namespace std;

Product::Product(int n,int q,float p):
    num(n),quantity(q),price(p){};

void Product::total()
 {float rate=1.0;
  if(quantity>10) rate=0.98*rate;
  sum=sum+quantity*price*rate*(1-discount);
  n=n+quantity;
 }

void Product::display()
 {cout<<"�����ۿ�"<<sum<<endl;
  cout<<"ƽ���ۼ�"<<average()<<endl;
 }

float Product::average()
 {return(sum/n);}


float Product::discount=0.1;
float Product::sum=0;
int Product::n=0;
