/*Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent
toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
track of the number of cars that have gone by, and of the total amount of money collected.
Objects and Classes
Model this tollbooth with a class called tollBooth. The two data items are a type
unsigned int to hold the total number of cars, and a type double to hold the total amount
of money collected. A constructor initializes both of these to 0. A member function called
payingCar() increments the car total and adds 0.50 to the cash total. Another function,
called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
member function called display() displays the two totals. Make appropriate member
functions const.
Include a program to test this class. This program should allow the user to push one key
to count a paying car, and another to count a nonpaying car. Pushing the Esc key should
cause the program to print out the total cars and total cash and then exit.
*/
#include <iostream>
using namespace std;
class tollbooth{
private:
    unsigned int total_cars;
    float total_money;
public:
   tollboth()
   {
       total_cars=0;
       total_money=0;
   }
   void payingcars()
   {
       total_cars++;
       total_money+=0.50;
   }
   void nopaycar()
   {
       total_cars++;
       total_money+=0;
   }
   void display()
   {

       cout<<"Total cars= "<<total_cars<<endl;
       cout<<"Total money= "<<total_money<<endl;
   }
};
int main()
{
    tollbooth bridge;
    char ch,c;
    do{
    cout<<"Enter 0 for nonpaying cars "<<endl;
    cout<<"Enter 1 for paying cars "<<endl;
    cout<<"Enter 2 to exit"<<endl;
    cout<<"Enter choice"<<endl;
    cin>>ch;
    switch(ch)
    {

    case'0':
        bridge.nopaycar();
    break;
    case'1':
        bridge.payingcars();
        break;
    case'2':
        bridge.display();
        exit(0);
        break;

    }
    cout<<"do u wish to continue"<<endl;
    cin>>c;
    }
    while(c=='y'||c=='Y');
    return(0);
}


