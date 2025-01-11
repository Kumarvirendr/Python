// #include<iostream>
// using namespace std;
// class data{
//     public:
//     int num1;
//     data(int n);
// }
// num1=n;
// {
//     data operator ++(){
//         num1 ==++num1;
//         return num1;
//     }
//     void display(){
//         cout<<"value:"<<num1;
//     }
// };




// int main(){
//     data t1(10),result(0);
//     result = ++t;
//     result.display();

// }


#include <iostream>
using namespace std;

class data {
public:
    int num1;

    // Constructor
    data(int n) : num1(n) {}

    // Overloaded Prefix ++ Operator
    data operator++() {
        ++num1;  // Increment num1
        return *this;  // Return the current object
    }

    // Display Function
    void display() {
        cout << "Value: " << num1 << endl;
    }
};

int main() {
    data t1(10), result(0);

    // Apply the prefix increment operator
    result = ++t1;

    // Display the result
    result.display();

    return 0;
}
