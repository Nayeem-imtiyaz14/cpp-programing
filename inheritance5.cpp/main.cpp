#include <iostream>

using namespace std;
class publication{
   protected:
       string s1;
       float price;
   public:
       void put(){
    cout<<"Enter string";
    cin.ignore();
    getline(cin,s1);
    cout<<"Enter price";
    cin>>price;
       }
};
class book:public publications
{


};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
