#include<iostream>
using namespace std;
int count=0;
void f1();
void f2();
int main()
{
  for(int i=1;i<=10;i++){
    f1();}
    cout<<endl;
    for(int i=1;i<=10;i++){
    f2();}
}
void f1()
{
        count++;
        cout<<"I have been called"<<count<<"times"<<endl;
}
void f2()
{
    static int a;
    a++;
    cout<<"i have been called"<<a<<endl;
}
