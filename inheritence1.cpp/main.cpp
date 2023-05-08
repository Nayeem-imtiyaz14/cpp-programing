     /*  simple inheritance*/
#include <iostream>
using namespace std;
class B;
class A{
protected:
    int a;
public:
    void get()
    {
        cout<<"Enter value";
        cin>>a;
    }
};
class B:public A{
   private:
       int b;
   public:
    void set()
    {

        cout<<"Enter value";
        cin>>b;
    }
    void display()
    {
        cout<<a+b;
    }
};
int main()
{
   B bb;
   bb.get();
   bb.set();
   bb.display();
}
