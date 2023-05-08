/*Create an employee class, basing it on Exercise 4 of Chapter 4. The member data should
comprise an int for storing the employee number and a float for storing the employee’s
compensation. Member functions should allow the user to enter this data and display it.
Write a main() that allows the user to enter data for three employees and display it*/
#include <iostream>

using namespace std;
class employee{
 int emp_no;
 float emp_comp;
 public:
     void get()
     {
         cout<<"Enter details:"<<endl;
         cin>>emp_no>>emp_comp;
     }
     void display()
     {
         cout<<emp_no<<" "<<emp_comp<<endl;
     }
};
int main()
{
    employee e1,e2,e3;
    e1.get();
    e2.get();
    e3.get();
    e1.display();
    e2.display();
    e3.display();
    return 0;
}
