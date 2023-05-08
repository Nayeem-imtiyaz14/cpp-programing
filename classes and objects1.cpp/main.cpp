/*finding area and circumfrence of a circle using classes*/
#include <iostream>

using namespace std;
class circle{
private:
    float r;
public:
    void set()
    {
        cout<<"Enter value:"<<endl;
        cin>>r;
    }
    void area()
    {
        cout<<"area="<<3.14*r*r<<endl;
    }
    void cir(){
        cout<<"circumfrence="<<2*3.14*r;
    }
};
int main()
{
    circle c1;
    c1.set();
    c1.area();
    c1.cir();
    return 0;
}
