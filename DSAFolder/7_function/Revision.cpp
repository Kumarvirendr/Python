#include<iostream>
using namespace std;
int  printHello(){
    cout<<"hello what are you up today \n";
    return 60;
}
int sum(int a,int b){
    // int s = a+b;
    return a+b;
}

int minOftwoN(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

// sum of 1 to n 
int sum(int n){
    int sum = 0;
    for(int i = 1;i<=n;i++){
        sum += i;
    }
    return sum;
}

// factrorial 
int fact(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;



}

// pass the value  
int passSum (int a,int b){
    a = a+15;
    b = b+10;
    return a+b;

}

int main(){
    printHello();
    printHello();

int val = printHello();
cout<<printHello()<<endl;

cout<<"sum 1 to n = "<<sum(5)<<endl;
cout<<"lowest value a and b = "<<minOftwoN(19,20)<<endl;
cout<< "sum="<<sum(10,40)<<endl;
// int n = 5;
cout<<"factorial = "<<fact(5)<<endl;

// passthe value 
int a = 5;
int b = 4;
cout<<"sum of pass the value "<<passSum(a,b)<<endl;
cout<<"a = "<<a<<endl;
cout<<"b = "<<b<<endl;
// class 7


}