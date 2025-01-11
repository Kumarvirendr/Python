#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks:";
    cin>>marks;
    if(marks>=90){
        cout<<"grade A:";
    }
    else if((marks>=80)&&(marks<=90)){
        cout<<"grade B:";

    }
    else{
        cout<<"grade C fail:";

    }
}