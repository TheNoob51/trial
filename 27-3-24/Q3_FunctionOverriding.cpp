#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void display() {
        cout << "Inside Base class" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void display() {
        cout << "Inside Derived class" << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    cout<<"Before Overriding : ";
    baseObj.display();
    cout<<"After overriding : ";
    derivedObj.display(); 

    return 0;
}
