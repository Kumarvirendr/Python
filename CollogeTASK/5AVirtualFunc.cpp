#include<iostream>
using namespace std;
class base{
    public:
    virtual void show(){
        cout<<"Data of base class:";
    }
    
};
class child:public base{
    public:
    void show(){
        cout<<"Data of base class:";
    }
};



int main(){
    base c1;
    c1.show();

}