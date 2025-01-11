#include<iostream>
using namespace std;
int main(){
    int i,j,n,temp;
    cout<<"Enter array size:";
    cin>>n;
    int a[n];
    cout<<"Enter value in array:";
    for(i=0;i<n;++i){
        cin>>a[i];
    }


    for(i=n;i>0; --i){
        for(j=0;j<i-1;++j){
            if(a[j]>a[j+1]){
                temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Sorted Result: \n";
    for(i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}