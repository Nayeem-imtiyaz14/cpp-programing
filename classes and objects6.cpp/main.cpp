/* Create a class called time that has separate int member data for hours, minutes, and
seconds. One constructor should initialize this data to 0, and another should initialize it
to fixed values. Another member function should display it, in 11:59:59 format. The final
member function should add two objects of type time passed as arguments.*/
#include <iostream>

using namespace std;
class time{
    private:
 int h,m,s;
    public:
        time()
        {
            h=0;
            m=0;
            s=0;
        }
        time(int x,int y,int z)
        {
            h=x;
            m=y;
            s=z;
        }
        void display()
        {
            cout<<h<<":"<<m<<":"<<s;
        }
        time add(time t)
        {
            time temp;
            temp.h=h+t.h;
            temp.m=m+t.m;
            temp.s=s+t.s;
            return(temp);
        }
} ;
int main()
{
    time t1(2,3,4);
    time t2(5,6,7);
    time t3;
    t3=t1.add(t2);
    t3.display();
    return 0;
}
