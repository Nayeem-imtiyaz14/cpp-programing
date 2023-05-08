/* Use the time structure from Exercise 9, and write a program that obtains two time values from the user in 12:59:59 format, stores them in struct time variables, converts
each one to seconds (type int), adds these quantities, converts the result back to hoursminutes-seconds, stores the result in a time structure, and finally displays the result in
12:59:59 format.*/
#include <iostream>

using namespace std;
struct time{
int h,m,s;
};

int main()
{
    time t1,t2,t3;
    long int a,b,c,d;
    cout << "Enter t1" << endl;
    cin>>t1.h>>t1.m>>t1.s;
    cout<<"Enter t2"<<endl;
    cin>>t2.h>>t2.m>>t2.s;
    a=t1.h*3600+t1.m*60+t1.s;
    b=t2.h*3600+t2.m*60+t2.s;
    c=a+b;
    t3.h=c/3600;
    d=c%3600;
    t3.m=d/60;
    t3.s=d%60;
    cout<<t3.h<<":"<<t3.m<<":"<<t3.s;
    return 0;
}
