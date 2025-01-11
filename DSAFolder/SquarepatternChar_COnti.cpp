#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;
    char cha ='A';
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<cha<<" ";
            cha++;
        }
        cout<<endl;
    }
    return 0;
}