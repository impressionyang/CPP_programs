#include<iostream>
#include"cube.h"
using namespace std;

Cube::Cube(){
    cout<<"�ֱ����볤����ĳ�������:"<<endl;
    cin>>length>>width>>height;
}

void Cube::cal_v(){
    volume=length*width*height;
}

int Cube::get_volume(){
    return volume;
}
