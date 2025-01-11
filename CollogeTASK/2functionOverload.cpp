#include<iostream>
#include<conio.h>
using namespace std;

class data{
    public:
    void func(int x, int y){
        cout<<"Addition x+y:"<<x+y<<endl;
    }
     void func(int x, int y ,int z){
        cout<<"Addition x+y+z:"<<x+y+z<<endl;
    }

     void func(int x, int y,int z, int A){
        cout<<"Addition x+y+z+A:"<<x+y+A<<endl;
    }

   
};

 int main(){
        data a1;
        a1.func(10,20);
        a1.func(10,20,50);
        a1.func(10,20,30,40);


    }