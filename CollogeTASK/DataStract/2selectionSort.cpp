#include<iostream>
using namespace std;
int main(){
    int i,n,loc,temp,j,m;
    cout<<"enter the array size:";
    cin>>n;
    int a[n];


    cout<<"enter values in the array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n-1;i++){
        m=a[i];//first element
        loc=i+1;//second element
        for(j=i+1;j<n;j++){
            if(m>a[j]){
                m=a[j];
                loc=j;

            }
            if(a[loc]<a[i]){
                // swap
                temp =a[loc];
                a[loc] = a[i];
                a[i]=temp;
            }
        }
    }




    cout<<"Sorted Result:";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}