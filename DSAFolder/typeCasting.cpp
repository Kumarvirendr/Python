#include<iostream>
using namespace std;
int main(){
    // convesion(implicit) small datatype to convert big datatype
    char grade = 'Z';
    int value = grade;
    cout<<value<<endl;

    // casting(explicit)  big datatype to convert to small datatype
    double price = 100.999;
    cout<<price<<endl;
    // int Price = price; ya
    cout<<(int)price;
}