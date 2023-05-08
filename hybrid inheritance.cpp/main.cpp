#include <iostream>

using namespace std;
class A{
  protected:
      int a;
  public:
      void get(){
    cout<<"Enter value";
    cin>>a;}
    void display()
    {
        cout<<a;
    }

};
class B: virtual public A{
  protected:
      int b;
  public:
      void get1(){
    cout<<"Enter value";
    cin>>b;}
    void display1()
    {
        cout<<b;
    }

};
class C: virtual public A{
  protected:
      int c;
  public:
      void get(){
    cout<<"Enter value";
    cin>>c;}
    void display()
    {
        cout<<c;
    }

};
class D:public B,public C{
  protected:
      int d;
  public:
      void get(){
    cout<<"Enter value";
    cin>>d;}
    void display()
    {
        cout<<d;
    }

};


int main()
{
    D dd;
    dd.get();
    dd.display();
    return 0;
}
