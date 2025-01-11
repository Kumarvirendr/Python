// statement
// for(initalsation:condition:updation){
//     work
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;
    for(int i =0; i<=n;i=i+2){
       cout<<i<<" ";
    //    i++;
    }
    return 0;
}