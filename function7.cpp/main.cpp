/*Start with the power() function of Exercise 2, which works only with type double.
Create a series of overloaded functions with the same name that, in addition to double,
also work with types char, int, long, and float. Write a main() program that exercises
these overloaded functions with all argument types*/
#include <iostream>
double power(double,int=2);
float power(float,int=2);
long power(long,int=2);
int power(char,int=2);
using namespace std;

int main()
{
    int z;
    double d,a;
    float f,b;
    char c;
    long l,e;
    cout << "Enter double:" << endl;
    cin>>d;
    cout<<"Enter float:"<<endl;
    cin>>f;
    cout<<"Enter char:"<<endl;
    cin>>c;
    cout<<"Enter long:"<<endl;
    cin>>l;
    a=power(d);
    cout<<a<<endl;
    b=power(f);
    cout<<b<<endl;
    z=power(c);
    cout<<z<<endl;
    e=power(l);
    cout<<e<<endl;
    return 0;
}
double power(double d,int a)
{

    int s=1;
    for(int i=1;i<=a;i++)
    {

        s=s*d;
    }
    return(s);
}
float power(float d,int a)
{

    float s=1;
    for(int i=1;i<=a;i++)
    {

        s=s*d;
    }
    return(s);
}
int power(char d,int a)
{

    int s=1;
    for(int i=1;i<=a;i++)
    {

        s=s*d;
    }
    return(s);
}
long power(long d,int a)
{

    long s=1;
    for(int i=1;i<=a;i++)
    {

        s=s*d;
    }
    return(s);
}
