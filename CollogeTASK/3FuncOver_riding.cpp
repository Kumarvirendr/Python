#include<iostream>
#include<conio.h>
using namespace std;

class parent{
    public:
    void text(){
        cout<<"data of parent class:"<<endl;
    }
};
class child:public parent{
    public:
    void text(){
        cout<<"data of child class:"<<endl;
    }
};



int main(){
     child A1;
     A1.text();
     return 0;



}