#include <iostream>

using namespace std;
class time{
private:
    int h,m,s;
public:
    time(int a,int b,int c)
    {
        h=a;
        m=b;
        s=c;
    }
    void show()
    {
        cout<<"time:"<<h<<"/"<<m<<"/"<<s;
    }
    int operator >(time t)
    {
        if(h>t.h)
            return(1);
        else if(m>t.m)
            return(1);
        else if(s>t.s)
            return(1);
        else return(0);
    }
};
int main()
{
    time t1(12,3,4);
    time t2(6,7,8);
    if(t1>t2)
        t1.show();
    else
        t2.show();
    return 0;
}
