#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string NameArray[10];

public:
    // Function to set names
    void setNames() {
        cout << "Enter 10 names:" << endl;
        for (int i = 0; i<10; i++){
            cout<<"Name "<<i+1<<" : ";
            getline(cin,NameArray[i]);
        }
    }

    // Function to print names
    void printNames() {
        cout << "--------------------------------------------------------------------------------------------------------" << endl;
        cout << "Names:-" << endl;
        for (int i = 0; i<10; i++){
            cout<<"Name "<<i+1<<" : "<<NameArray[i]<<endl;
        }
    }
};

int main() {
    Student student;
    student.setNames();
    student.printNames();
    return 0;
}
