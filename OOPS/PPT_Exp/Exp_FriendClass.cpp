#include <iostream>
using namespace std;
class first
{
    int x;
public:
    friend second;
    void get()
    {
        cout << "enter a number \n";
        cin >> x;
    }
};

class second
{
public:
    void print(first t)
    {
        cout << "the number is " << t.x;
    }
};

int main()
{
    first f;
    second s;
    f.get();
    s.print(f);
    return 0;
}
