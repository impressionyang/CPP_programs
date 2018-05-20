#include<iostream>
using namespace std;

void lean_max1(int *a,int *b,int *c){			
	/*使用指针方法
	特点：使用指针操作，传递的实参是变量地址
	使用方法：定义函数是形参须定义为指针类型来接受实参
	*/
	int temp;
	if(*a>*b){
		temp=*a;
		*a=*b;
		*b=temp;
		if(*a>*c){
			temp=*a;
			*a=*c;
			*c=temp;
		}
	}
	if(*b>*c){
		temp=*b;
		*b=*c;
		*c=temp;
	}

}

void lean_max2(int &a,int &b,int &c){		
	/*使用变量的引用
	特点：不需要使用指针，传递参数方便
	使用方法：定义时形参需使用变量的引用 即： int &应用变量别名
	*/
	int temp;
	if(a>b){
		temp=a;
		a=b;
		b=temp;
		if(a>c){
			temp=a;
			a=c;
			c=temp;
		}
	}

	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}
}

int main(){
	int a=2,b=3,c=4;
	lean_max1(&a,&b,&c);
	cout<<a<<" "<<b<<" "<<c<<endl;

	a=3,b=4,c=5;
	lean_max2(a,b,c);
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}


/*
请总结使用引用时要注意什么问题。
引用时注意不能引用数组名
*/
