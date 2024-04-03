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

};

int main(){
    Hero hero;
    hero.setHealth();
    hero.addHealth();
    cout<<hero.getHealth();
}