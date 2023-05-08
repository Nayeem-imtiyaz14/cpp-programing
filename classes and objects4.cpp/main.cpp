/*passing obj as a function argument*/
#include <iostream>

//using namespace std;
class distance{
    private:
     int feet,inches;
    public:
        distance()
        {
            feet=0;
            inches=0;
        }
        distance(int a,int b)
        {
            feet=a;
            inches=b;
        }
        distance add(distance d)
        {
            distance temp;
            temp.feet=feet+d.feet;
            temp.feet+=(inches+d.inches)/12;
            temp.inches=(inches+d.inches)%12;
            return(temp);
        }
        void display()
        {
           std:: cout<<feet<<" "<<inches;
        }

};

int main()
{

    distance d1(20,30);
    distance d2(40,50);
    distance d3;
    d3=d1.add(d2);
    d3.display();
    return 0;
}
