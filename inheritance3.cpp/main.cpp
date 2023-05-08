/*  multilevel inheritance*/
#include <iostream>

using namespace std;
class A{
 protected:
     int a,b;
 public:
    void get()
    {
        cout<<"Enter values";
        cin>>a>>b;
    }
    void sum()
    {
        cout<<a+b;
    }
};
class B:public A
{
protected:
    int c,d;
public:
    void set()
    {
        cout<<"Enter values";
        cin>>c>>d;
    }
    void diff()
    {
        cout<<c-d;
    }
};
class C:public B
{
private:
    int e,f;
    public:
    void let()
    {
        cout<<"Enter value";
        cin>>e>>f;
    }
    void mult()
    {
        cout<<a*b;
    }
};
int main()
{
    C cc;
    cc.set();
        cout<<"sum:";
    cc.sum();
    cc.get();
    cout<<"difference:"<<endl;
    cc.diff();
    cc.let();
    cout<<"mullt"<<endl;
    cc.mult();
    return 0;
}
