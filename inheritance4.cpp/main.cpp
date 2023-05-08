 /*hybrid inheritance*/
#include <iostream>

using namespace std;
class A{
 protected:
     int a;
 public:
     void set()
     {
         cout<<"Enter value";
         cin>>a;
     }

};
class B:public A{
 private:
     int b;
 public:
    void set1()
    {
        cout<<"Enter value";
        cin>>b;
    }
    void sum()
    {
        cout<<a+b;
    }
};
class C:public A
{

private:
    int c;
    public:
    void set2()
    {
        cout<<"Enter value";
        cin>>c;

    }
    void diff()
    {
        cout<<a-c;
    }
};
int main()
{
    B bb;
    bb.set();
    bb.set1();
    bb.sum();
    C cc;
    cc.set();
    cc.set2();
    cc.diff();
    return 0;
}
