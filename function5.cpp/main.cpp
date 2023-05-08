/*Write a function called hms_to_secs() that takes three int values—for hours, minutes,
and seconds—as arguments, and returns the equivalent time in seconds (type long).
Create a program that exercises this function by repeatedly obtaining a time value in
hours, minutes, and seconds from the user (format 12:59:59), calling the function, and
displaying the value of seconds it returns*/
#include <iostream>
long hms_to_secs(int,int,int);
using namespace std;

int main()
{
    int h,m,s;
    long a;
    cout << "Enter h,m,s" << endl;
    cin>>h>>m>>s;
    a=hms_to_secs(h,m,s);
    cout<<"equivalent time in seconds"<<a;
    return 0;
}
long hms_to_secs(int h,int m,int s)
{

    return(h*3600+m*60+s);
}
