#include<iostream>
using namespace std;
int main(){
    int marks[]= {100,20,30,15, 50};
    cout<<marks[1]<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    // cout<<marks[]<<endl;
    marks[0]= 1000;
    cout<<marks[0]<<endl;
    cout<<marks[-1]<<endl; //error show 

    return 0;


}