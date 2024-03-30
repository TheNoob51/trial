#include <iostream>
using namespace std;
class Shape {
public: void draw() {
    cout << "Drawing a shape" << endl;
  }
};
class Circle : public Shape {
public:
  void drawCircle() {
    cout << "Drawing a circle" << endl;
  }
};
int main() {
  Circle circle;
  circle.draw(); // Calls Circle's draw function from shape
  circle.drawCircle();
  return 0;
}
