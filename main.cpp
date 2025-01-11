#include<iostream>
using namespace std;
class data
{
  public:
  void func(int a,int b)
  {
    cout<<"first addition ="<<a+b<<endl;
  }
  void func(int a,int b, int c)
  {
    cout<<"second addition ="<<a+b+c;
  }
};
int main(){
  // clrscr();
  data a1;
  a1.func(20,40);
  a1.func(20,40,10);

  // getch();
}