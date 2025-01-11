// abc the greatest value of

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the volue of A ";
    cin>>a;
    cout<<"Enter the volue of B ";
    cin>>b;
    cout<<"Enter the volue of C ";
    cin>>c;
    if(a<b && a<c){
        cout<<"the lowest volue of a:"<<a;
    }
    else if(b<c && b<a){
        cout<<"the lowest volue of b:"<<b;

    }
    else{
        cout<<"the lowest volue of c:"<<c;

    }
}