#include <iostream>
#include "compare.h"
using namespace std;

int main()
{Compare<int> cmp1(3,7);
 cout<<cmp1.max()<<"是最大的"<<endl;
 cout<<cmp1.min()<<"是最小的"<<endl<<endl;
 Compare<float> cmp2(45.78,93.6);
 cout<<cmp2.max()<<"是最大的"<<endl;
 cout<<cmp2.min()<<"是最小的"<<endl<<endl;
 Compare<char> cmp3('a','A');
 cout<<cmp3.max()<<"是最大的"<<endl;
 cout<<cmp3.min()<<"是最小的"<<endl;
 return 0;
}
