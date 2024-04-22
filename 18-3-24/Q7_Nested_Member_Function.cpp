#include <iostream>
using namespace std;
class A
{
private:
    int a;
    int b;
    void large()
    {
        if (a > b)
        {
            cout << a;
        }
        else
        {
            cout << b;
        }
    }

public:
    void getab()
    {
        cout << "Enter values of a and b" << endl;
        cin >> a;
        cin >> b;
    }
    void putab()
    {
        cout << "The Values are : " << endl;
        cout << a << " \t" << b << endl;
        cout << "The bigger no. is" << endl;
        large();
    }
};
int main()
{
    A ab;
    ab.getab();
    ab.putab();
    return 0;
}
