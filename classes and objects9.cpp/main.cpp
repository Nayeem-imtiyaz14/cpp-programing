/*static memeber function*/
#include <iostream>

using namespace std;
class A{
private:
    static int count;
public:
    A()
    {
        count++;
    }
    static display()
    {
        cout<<"no of objects created:"<<count;
    }
};
int A::count;
int main()
{
    A aa,bb,cc;
    A::display();
    return 0;
}
