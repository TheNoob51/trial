#include<iostream>
#include<string>
#include<cstring>
using namespace std;
// In shallow copy, an object is created by simply copying the data of 
// all variables of the original object. 
// This works well if none of the variables of the object are defined in the heap section of memory.
// If some variables are dynamically allocated memory from heap section, 
// then the copied object variable will also reference the same memory location.
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

};
int main(){
    Hero h1;
    char name[] = "noone";
    h1.setName(name);

    cout<<"\nThe Player H1 \n";
    h1.getStats();

    // using assignment operator 
    Hero h2 = h1;
    cout<<"\nThe Player H2 \n";
    h2.getStats();

    h1.name[0] = 'Y';

    cout<<"\nThe Changed name in player H1 (N = Y) \n";
    h1.getStats();

    cout<<"\n The changes in player H2\n";
    h2.getStats();
}
