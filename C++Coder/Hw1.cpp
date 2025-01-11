#include<iostream>
using namespace std;
int main(){
    int ram,shyam,ajay;
    cout<<"Enter ram:";
    cin>>ram;
    cout<<"Enter shyam:";
    cin>>shyam;
    cout<<"Enter ajay:";
    cin>>ajay;
    if((ram<shyam)&&(ram<shyam)){
        cout<<"a lowest";
    }
    else if((shyam<ajay)&&(shyam<ram)){
        cout<<"shyam lowest";

    }
    else{
        cout<<"ajay lowest";

    }
}