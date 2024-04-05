#include<iostream>
#include<cstring>
using namespace std;
// In Deep copy, an object is created by copying data of all variables, 
// and it also allocates similar memory resources with the same value to the object.
// In order to perform Deep copy, we need to explicitly define the copy constructor 
// and assign dynamic memory as well, if required. 
// Also, it is required to dynamically allocate memory to the variables in the other constructors,
// as well.
class Hero{
    public:
    int health = 100;
    char level = 'A';
    char *name;

    void setName(char name[]){
        strcpy(this->name , name);
    }

    void getStats(){
        cout<<"Health : "<<health<<endl;
        cout<<"Level : "<<level<<endl;
        cout<<"Name : "<<name<<endl;
    }

    Hero(){
        cout<<"Hello from constructor \n";
        name = new char[100];
    }

    Hero(Hero &temp){
        char *chr = new char[strlen(temp.name)+1];
        strcpy(chr, temp.name);
        this->name = chr;


        cout<<"\nHello from copy constructor\n";
        this->level = temp.level;
        this->health = temp.health;
    }
};
int main(){
    Hero h1;
    char name[] = "noone";
    h1.setName(name);

    cout<<"\nThe Player H1 \n";
    h1.getStats();

    Hero h2 = h1;
    cout<<"\nThe Player H2 \n";
    h2.getStats();

    h1.name[0] = 'Y';

    cout<<"\nThe Changed name in player H1 (N = Y) \n";
    h1.getStats();

    cout<<"\n The changes in player H2\n";
    h2.getStats();
}

