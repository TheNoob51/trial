#include <iostream>
using namespace std;
class a
{
    char name[20];

public:
    void one();
};
void a::one()
{
    cout << "enter the name";
    cin >> name;
    cout << "the name u have entered is" << name;
}
int main()
{
    a b;
    b.one();
    return 0;
    
}