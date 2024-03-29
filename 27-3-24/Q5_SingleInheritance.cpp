#include <iostream>
using namespace std;

class Shape {
public:
  virtual void draw() {
    cout << "Drawing a shape" << endl;
  }
};

class Circle : public Shape {
public:
  void draw() override {
    cout << "Drawing a circle" << endl;
  }
};

int main() {
  Circle circle;
  circle.draw(); // Calls Circle's draw function
  return 0;
}
