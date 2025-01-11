#include<iostream>
using namespace std;
int main(){
    // grade 81&100 is very good , 
    //grade 61 - 80 good
    //41-60 average
    //<= 40 fail

    int n;
    cout<<"Enter the Number of N:";
    cin>>n;
    if((n>=81) && (n<=100)){
        cout<<"grade of A is very good";
    }
    else if((n>=61) && (n<=80)){
        cout<<"grade of b is  good";

    }
    else if((n>=41) && (n<=60)){
        cout<<"grade of b is Average";

    }
    else{
        cout<<"grade of c is Fail";
         
    }
}