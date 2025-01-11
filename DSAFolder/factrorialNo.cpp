#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;
    int factorial = 1;
    if(n<0){
        cout<<"factorial is negative ";
    }
    else{
        for(int i=1;i<=n;i++){
            factorial*=i;
        }
        cout<<"factorial of "<<n<<" :"<<factorial;
    }
    return 0;
}