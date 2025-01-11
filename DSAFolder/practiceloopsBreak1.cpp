// Q sum of numbers from 1 to n;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;
    int sum=0;

    for(int i=0;i<=n;++i){
        // sum = sum+i ya 
        sum+=i;
        if(i==5){
            break;//break keyboard
        }
    }
    cout<<"sum:"<<sum;

    
 return 0;
}