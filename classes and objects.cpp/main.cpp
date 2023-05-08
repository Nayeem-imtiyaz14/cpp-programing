/*Transform the fraction structure from Exercise 8 in Chapter 4 into a fraction class.
Member data is the fraction’s numerator and denominator. Member functions should
accept input from the user in the form 3/5, and output the fraction’s value in the same
format. Another member function should add two fraction values. Write a main() program
that allows the user to repeatedly input two fractions and then displays their sum. After
each operation, ask whether the user wants to continue*/
#include <iostream>

using namespace std;
class fraction{
 private:
     int num,den;
 public:
    fraction()
    {
        num=0;
        den=0;
    }
    void get()
    {
        cout<<"Enter fraction:"<<endl;
        cin>>num>>den;
    }
    void display()
    {
        cout<<num<<"/"<<den<<endl;
    }
    fraction add(fraction);
};
fraction fraction::add(fraction t)
{
    fraction temp;
    temp.num=num*t.den+t.num*den;
    temp.den=den*t.den;
    return(temp);
}
int main()
{
    char ch;
    fraction f1,f2,f3;
    do{

        f1.get();
        f2.get();
        f3=f1.add(f2);
        f3.display();
        cout<<"do u wish to continue"<<endl;
        cin>>ch;
    }while(ch=='y'||ch=='Y');
    cout<<endl;

    return 0;
}
