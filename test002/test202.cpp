#include<iostream>
using namespace std;

void swap1(int *a,int *b){			
	/*ʹ��ָ�뷽��
	�ص㣺ʹ��ָ����������ݵ�ʵ���Ǳ�����ַ
	ʹ�÷��������庯�����β��붨��Ϊָ������������ʵ��
	*/
	int temp;
	if(*a<*b){
		temp=*a;
		*a=*b;
		*b=temp;
	}

}

void swap2(int &a,int &b){			
	/*ʹ�ñ���������
	�ص㣺����Ҫʹ��ָ�룬���ݲ�������
	ʹ�÷���������ʱ�β���ʹ�ñ��������� ���� int &Ӧ�ñ�������
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

