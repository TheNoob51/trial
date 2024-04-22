#include <iostream>
using namespace std;
class MyClass {
private:
    int data;

public:
    MyClass(int d){
        data = d;
    }

    // Declaration of the friend function
    friend void displayData(const MyClass &obj);
};

// Definition of the friend function
void displayData(const MyClass &obj) {
    cout << "Data in MyClass: " << obj.data << endl;
}

int main() {
    MyClass obj(42);
    
    // Call to the friend function
    displayData(obj);

    return 0;
}