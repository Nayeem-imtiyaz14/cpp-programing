/*Create a structure called employee that contains two members: an employee number
(type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
in this data for three employees, store it in three variables of type struct employee, and
then display the information for each employee.*/
#include <iostream>
using namespace std;
struct employee{
   int employee_num;
   float employee_compensation;
};
int main()
{
    employee e1,e2;
    cout << "Enter details of employee e1" << endl;
    cin>>e1.employee_num>>e1.employee_compensation;
        cout << "Enter details of employee e2" << endl;
    cin>>e2.employee_num>>e2.employee_compensation;
        cout <<e1.employee_num<<"-"<<e1.employee_compensation << endl;
        cout <<e2.employee_num<<"-"<<e2.employee_compensation << endl;
    return 0;
}
