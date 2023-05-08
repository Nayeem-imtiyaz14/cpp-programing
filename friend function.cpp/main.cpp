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
    friend void add(A,B);
};
class B{
private:
    int y;
public:
    B()
    {
        y=3;
    }
    friend void add(A,B);
};
add(A aa,B bb)
{
    cout<<aa.x+bb.y;
}
int main()
{
    A aa;
    B bb;
    add(aa,bb);
    return 0;
}
