// Q.1 Write a program to create a calcutator that performs basic arithmetic operations(add,subtract, multibly and divide)using switch case. the calculator should input two number and an operator from user. 
#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter the n1 :";
    cin>>n1;
    char op;
    //op=operatorss
    cout<<"Enter the op :";
    cin>>op;
    int n2;
    cout<<"Enter the n2 :";
    cin>>n2;
  
    if(op=='+'){
        cout<<"n1+n2:"<<n1+n2;
    }
    
    else if(op=='-'){
        cout<<"n1-n2:"<< n1-n2;

    }
      else if(op=='*'){
        cout<<"n1*n2:"<<n1*n2;

    }  else if(op=='/'){
        cout<<"n1/n2:"<<n1/n2;

    }
    else{
        cout<<"invalid Operators";

    }
}