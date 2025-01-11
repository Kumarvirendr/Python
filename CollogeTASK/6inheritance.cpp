#include<iostream>
using namespace std;
class father{
    protected:
    string surname ="Gupta";
};
class son1:father{
    string name = "Virendra";
    public:
    void show(){
        cout<<name<<" "<<surname<<endl;
    }
};

class son2:father{
    string name = "Sonu";
    public:
    void dis(){
        cout<<name<<" "<<surname<<endl;
    }
};
int main(){
    son1 s1;
    s1.show();
    son2 s2;
    s2.dis();

}