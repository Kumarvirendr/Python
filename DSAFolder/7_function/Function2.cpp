#include<iostream>
using namespace std;
int printHello(){
    cout<<"What are you doing \n";
    return 10;
},

int main(){
    int val = printHello();
    cout<<"val ="<<val<<endl;
    return 0;
}