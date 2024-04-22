#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string name, int age) {
        this->name = name;
        this->age = age;
        cout << "Constructor called for " << name << endl;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    // Function to display student details
    
};

int main() {
    // Creating objects of Student class
    Student s1("A", 22);
    Student s2("B", 20);

    // Accessing member function
    s1.display();
    s2.display();

    return 0;
}

