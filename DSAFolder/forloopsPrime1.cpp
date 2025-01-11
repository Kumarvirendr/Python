#include<iostream>
using namespace std;
int main(){
    // int n =9;
    int n;
    cout<<"enter n:";
    cin>>n;
    bool isPrime = true;
    for(int i =2; i<=n-1;i++){
        if(n%i==0){
        isPrime = false;
        break;
        }
    }
    if(isPrime == true){
        cout<<"prime No:";
    }
    else{
        cout<<" non prime No:";

    }
}