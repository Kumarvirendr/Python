#include<iostream>
using namespace std;
int main(){
    // if user age>=18 can vote , age<=18 can not be vote  
    int age;
    cout<<"Enter the age:";
    cin>>age;
    if(age>=18){
        cout<<"can be vote:"<<age;

    }
     else{   cout<<" not can be vote:"<<age;

     }

     return 0;

    
}