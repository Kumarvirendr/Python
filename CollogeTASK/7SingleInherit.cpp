#include<iostream>
using namespace std;
class base{
    private:
    int a,b;
    public:
    void input(){
        cout<<"enter a and b:";
        cin>>a>>b;
    }
    void show(){
        cout<<"a="<<a<<"b="<<b<<endl;
    }
};
class drived :public base{
    private:
    int m,n;
    public:
    void getdata(){
          cout<<"enter m and n:";
        cin>>m>>n;

    }
      void display(){
        cout<<"m="<<m<<"n="<<n<<endl;
    }
};
int main(){
    base ob;
    drived obj1;
    ob.input();
    ob.show();


    obj1.getdata();
    obj1.display();

}