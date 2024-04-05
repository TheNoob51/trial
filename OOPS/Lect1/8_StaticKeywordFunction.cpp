#include <iostream>
using namespace std;
class Hero
{
public:
    int health = 100;
    char level = 'A';
    char name = 'N';
    static int TimeTOCOmplete;

    static int Get(){
        return TimeTOCOmplete;
    }

    void addHealth()
    {
        if (health < 100)
        {
            health++;
        }
        else
        {
            cout << "It is full";
        }
    }

    void setHealth()
    {
        int a = 0;
        cout << "Enter the health initial (keep it less than 100) \n";
        cin >> a;
        if (a < 100)
        {
            health = a;
        }
        else
        {
            cout << "Error \n";
        }
    }

    int getHealth()
    {
        return health;
    }

    void getStats()
    {
        cout << "Health : " << health << endl;
        cout << "Level : " << level << endl;
    }

    // Hero(char name)
    // {
    //     this->name = name;
    //     cout << "Hello from constructor : "<< this->name <<endl;

    // }

    // Hero(int health)
    // {
    //     this->health = health;
    // }

    // ~Hero(){
    //     cout<<"Destructor Called :) for "<<this->name <<endl;
    // };
};

int Hero::TimeTOCOmplete = 10;

int main()
{
    cout<<Hero::Get()<<endl;
    return 0;
}