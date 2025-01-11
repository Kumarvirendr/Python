#include<iostream>
using namespace std;
decToBinary(int decnum){
    int ans = 0,pow = 1;
    while(decnum>0){
        int rem = decnum%2;
        decnum/=2;
        ans +=(pow *rem);
        pow *=10;
    }
    return ans;
}




int main(){
    for(int i = 1;i<=50;i++){
        // 1 to 50 binary no  
        cout<<"Hello Binary Number  :"<<i<<" :"<<decToBinary(i)<<endl;  
    }

}