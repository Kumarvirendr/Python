#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;
    int num = 1;//update 0,1,2...n
    for(int i=0;i<n;i++){
for(int j =0;j<n;j++){ 
cout<<num<<" ";
num++;
    }
    cout<<endl;
    }
    cout<<"after pattern :"<<num<<endl;
    return 0;

}