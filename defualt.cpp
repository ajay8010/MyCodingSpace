#include<iostream>
using namespace std;
class demo
{
    int a;
    public:
    demo()
    {
        a=10;
    }
    void put()
    {
        cout<<"a";
    }
};
int main()
{
    demo d;
    d.put();
    return 0;
}