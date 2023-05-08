

#include <iostream>

using namespace std;
template<class T>
class stack{
  T st[5];
  int top;
  public:
      stack()
      {
          top=-1;
      }
      void push(T a)
      {
          top++;
          st[top]=a;
      }
      T pop()
      {
          return(st[top--]);
      }
};
int main()
{
    stack <int>s1;
    stack<float>s2;
    s1.push(2);
    s1.push(3);
   cout<<s1.pop();
    s2.push(2.3);
    s2.push(3.4);
    cout<<s2.pop();
    return 0;
}
