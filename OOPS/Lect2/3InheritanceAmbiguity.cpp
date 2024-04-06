#include <iostream>
using namespace std;

class A
{
public:
    void ab()
    {
        cout << "HeelloA"<<endl;
    }
};

class B
{
public:
    void ab()
    {
        cout << "HeelloB"<<endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C obj1;
    // obj1.ab() will be ambigious
    obj1.A::ab();
    obj1.B::ab();
}