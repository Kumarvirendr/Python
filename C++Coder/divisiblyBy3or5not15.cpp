#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of N:";
    cin>>n;
    if((n%3==0 || n%5==0) && (n%15!=0)){
        cout<<"N divisibly By 3 or 5 and not divisibly by 15 ";

    }
    else{
        cout<<"N divisibly By 3 or 5 and  divisibly by 15 ";

    }
}