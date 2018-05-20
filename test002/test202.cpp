#include<iostream>
using namespace std;

void swap1(int *a,int *b){			
	/*使用指针方法
	特点：使用指针操作，传递的实参是变量地址
	使用方法：定义函数是形参须定义为指针类型来接受实参
	*/
	int temp;
	if(*a<*b){
		temp=*a;
		*a=*b;
		*b=temp;
	}

}

void swap2(int &a,int &b){			
	/*使用变量的引用
	特点：不需要使用指针，传递参数方便
	使用方法：定义时形参需使用变量的引用 即： int &应用变量别名
	*/
	int temp;
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
}

int main(){
	int a=2,b=3;
	cout<<"a="<<a<<" "<<"b="<<b<<endl;
	swap1(&a,&b);
	cout<<a<<" "<<b<<endl;

	a=3,b=4;
	cout<<"a="<<a<<" "<<"b="<<b<<endl;
	swap2(a,b);
	cout<<a<<" "<<b<<endl;
	return 0;
}

