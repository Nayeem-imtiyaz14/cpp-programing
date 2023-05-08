#include <iostream>

using namespace std;
class A
{
protected:
    int rollno;
    char name[10];
public:
    void input()
    {
        cout<<"Enter roll no"<<endl;
        cin>>rollno;
        cout<<"Enter name"<<endl;
        cin>>name;
    }
    void display()
    {

        cout<<"roll no:"<<rollno<<endl;
        cout<<"name:"<<name<<endl;
    }
};
class B{
    protected:
     float m,s,sst,u,e,z;
    public:
        void input1()
        {
            cout<<"Enter marks"<<endl;
            cin>>m>>s>>u>>sst>>e;
        }
        void sum()
        {
           z=m+sst+s+u+e;
           cout<<"total marks"<<z<<endl;
        }
};
class C:public A,public B
{
    private:
    float f;
    public:
        void per()
        {
            f=(z/500)*100;
        }
        void dis2()
        {
            cout<<"percentage:"<<f<<endl;
        }
        void dis3()
        {
             input();
             input1();
             per();
            display();
            sum();
            dis2();

        }
};
int main()
{
    C cc;
    cc.dis3();
    return 0;
}
