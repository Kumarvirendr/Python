#include<iostream>
using namespace std;
class data{
    public:
    int num1;
    data(int n):num1(n){}
    data operator+(data t2){
        data t3(0);
        t3.num1 = num1+t2.num1;
        return t3;
    }
    void display(){
        cout<<"Value:"<<num1;
    }
};


int main(){
    data t1(10),t2(30),result(0);
    result = t1+t2;
    result.display();

}