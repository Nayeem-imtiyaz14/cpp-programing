
#include <iostream>

using namespace std;
class A{
  private:
      int a;
  public:
    void get()
    {
        cout<<"Enter value"<<endl;
        cin>>a;
    }
    void display()
    {
        cout<<a<<endl;
    }
    int operator >(A bb)
    {
        if(a>bb.a)
            return(1);
        else
            return(0);
    }
};
int main()
{
    A aa;
    aa.get();
    A bb;
    bb.get();
    if(aa>bb){
            cout<<"greater:";
        aa.display();
    }
    else
    {
        cout<<"greater:";
        bb.display();
    }
    return 0;
}
