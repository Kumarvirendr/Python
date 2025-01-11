#include<iostream>
using namespace std;
int main(){
    // Q. find character lowercase or uppercase 
    // solve ascii value 
    char cha;
    cout<<"Enter the value of cha:";
    cin>>cha;
    if((cha>=65)&&(cha<=90)){
        cout<<"character uppercase";
    }
    else{
        cout<<"character lowarecas";


    }
    return 0;
}