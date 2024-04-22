#include <iostream>
#include <conio.h>
using namespace std;
class one
{
private:
    char name[10];
    int no;

public:
    void two();
    friend void print(one &g);
};


void one::two()
{
    cout << "\nenter the no and name";
    cin >> no;
    cin >> name;
    cout << no << endl << name;
}


void print(one &a)
{
    cout << "\nfriend function\n";
    cout << a.no << endl;
    cout << a.name;
}


int main()
{

    one a;
    a.two();
    print(a);
    getch();
    return 0;
}
