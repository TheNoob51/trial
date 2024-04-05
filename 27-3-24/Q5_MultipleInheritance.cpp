#include <iostream>
using namespace std;
class Drawable
{
public:
  virtual void draw()
  {
    cout << "Drawing something" << endl;
  }
};
class Colored
{
private:
  int color = 0;

public:
  int getColor()
  {
    return color;
  }
  void setColor(int color)
  {
    this->color = color;
  }
};

class Square : public Drawable, public Colored
{
public:
  void draw() override
  {
    cout << "Drawing a square with color: " << getColor() << endl;
  }
};

int main()
{
  Square square;
  int colorIn = 0;
  cout << "Enter No. of color \t";
  cin >> colorIn;
  square.setColor(colorIn);
  square.draw();
  return 0;
}
