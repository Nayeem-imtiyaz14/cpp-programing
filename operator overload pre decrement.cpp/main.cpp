/* increment operator pre decrement*/
#include <iostream>
using namespace std;
class A{
  private:
      int x;
  public:
    A()
    {
        x=0;
    }
    A(int a)
    {
        x=a;
    }
    A operator --(int)
    {
        A temp;
        temp.x=x--;
        return(temp);
    }
    void display()
    {
        cout<<x;
    }
};
int main()
{
    A aa(2);
    A bb;
    bb=aa--;
   // bb=--aa;
    bb.display();
    return 0;
}

