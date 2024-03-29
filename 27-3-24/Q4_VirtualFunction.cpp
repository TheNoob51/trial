#include <iostream>

// Base class
class Base {
public:
    // Virtual function to be overridden
    virtual void display() {
        std::cout << "Inside Base class" << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Override the display function
    void display() override {
        std::cout << "Inside Derived class" << std::endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    // Call display function of Base class
    baseObj.display();    // Calls Base class display function

    // Call display function of Derived class
    derivedObj.display(); // Calls Derived class display function

    return 0;
}
