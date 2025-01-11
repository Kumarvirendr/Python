#include<iostream>
using namespace std;
int  printHello(){
    cout<<"hello what are you up today \n";
    return 60;
}
int sum(int a,int b){
    int s = a+b;
    return s;
}

int main(){
    printHello();
    printHello();

int val = printHello();
cout<<printHello()<<endl;

cout<<"sum = "<<sum(9,8)<<endl;