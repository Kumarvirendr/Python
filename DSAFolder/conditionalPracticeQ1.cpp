#include<iostream>
using namespace std;
int main(){
    // Q. find character lowercase or uppercase 
    char cha;
    cout<<"Enter the value of cha:";
    cin>>cha;
    if((cha>='a')&&(cha<='z')){
        cout<<"character lowarecase";
    }
    else{
        cout<<"character uppercase";

    }
}