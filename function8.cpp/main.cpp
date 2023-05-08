#include<iostream>
using namespace std;
int area(int,int);
float area(float);
int main()
{

   int l,b;
    float r;
    cout<<"Enter l,b"<<endl;
    cin>>l>>b;
    cout<<"Enter radius:"<<endl;
    cin>>r;
   int c=area(l,b);
   cout<<c;
   float s=area(r);
   cout<<s;

}
int area(int a,int b)
{
    return(a*b);
}
float area(float f)
{
    return(3.14*f*f);
}
