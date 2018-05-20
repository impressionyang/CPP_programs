#include <iostream>
#include"product.h"

using namespace std;

int main()
 {
     Product p1(101,5,23.5),p2(102,12,24.56),p3(103,100,21.5);
   Product Prod[3]={p1,p2,p3};
   for(int i=0;i<3;i++){
    Prod[i].total();
   }

   Product::display();
   return 0;
 }
