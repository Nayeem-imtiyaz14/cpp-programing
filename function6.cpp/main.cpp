
#include <iostream>
using namespace std;
struct point{
int x,y;};
point sum(point ,point);
int main()
{
    point p1,p2,p3;
    cout << "Enter p1,p2" << endl;
    cin>>p1.x>>p1.y;
    cin>>p2.x>>p2.y;
    p3=sum(p1,p2);
    cout<<p3.x<<" "<<p3.y;
    return 0;
}
point sum(point p1,point p2)
{
    point temp;
    temp.x=p1.x+p2.x;
    temp.y=p1.y+p2.y;
    return(temp);
}
