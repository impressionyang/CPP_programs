#include<iostream>
#include"cube.h"
using namespace std;

Cube::Cube(){
    cout<<"分别输入长方体的长、宽、高:"<<endl;
    cin>>length>>width>>height;
}

void Cube::cal_v(){
    volume=length*width*height;
}

int Cube::get_volume(){
    return volume;
}
