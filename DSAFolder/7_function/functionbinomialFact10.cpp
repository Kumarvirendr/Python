#include<iostream>
using namespace std;
int factrorial(int n){
    int fact=1;
    for(int i =1;i<=n;i++){
    fact *= i;
    }
    return fact;
}

int nCr(int n,int r){
    return factrorial(n)/(factrorial(r)*factrorial(n-r));
}



int main(){
    cout<<"factrorial="<<factrorial(3)<<endl;
    int n = 8,r=2;
    // cout<<"nCr("<< n <<","<< r <<") = "<<nCr(n,r)<<endl;

    cout<<"nCr ="<<nCr(n,r)<<endl;
}

