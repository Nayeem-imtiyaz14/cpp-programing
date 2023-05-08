/*Create a class that imitates part of the functionality of the basic data type int. Call the
class Int (note different capitalization). The only data in this class is an int variable.
Include member functions to initialize an Int to 0, to initialize it to an int value, to display it (it looks just like an int), and to add two Int values.
Write a program that exercises this class by creating one uninitialized and two initialized
Int values, adding the two initialized values and placing the response in the uninitialized
value, and then displaying this result*/
#include <iostream>

using namespace std;
class Int{
    private:
   int x;
    public:
        Int()
        {
          x=0;
        }
        Int(int a)
        {

            x=a;
        }
        void add( Int i1,Int i2)
        {
          x=i1.x+i2.x;
        }
        void display()
        {
            cout<<x;
        }
};
int main()
{
    Int aa(2);
    Int bb(3);
    Int cc;
    cc.add(aa,bb);
    cc.display();
    return 0;
}
