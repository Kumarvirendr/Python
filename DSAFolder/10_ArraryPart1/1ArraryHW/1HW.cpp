// Q1 waf to calculate sum & product of all number in an arrary

#include<iostream>
using namespace std;
int main(){

    int sum = 0 ;
    int product = 1;
    int arr[]= {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // int size = 5;
    for(int i =0;i<size;i++){
        sum +=arr[i];
        product *=arr[i];
    }
    cout<<"sum of arr :"<<sum<<endl;
    cout<<"product of arr :"<<product<<endl;


    
}