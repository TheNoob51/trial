#include <iostream>
using namespace std;

class Drawable {
public:
  virtual void draw() {
    cout << "Drawing something" << endl;
  }
};

class Colored {
public:
  int color;
  Colored(int c = 0) : color(c) {}
};

class Square : public Drawable, public Colored {
public:
  void draw() override {
    cout << "Drawing a square with color: " << color << endl;
  }
};

int main() {
  Square square(); // Set color to 2
  square.draw();
  return 0;
}
