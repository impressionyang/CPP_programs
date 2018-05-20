#include<iostream>
using namespace std;
int main(){
	int a=5,b=1;		//未初始化数据，结果会出错
	int c=a+b;		//c若未定义类型会出错
	cout<<"a+b="<<c;
	return 0;		//return 0
}
