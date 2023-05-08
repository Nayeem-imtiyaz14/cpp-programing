/*. Raising a number n to a power p is the same as multiplying n by itself p times. Write a
function called power() that takes a double value for n and an int value for p, and
returns the result as a double value. Use a default argument of 2 for p, so that if this
argument is omitted, the number n will be squared. Write a main() function that gets values from the user to test this function*/
#include <iostream>
double power(double,int=2);
using namespace std;

int main()
{
    double n,a;
    cout<<"Enter base"<<endl;
    cin>>n;
    a=power(n);
    cout<<"power="<<a;
    return 0;
}
double power(double n,int p)
{
    int s=1;
    for(int i=1;i<=p;i++)
    {

         s=s*n;
    }
    return(s);
}
