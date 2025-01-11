#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){//outer loop,line print 
        for(int j= 1;j<=n;j++){//inner loop
        cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}