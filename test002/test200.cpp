# include <iostream>
using namespace std ; 

int add ( int x , int y )		//��Ӧ���ϡ�������������д�������������ǰ������Ч��
{ 
	int z = x + y ;			//δ����z
	return (z);
}

int main ( )
{ 
	int a=5 , b=1 ;			//δ����ֵ
	int	c = add ( a , b ) ;		//δ����c��ȱ��;
	cout <<" a + b = " <<c<<endl ; 
	return 0 ;
} 

