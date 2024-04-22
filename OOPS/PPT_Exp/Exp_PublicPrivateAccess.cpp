#include <iostream>
using namespace std;
class person
{
    //
    void getdata();
    char name[20];
    int age;

public:
    
    void disp();
};
void person::getdata()
{
    
    cout << " \n enter the name  and age\n ";
    cin >> name >> age;
}
void person::disp()
{
    this->getdata();
    cout << " the name is :" << name;
    cout << "the age is   :" << age;
}
int main()
{
    person a;
    a.disp();
    return 0;
}
