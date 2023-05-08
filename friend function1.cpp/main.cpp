
#include <iostream>

using namespace std;
class B;
class A{
  private:
      int x;
  public:
    A()
    {
        x=2;
    }
friend void check(A,B);
};
class B{
 private:
     int y;
 public:
    B()
    {
        y=3;
    }
    friend void check(A,B);
};
void check(A aa,B bb)
{
    if(aa.x>bb.y)
        cout<<aa.x<<"is greater"<<endl;
    else
        cout<<bb.y<<"is greater"<<endl;
}
int main()
{
    A aa;
    B bb;
    check(aa,bb);
    return 0;
}
