#include<iostream>
using namespace std;

// class is a blueprint /tamplate
class student{
    public:
    // public are use for bahar
   string name;
    int age;
    bool gender;
};
// data members


int main(){
   student a;//student a  is an object 
   a.name = "virendra";
   a.age = 10;
   a.gender = false;

   cout<< "gender = "<<a.gender<<endl;
   cout<< "name = "<<a.name<<endl;



return  0;
}
