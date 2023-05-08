/*Write a function that takes two Distance values as arguments and returns the larger one.
Include a main() program that accepts two Distance values from the user, compares
them, and displays the larger. (See the RETSTRC program for hints.)*/
#include <iostream>
int distance(int,int);
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter values:" << endl;
    cin>>a>>b;
    c=distance(a,b);
    cout<<"largest of two:"<<c;
    return 0;
}
int distance(int a,int b)
{

    if(a>b)
        return(a);
    else return(b);
}
