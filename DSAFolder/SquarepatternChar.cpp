#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n:";
    cin>>n;
    for(int i=0;i<n;i++){
        char cha = 'A';
        for(int j=0;j<n;j++){
            cout<<cha<<" ";
            cha =cha+1;
        }
        cout<<endl;
    }
    return 0;
}