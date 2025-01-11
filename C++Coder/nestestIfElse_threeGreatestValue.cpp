
#include<iostream>
using namespace std;
int main(){
    // three greatest value without using logical operator 
    int a,b,c;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    cout<<"enter the value of c:";
    cin>>c;
    // a>b , a>c ,b>a and b>c 
    if(a>b){  //b can never be the greatest
       if(a>c){
        cout<<a<<" :a is the greatest ";
       }
       else{
        cout<<c<<":c is the greatest ";
       }
    }
    else{ //b>a
        if(b>c){
        cout<<b<<":b is the greatest ";

        }
        else{ //c>b, c>b>a
        cout<<c<<":c is the greatest ";

        }

    }


}