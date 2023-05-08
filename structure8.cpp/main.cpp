/*Start with the fraction-adding program of Exercise 9 in Chapter 2, “C++ Programming
Basics.” This program stores the numerator and denominator of two fractions before
adding them, and may also store the answer, which is also a fraction. Modify the program so that all fractions are stored in variables of type struct fraction, whose two
members are the fraction’s numerator and denominator (both type int). All fractionrelated data should be stored in structures of this type.
*/#include <iostream>

using namespace std;
  struct fraction{
    int num,den;
  };
int main()
{
    fraction f1,f2,f3;
    cout<<"Enter first fraction"<<endl;
    cin>>f1.num>>f1.den;
    cout<<"Enter second fraction"<<endl;
    cin>>f2.num>>f2.den;
    f3.num=(f1.num*f2.den)+(f2.num*f1.den);
    f3.den=f1.den*f2.den;
    cout<<"new fraction:"<<f3.num<<"/"<<f3.den;
    return 0;
}
