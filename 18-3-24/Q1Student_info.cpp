#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string regNo;
    string name;
    string address;
    string pincode;

public:
    // Function to set student details
    void setDetails() {
        cout << "Enter Registration Number: ";
        getline(cin, regNo);

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Address: ";
        getline(cin, address);

        cout << "Enter Pincode: ";
        getline(cin, pincode);
    }

    // Function to print student details
    void printDetails() {
        cout << "--------------------------------------------------------------------------------------------------------"<<endl;
        cout << "The Details Are : "<<endl;
        cout << "Registration Number: " << regNo << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Pincode: " << pincode << endl;
    }
};

int main() {
    Student student;
    student.setDetails();
    student.printDetails();
    return 0;
}
