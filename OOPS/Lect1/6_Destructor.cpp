#include <iostream>
using namespace std;
class Hero
{
public:
    int health = 100;
    char level = 'A';
    char name = 'N';

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

    Hero(char name)
    {
        this->name = name;
        cout << "Hello from constructor : "<< this->name <<endl;

    }
    Hero(int health)
    {
        this->health = health;
    }

    ~Hero(){
        cout<<"Destructor Called :) for "<<this->name <<endl;
    };
};

int main()
{
    // static allocation of object will automatically call the destructor
    Hero hero('G');
    hero.getStats();
    cout<<""<<endl;
    
    //dynamic allocationof object will not call destructor automatically
    Hero *b = new Hero('H');
    // manual removal for b object
    delete b;

    

    return 0;
}