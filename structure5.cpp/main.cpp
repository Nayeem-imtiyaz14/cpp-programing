/*Create a structure of type date that contains three members: the month, the day of the
month, and the year, all of type int. (Or use day-month-year order if you prefer.) Have
the user enter a date in the format 12/31/2001, store it in a variable of type struct date,
then retrieve the values from the variable and print them out in the same format
*/#include <iostream>

using namespace std;
struct date{
 int m,d,y;
};
int main()
{
     date d1,d2;
  cout<<"Enter date"<<endl;
  cin>>d1.m>>d1.d>>d1.y;
   cout<<d1.m<<"/"<<d1.d<<"/"<<d1.y<<endl;
   d2=d1;
   cout<<d2.m<<"/"<<d2.d<<"/"<<d2.y;
    return 0;
}
