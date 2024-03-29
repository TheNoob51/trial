#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    int intResult;
    double doubleResult;

    // Calling the function with integers
    intResult = add(5, 7);
    std::cout << "Result of adding integers: " << intResult << std::endl;

    // Calling the function with doubles
    doubleResult = add(3.5, 4.2);
    std::cout << "Result of adding doubles: " << doubleResult << std::endl;

    return 0;
}
