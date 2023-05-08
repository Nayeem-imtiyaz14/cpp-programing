/*Write a function called zeroSmaller() that is passed two int arguments by reference
and then sets the smaller of the two numbers to 0. Write a main() program to exercise
this function.*/
#include <iostream>
 void zerosmaller(int ,int);
using namespace std;

int main()
{
    int a,b;
    cout << "Enter values:" << endl;
    cin>>a>>b;
    zerosmaller(a,b);

    return 0;
}
void zerosmaller(int a,int b)
{
    if(a>b)
    {
        b=0;
        cout<<a<<"-"<<b;
    }
    else
    {
        a=0;
        cout<<a<<"-"<<b;
    }

}
