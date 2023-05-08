/*passing objects as function members*/
#include <iostream>
using namespace std;
class point{
    private:
int x,y;
    public:
        point()
        {
            x=0;
            y=0;
        }
        point(int a,int b)
        {
            x=a;
            y=b;
        }
        point add(point p2)
        {
            point temp;
           temp.x=x+p2.x;
            temp.y=y+p2.y;
            return(temp);
        }
        void display()
        {
            cout<<x<<" "<<y<<endl;
        }
};

int main()
{
    point p1(2,3);
    point p2(4,5);
    point p3;
    p3=p1.add(p2);
    p3.display();
    return 0;
}
