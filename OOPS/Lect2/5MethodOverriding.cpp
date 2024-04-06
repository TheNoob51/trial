#include <iostream>
using namespace std;

class Animal
{
public:
    void ab()
    {
        cout << "HeelloA"<<endl;
    }
};

class Dog : public Animal
{
public:
    void ab()
    {
        cout << "HeelloB"<<endl;
    }
};

int main()
{
    Dog obj1;
    // obj1.ab() will be ambigious
    obj1.Animal::ab();
    obj1.ab();

}