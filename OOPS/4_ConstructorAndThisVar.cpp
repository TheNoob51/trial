#include<iostream>
using namespace std;
class Hero{
    public:
    int health = 100;
    char level = 'A';

    void addHealth(){
        if (health < 100){
        health++; }
        else{
            cout<<"It is full";
        }
    }

    void setHealth(){
        int a = 0;
        cout<<"Enter the health initial (keep it less than 100) \n";
        cin>>a;
        if(a<100){
            health = a; 
        }
        else{
            cout<<"Error \n";
        }
    }

    int getHealth(){
        return health;
    }

    Hero(){
        cout<<"Hello from constructor \n";
    }
    Hero(int health){
        this->health = health;
    }

};

int main(){
    // Calling in constructor, non paramertized
    Hero hero;
    hero.setHealth();
    hero.addHealth();
    cout<< hero.getHealth()<<endl;

    // Calling in constructor, paramertized
    Hero Dumb(55);
    cout<<"Hello from dumb, custom constructor with 55 as health \n";
    cout<<Dumb.getHealth();

    // remember that if you initialize the constructor with parameter, then the default constructor doesnt work anymore
      
}