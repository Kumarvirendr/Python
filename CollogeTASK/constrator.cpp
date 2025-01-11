// used to initial an object 
// this is function which is called when an object is created 
// same name as class name
// type of constractor - defalult constrator , parameter constrator, copy constrator 


#include<iostream>
using namespace std;

class Rectangle{
    public:
    int l;
    int b;
      Rectangle(){//defalut consrtator  no pass parameter 
        // constractor same name Rectangle
        l=0;
        b=0;
      }
      Rectangle(int x, int y){// consrtator  parameter 
        // constractor same name Rectangle
        l=x;
        b=y;
      }

};
int main(){
    Rectangle r1;
    cout<<" l = "<<r1.l<<endl;
    cout<<" b = "<<r1.b<<endl;
    Rectangle r2(3,4);
    cout<<" parameter const. l = "<<r1.l<<endl;

    cout<<" l = "<<r2.l<<endl;
    cout<<" l = "<<r2.b<<endl;

}