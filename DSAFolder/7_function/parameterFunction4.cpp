#include<iostream>
using namespace std;
double sum (double a,double b){
    double s = a+b;
    return s;
}

//min of two nums
int minOfTwo(int a , int b){
    if(a<b){
        return a;
    }
    else{
        return b;

    }
}

int main(){
     cout << sum(20.90,10.50)<<endl;
     cout<< "min = "<<minOfTwo(10,15)<<endl;//jo ham 10, 15 bhejte hai n use argument hai
    return  0;
}