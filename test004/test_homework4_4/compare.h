#ifndef COMPARE_H_INCLUDED
#define COMPARE_H_INCLUDED
template<class elemtype>
class Compare
 {public:
       Compare(elemtype a,elemtype b);
   elemtype max();
   elemtype min();
      private:
        elemtype x,y;
 };
template<class elemtype>
Compare<elemtype>::Compare(elemtype a,elemtype b)
    {x=a;y=b;}
template<class elemtype>
elemtype Compare<elemtype>::max()
    {return (x>y)?x:y;}
template<class elemtype>
elemtype Compare<elemtype>::min()
    {return (x<y)?x:y;}


#endif // COMPARE_H_INCLUDED
