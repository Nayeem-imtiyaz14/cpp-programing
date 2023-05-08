/*CALL BY REFRENCE*/
#include <iostream>
void swap(int&,int&);
using namespace std;

int main()
{
    int a,b;
    cout << "Enter integers:" << endl;
    cin>>a>>b;
    cout<<"before swapping a="<<a<<" b"<<b<<endl;
    swap(a,b);
    cout<<"a="<<a<<"b="<<b;
    return 0;
}
void swap(int &a,int &b)
{
    a=1;b=3;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping a="<<a<<" b="<<b<<endl;
}
