#include<iostream>
using namespace std;
class base{
    private:
    int a, b;
    public:
    void input(){
        cout<<"Enter the a and b:";
        cin>>a>>b;
    }
     void output(){
        cout<<"A="<<a<<"\n B ="<<b<<endl;
    }
};
class derived:public base{
    private:
    int m,n;
    public:
    void show(){
        cout<<"Enter M and N ";
        cin>>m>>n;
    }
    void display(){
        cout<<"M="<<m<<"\n N="<<n<<endl;
    }
};
int main(){
    base b1;
    b1.input();
    b1.output();

    derived b2;
    b2.show();
    b2.display();

}