#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED
class Product
 {public:
   Product(int n,int q,float p);
   void total();
   static float average();
   static void display();

  private:
   int num;
   int quantity;
   float price;
   static float discount;
   static float sum;
   static int n;
 };

#endif // PRODUCT_H_INCLUDED

