#include<iostream>
using namespace std;

void quickSort(int a[],int low , int high){
    if(low<high){
        int pivot = a[high];
        int i = low-1,temp;
        for(int j=low;j<=high-1;j++){
            if(a[j]<pivot){
        // swap 
        // left to Right 
                ++i;
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
       // swap 
        //  Right  to left
        temp =a[i+1];
        a[i+1] = a[high];
        a[high] = temp;
        quickSort(a,low,i);//left ot right 
        quickSort(a,i+2,high);//right to left


    }

}






int main(){
    int i,j,n ,low,high,pivot,temp;
    cout<<"Enter array size:";
    cin>>n;
    int a[n];
    cout<<"Enter the value of array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
   
   quickSort(a,0,n-1);//function

cout<<"Sorted Result:";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}