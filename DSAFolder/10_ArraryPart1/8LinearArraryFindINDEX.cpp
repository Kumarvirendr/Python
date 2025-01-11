#include<iostream>
using namespace std;
int linearSearch(int arr[],int sz,int target){
    for(int i = 0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
   return -1;


}
int main(){
    int arr[] = {20,30,40,50,60,6,26};
    int sz = 7;

     int target; //target give  in this arrary value;
    // notes = -1 print hota hai to arrary me wahi value arrary me nhi hai 
    cout<<"target = ";
    cin>>target;

    cout<<"index : "<<linearSearch(arr,sz,target)<<endl;

}