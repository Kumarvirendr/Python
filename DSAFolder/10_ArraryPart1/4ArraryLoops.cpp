#include<iostream>
using namespace std;
int main(){
    // int marks[] = {100,30,40,50,569};
    int size  = 5;

    int marks[size];
        // cout<<"enter the marks : ";
    for(int i=0;i<size;i++){
        cout<<"enter the marks : ";
        cin>>marks[i];

    }
 
    for(int i=0;i<size;i++){
        // cout<< "print the marks ";
        cout<<marks[i];
    }
}