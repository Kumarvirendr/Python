#include<iostream>
#include<conio.h> 
using namespace std;

class data{
    public:
    void func(int x,int y){
        cout<<"Addition  :"<<x+y<<endl;

    }

     void func(double x,double y){
        cout<<"Addition of double :"<<x+y<<endl;
    }
     void func(char x,char y){
        cout<<"Addition of char :"<<x<<endl;
        cout<<"Addition of char :"<<y<<endl;

    }
    
    

};

int main(){
    data a1;
    a1.func(20,30);
    a1.func(20.23,30.21);
    a1.func('B','A');



}