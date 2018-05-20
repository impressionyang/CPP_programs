#include<iostream>
using namespace std;

int max1(int a,int b,int c){
	int max=a;
	if(b>max) max=b;
	if(c>max) max=c;
	return max;
}

int max2(int a=0,int b=0,int c=0){
	int max=a;
	if(b>max) max=b;
	if(c>max) max=c;
	return max;
}

int main(){
	int a=2,b=3,c=4;
	cout<<"不带默认参数:max="<<max1(a,b,c)<<endl;
	cout<<"带默认参数:max="<<max2()<<endl;

	return 0;
}

/*
对比两种方法，分析用带有默认参数的函数的优点和应用的场合。
总结如何选择默认参数的值。请分析本题中默认参数的值应该在什么范围。

  带默认参数可以避免调用参数忘记传参的问题，带有默认参数时比较符合现实生活中的实际问题，如自然数默认大于等于0等
  */