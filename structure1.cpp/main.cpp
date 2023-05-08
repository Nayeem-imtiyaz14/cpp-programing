/*A phone number, such as (212) 767-8900, can be thought of as having three parts: the
area code (212), the exchange (767), and the number (8900). Write a program that uses a
structure to store these three parts of a phone number separately. Call the structure
phone. Create two structure variables of type phone. Initialize one, and have the user
input a number for the other one. Then display both numbers. The interchange might
look like this:
Enter your area code, exchange, and number: 415 555 1212
My number is (212) 767-8900
Your number is (415) 555-121*/
#include <iostream>
using namespace std;
struct phone{
    int areacode,exchange,number;
};
int main()
{
    phone p1,p2;
    p1.areacode=212;
    p1.exchange=767;
    p1.number=8900;
    cout<<p1.areacode<<"-"<<p1.exchange<<"-"<<p1.number<<endl;
    cout<<"Enter areacode,exchange,number";
    cin>>p2.areacode>>p2.exchange>>p2.number;
    cout<<p2.areacode<<"-"<<p2.exchange<<"-"<<p2.number;
    return 0;
}
