#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {

    // Calling the function with integers
    int intResult = add(5, 7);
    cout << "Result of adding integers: " << intResult << endl;

    // Calling the function with doubles
    double doubleResult = add(3.5, 4.2);
    cout << "Result of adding doubles: " << doubleResult << endl;

    return 0;
}
