#include <iostream>
using namespace std;
// Base class
class Shape
{
public:
    void draw()
    {
        cout << "Shape drawn" << endl;
    }
};
// Derived class 1 - Single Inheritance
class Quadrilateral : public Shape
{
public:
    void drawQuad()
    {
        cout << "Quadrilateral drawn" << endl;
    }
};
// Derived class 2 - Multilevel Inheritance
class Square : public Quadrilateral
{
public:
    void drawSquare()
    {
        cout << "Square is drawn" << endl;
    }
};
int main()
{
    Square square;

    square.draw();
    square.drawQuad();
    square.drawSquare();
    return 0;
}
