// Q.1 sum of all odd numbers from 1 to n;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n:";
    cin>>n;
    int oddsum = 0;
    for(int i = 0; i<=n;++i){
        // odd number 
        if(i%2!=0){
            cout<<i<<" ";//odd number print hoga
             oddsum+=i;

        }

    //   even number 
        // if(i%2==0){
        //     cout<<i<<" ";
        // }
    }
    cout<<endl;
    cout<<"oddsum:"<<oddsum;//odd number ka sum print hoga
    return 0;
}