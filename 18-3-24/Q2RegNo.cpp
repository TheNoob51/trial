#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string regNos[5];

public:
    // Function to set registration numbers
    void setRegNos() {
        cout << "Enter 5 Registration Numbers:" << endl;
        for (int i = 0; i < 5; ++i) {
            cout << "Registration Number " << i + 1 << ": ";
            getline(cin, regNos[i]);
        }
    }

    // Function to print registration numbers
    void printRegNos() {
        cout<<endl;
        cout << "Registration Numbers:-" << endl;
        for (int i = 0; i < 5; ++i) {
            cout << "Registration Number " << i + 1 << ": " << regNos[i] << endl;
        }
    }
};

int main() {
    Student student;
    student.setRegNos();
    student.printRegNos();
    return 0;
}
