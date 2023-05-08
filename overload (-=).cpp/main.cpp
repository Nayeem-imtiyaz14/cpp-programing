#include <iostream>

using namespace std;
class A
{

    int x;
public:
    void get()
    {
        cout<<"Enter ";
        cin>>x;
    }
    void display()
    {
        cout<<x;
    }
    void operator -=(A bb)
    {
       x=x-bb.x;
    }
};
int main()
{
    A aa;
    aa.get();
    A bb;
    bb.get();
    aa-=bb;
    aa.display();
    return 0;
}

