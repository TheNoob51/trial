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
    // We can use *hero as dynamic allocation of hero class
    // It will be treated as address for the memory allocation in heap memory
    // hero->function() is used to call the the defined object from the heap memory
    // (*hero).function does the same thing

    // initialize the pointer using this code
    Hero *hero = new Hero();


    hero->setHealth();
    (*hero).addHealth();
    cout<< hero->getHealth();
}