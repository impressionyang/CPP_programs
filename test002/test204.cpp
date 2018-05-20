#include<string>
#include<iostream>
using namespace std;

void sort(string array_get[],int length){
	int i,j;
	string temp;
	for(i=0;i<length-1;i++){
        for(int j=i+1;j<length;j++){
            if(array_get[i]>array_get[j]){
                temp=array_get[i];
                array_get[i]=array_get[j];
                array_get[j]=temp;
            }
        }
	}

}

int main(){
    int i;
	string array_s[5]={"eee","ddd","ccc","bbb","aaa"};
	sort(array_s,5);
	for(i=0;i<5;i++){
        cout<<array_s[i]<<"      ";
	}
    cout<<endl;
	return 0;
}
