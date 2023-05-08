 /*multiple inheritance*/
#include <iostream>

using namespace std;
class C;
class B;
class A{
 protected:
    int x;
 public:
    void let()
    {
        cout<<"Enter values"<<endl;
        cin>>x;
    }
};
class B{
  protected:
      int y;
  public:
    void get()
    {
        cout<<"Enter value";
        cin>>y;
    }
};
class C:public A,public B
{
    public:
    void add()
    {
        cout<<x+y;
    }
};
int main()
{
    C cc;
    cc.let();
    cc.get();
    cc.add();
    return 0;
}
