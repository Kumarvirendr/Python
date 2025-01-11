#include<iostream>
using namespace std;
void printHello(){
    cout<<"hello virendra"<<endl;
}
int print(){
    cout<<"what are you up today"<<endl;
    return 10;
}
int sumofTwoN(int a,int b){
    int s = a+b;
    return a+b;
}

int minofTwoN(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int sumofNno(int n){
    int sum = 0;
    for(int i = 1;i<=n;i++){
         sum +=i;
    }
    return sum;
}
int main(){
    printHello();
    int val = print();
    cout<<"val = "<<val<<endl;
    cout<<"sumofTwoN = "<<sumofTwoN(6,15)<<endl;
    cout<<"minofTwoN = "<<minofTwoN(40,50)<<endl;
    cout<<"minofNno = "<<sumofNno(4)<<endl;
   
}