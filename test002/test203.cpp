#include<iostream>
using namespace std;

void lean_max1(int *a,int *b,int *c){			
	/*ʹ��ָ�뷽��
	�ص㣺ʹ��ָ����������ݵ�ʵ���Ǳ�����ַ
	ʹ�÷��������庯�����β��붨��Ϊָ������������ʵ��
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
	/*ʹ�ñ���������
	�ص㣺����Ҫʹ��ָ�룬���ݲ�������
	ʹ�÷���������ʱ�β���ʹ�ñ��������� ���� int &Ӧ�ñ�������
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
���ܽ�ʹ������ʱҪע��ʲô���⡣
����ʱע�ⲻ������������
*/
