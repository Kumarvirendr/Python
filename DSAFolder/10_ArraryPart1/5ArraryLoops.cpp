#include<iostream>
using namespace std;
int main(){
    int nums[] ={5,15,22,1,-14,-24};
    int size = 6;
    int smallest = INT8_MAX;
    int largest = INT8_MIN;
    

    for(int i = 0;i<size;i++){

            // smallest = min(nums[i],smallest);
            // largest  = max(nums[i],largest);
            // or 


        if(nums[i]<smallest){
            smallest = nums[i]; 
        }
         if(nums[i]>largest){
            largest = nums[i]; 
        }

    }
    cout<<"smallest = "<<smallest<<endl;
    cout<<"largest = "<<largest<<endl;


}