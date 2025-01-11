#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int evensum = 0;
    for(int i=0;i<=n;++i){
        if(i%2==0){
            cout<<i<<" ";
            evensum = evensum + i;
        }
    }

    cout<<endl;
        cout<<evensum;

    return 0;
}