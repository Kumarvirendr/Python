#include<iostream>
using namespace std;
int main(){
    int n,i,temp,j;

    cout<<"Enter the  array of Size:";
    cin>>n;
    int a[n];

    cout<<"Enter the value of array:";
     for(i=0;i<n;i++){
        cin>>a[i];
    }
     
     for(i=1;i<n;i++){
        for(j=i;j>=1;j--){
            if( a[j-1]>a[j] ){
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;


            }
        }
     }




    cout<<"Sorted of Result:";
    for(i =0;i<n;i++){
        cout<<a[i]<<" ";
    }


}