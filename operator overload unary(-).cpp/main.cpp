   /* unary minus(-) operator*/
#include <iostream>
using namespace std;
class A{
 private:
     int i;
 public:
    A()
    {
        i=0;
    }
    A(int x)
    {
        i=x;
    }
    void display()
    {
        cout<<i;
    }
    A operator -()
    {
        A temp;
        temp.i=-i;
        return(temp);
    }
};
int main()
{
    A aa(4);
    A bb;
    bb=-aa;
    bb.display();
    return 0;
}
