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
	cout<<"����Ĭ�ϲ���:max="<<max1(a,b,c)<<endl;
	cout<<"��Ĭ�ϲ���:max="<<max2()<<endl;

	return 0;
}

/*
�Ա����ַ����������ô���Ĭ�ϲ����ĺ������ŵ��Ӧ�õĳ��ϡ�
�ܽ����ѡ��Ĭ�ϲ�����ֵ�������������Ĭ�ϲ�����ֵӦ����ʲô��Χ��

  ��Ĭ�ϲ������Ա�����ò������Ǵ��ε����⣬����Ĭ�ϲ���ʱ�ȽϷ�����ʵ�����е�ʵ�����⣬����Ȼ��Ĭ�ϴ��ڵ���0��
  */