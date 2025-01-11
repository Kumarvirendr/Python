#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    if((n%3==0) || (n%5==0) && (n%15!=0)){
        cout<<"the value of divisibly by 3 or 5 but not   divisibly by 15";