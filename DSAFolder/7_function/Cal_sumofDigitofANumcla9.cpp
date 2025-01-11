#include<iostream>
using namespace std;
int sumOfDigit(int num){
    int digSum = 0;
    while(num > 0){
        int lastDig = num%10;//remainder give
        num /= 10;//last digit hat jaye ex. 145 me se 5 hat jaye
        digSum+= lastDig;
    }
    return digSum;
}
int main(){
    cout<<"sum = "<<sumOfDigit(12340)<<endl;
    return 0;

}