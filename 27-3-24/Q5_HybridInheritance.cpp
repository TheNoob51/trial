#include <iostream>
using namespace std;
// Base class
class Base
{
public:
    void displayBase()
    {
        cout << "Inside Base class" << endl;
    }
};
// Derived class 1 - Single Inheritance
class Derived1 : public Base
{
public:
    void displayDerived1()
    {
        cout << "Inside Derived1 class" << endl;
    }
};
// Derived class 2 - Single Inheritance
class Derived2 : public Base
{
public:
    void displayDerived2()
    {
        cout << "Inside Derived2 class" << endl;
    }
};
// Derived class 3 - Multiple Inheritance
class Derived3 : public Derived1, public Derived2
{
public:
    void displayDerived3()
    {
        cout << "Inside Derived3 class" << endl;
    }
    void displayBase()
    {
        Derived1::displayBase(); // Choose one of the base classes
    }
};
int main()
{
    Derived3 obj;
    // Accessing members of Base class
    obj.displayBase();
    // Accessing members of Derived1 class
    obj.displayDerived1();
    // Accessing members of Derived2 class
    obj.displayDerived2();
    // Accessing members of Derived3 class
    obj.displayDerived3();
    return 0;
}
