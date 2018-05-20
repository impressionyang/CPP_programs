# include <iostream>
using namespace std ; 

int add ( int x , int y )		//不应加上“；”，将函数写在这里可以起到提前声明的效果
{ 
	int z = x + y ;			//未定义z
	return (z);
}

int main ( )
{ 
	int a=5 , b=1 ;			//未赋初值
	int	c = add ( a , b ) ;		//未定义c切缺少;
	cout <<" a + b = " <<c<<endl ; 
	return 0 ;
} 

