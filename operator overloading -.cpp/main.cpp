
/*overloading - operator*/
#include <iostream>

using namespace std;
class point{
private:
    int x,y;
public:
    point()
    {
        x=0;y=0;
    }
    void get()
    {
        cout<<"Enter points:"<<endl;
        cin>>x>>y;
    }
    void display()
    {
        cout<<x<<","<<y<<endl;
    }
    point operator -(point p)
    {
        point temp;
        temp.x=x-p.x;
        temp.y=y-p.y;
        return(temp);
    }

};
int main()
{
    point p1,p2,p3;
    p1.get();
    p2.get();
    cout<<"difference:";
    p3=p1-p2;
    p3.display();
    return 0;
}

