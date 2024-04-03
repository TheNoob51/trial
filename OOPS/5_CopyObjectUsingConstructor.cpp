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

    void getStats(){
        cout<<"Health = "<< this->health<<endl;
        cout<<"Level = "<< this->level<<endl;
    }

    //Constructors
    Hero(){
        cout<<"Hello from default constructor \n";
    }

    Hero(int health, int level){
        cout<<"Hello from custom constructor \n";
        this->health = health;
        this->level = level;
    }

    // pass bby reference is used since if we use pass by value, 
    // it will be stuck in infinite loop of calling the functions again and again
    Hero(Hero &temp){
        cout<<"\nHello from copy constructor\n";
        this->level = temp.level;
        this->health = temp.health;
    }
};

int main(){
    Hero Suresh(25,'C');
    Suresh.getStats();

    cout<<"\nGetting the player \'R\' ";
    // we copy the object of Suresh as R
    // by definition, we say default copy constructor is called
    Hero R(Suresh);
    R.getStats();

    //calling by custom copy constructor

}