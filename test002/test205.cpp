#include<iostream>
using namespace std;

template <typename T>

void sort2(T array_g[],int length){
    T temp;
    int i,j;
    for(i=0;i<length-1;i++){
        for(int j=i+1;j<length;j++){
            if(array_g[i]>array_g[j]){
                temp=array_g[i];
                array_g[i]=array_g[j];
                array_g[j]=temp;
            }
        }
    }
}

void sort1(int array_g[],int length){
    int temp;
    int i,j;
    for(i=0;i<length-1;i++){
        for(int j=i+1;j<length;j++){
            if(array_g[i]>array_g[j]){
                temp=array_g[i];
                array_g[i]=array_g[j];
                array_g[j]=temp;
            }
        }
    }
}

void sort1(float array_g[],int length){
    float temp;
    int i,j;
    for(i=0;i<length-1;i++){
        for(int j=i+1;j<length;j++){
            if(array_g[i]>array_g[j]){
                temp=array_g[i];
                array_g[i]=array_g[j];
                array_g[j]=temp;
            }
        }
    }
}

void sort1(double array_g[],int length){
    double temp;
    int i,j;
    for(i=0;i<length-1;i++){
        for(int j=i+1;j<length;j++){
            if(array_g[i]>array_g[j]){
                temp=array_g[i];
                array_g[i]=array_g[j];
                array_g[j]=temp;
            }
        }
    }
}


template <typename T>
void display(T array[],int length){
	for(int i=0;i<length;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[5]={2,5,3,7,5};
    float b[5]={2.5,5.5,3.5,7.5,5.5};
    double c[5]={2.5,5.5,3.5,7.5,5.5};

    sort1(a,5);
    display(a,5);


    sort1(b,5);
    display(b,5);

    sort1(c,5);
    display(c,5);

    sort2(a,5);
    display(a,5);
    
    sort2(b,5);
    display(b,5);

    sort2(c,5);
    display(c,5);

    return 0;



}


