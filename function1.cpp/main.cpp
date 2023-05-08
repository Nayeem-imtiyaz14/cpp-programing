/*Refer to the CIRCAREA program in Chapter 2, “C++ Programming Basics.” Write a function called circarea() that finds the area of a circle in a similar way. It should take an
argument of type float and return an argument of the same type. Write a main() function that gets a radius value from the user, calls circarea(), and displays the resu*/
#include <iostream>
float circlearea(float);
using namespace std;

int main()
{
    float r,a;
    cout<<"Enter radius:"<<endl;
    cin>>r;
    a=circlearea(r);
    cout<<"Area of circle:"<<a;
    return 0;
}
float circlearea(float z)
{

    return(3.14*z*z);
}
