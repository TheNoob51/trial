#include <iostream>
using namespace std;
class ComplexNumber {
private:
  double real;
  double imag;

public:
  // Constructor
  ComplexNumber(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

  // Overload the + operator for addition of complex numbers
  ComplexNumber operator+(const ComplexNumber& other) const {
    return ComplexNumber(real + other.real, imag + other.imag);
  }

  // Simpler output (no friend function)
  void display() {
    cout << real;
    if (imag > 0) {
      cout << " + " << imag << "i";
    } else if (imag < 0) {
      cout << " - " << -imag << "i";
    }
  }
};

int main() {
  ComplexNumber num1(2.5, 3.1);
  ComplexNumber num2(1.4, -2.7);

  ComplexNumber sum = num1 + num2;

  cout << "First number: ";
  num1.display();
  cout << endl;

  cout << "Second number: ";
  num2.display();
  cout << endl;

  cout << "Sum: ";
  sum.display();
  cout << endl;

  return 0;
}
