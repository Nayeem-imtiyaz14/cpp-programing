#include <iostream>

using namespace std;
class A{
   public:
       void dis()
       {
           cout<<"I am in class A";
       }
};
class B{
 public:
     void dis()
     {
         cout<<"i am in class B";
     }
};
class C:public A,public B{
    public:
   void dis2()
   {

       cout<<"i am in class c";
      // A::dis();
       //B::dis();
   }
};
int main()
{
    C cc;
    cc.dis2();
    cc.A::dis();
  //  cc.dis();
    return 0;
}
