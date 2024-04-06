#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

class over
{
public:
    int a, b;
    void get(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void operator++()
    {
        a++;
        b++;
        cout << endl
             << "Incremented value" << endl;
        cout << a << "\t" << b;
    }
    void operator-()
    {
        a = -a;
        b = -b;
        cout << endl
             << "Inverse is:" << endl;
        cout << a << b;
    }
    over operator*(over &ob2)
    {
        over t;
        t.a = a * ob2.a;
        t.b = b * ob2.b;
        return (t);
    }
};
int main()
{
    int x, y;
    cout << endl
         << "Enter  the values of a,b" << endl;
    cin >> x >> y;
    over ob1, ob2, ob3;
    ob1.get(x, y);
    ++ob1;
    ob2.get(x, y);
    -ob2;
    ob3 = ob1 * ob2;
    cout << endl
         << "The multiplied value" << endl
         << ob3.a << endl;
    getch();
    return 0;
}
