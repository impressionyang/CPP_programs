#include"matrix.h"
#include<iostream>
using namespace std;

Matrix::Matrix(){
//    matrix[2][3]={0};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            matrix[i][j]=0;
        }
    }
}

Matrix::Matrix(int array_get[2][3]){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            matrix[i][j]=array_get[i][j];
        }
    }
}

Matrix operator +(Matrix &a,Matrix&b){
    int sum[2][3]={0};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=a.matrix[i][j]+b.matrix[i][j];
        }
    }
    return Matrix(sum);
}

void Matrix::display(){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<"   ";
        }
        cout<<endl;
    }
}
