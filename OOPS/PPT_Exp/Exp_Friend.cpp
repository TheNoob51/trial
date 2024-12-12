#include <iostream>
#include <conio.h>
using namespace std;
class one
{
private:
    char name[10];
    int no;

public:
    void two()
    {
        cout << "\nenter the no";
        cin >> no;
        cout << "\nenter the name";
        cin >> name;
        cout <<"no. using no friend"<<no << endl
             <<"name using no friend"<< name;
    };
    friend void print(one &a);
};

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
