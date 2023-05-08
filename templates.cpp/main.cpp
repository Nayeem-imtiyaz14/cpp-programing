/* function template*/
#include <iostream>

using namespace std;
template<class T>
 void add(T a,T b)
{
    cout<<a+b;
}
int main()
{
    add(2.2,4.1);
    return 0;
}
