#include <iostream>
#include "compare.h"
using namespace std;

int main()
{Compare<int> cmp1(3,7);
 cout<<cmp1.max()<<"������"<<endl;
 cout<<cmp1.min()<<"����С��"<<endl<<endl;
 Compare<float> cmp2(45.78,93.6);
 cout<<cmp2.max()<<"������"<<endl;
 cout<<cmp2.min()<<"����С��"<<endl<<endl;
 Compare<char> cmp3('a','A');
 cout<<cmp3.max()<<"������"<<endl;
 cout<<cmp3.min()<<"����С��"<<endl;
 return 0;
}
