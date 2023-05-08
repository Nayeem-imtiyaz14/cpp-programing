/*       stack using classes*/

#include <iostream>

using namespace std;
class stack{
  private:
      int st[5];
      int top;
  public:
    stack()
    {
        top=-1;
    }
    void push(int x)
    {
        top++;
        st[top]=x;
    }
    int pop()
    {
        return(st[top--]);
    }
};
int main()
{
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout<<s1.pop();
    return 0;
}
