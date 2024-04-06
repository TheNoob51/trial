#include<iostream>
#include<string>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return age;
    } 
    int getWeight(){
        return weight;
    }
};

class Male : public Human{
    public:
    string color;

    void sleep(){
        cout<<"Hello Sleepy male"<<endl;
    }
};

int main(){
    Male m1;
    m1.age = 21;
    m1.color = "white";
    m1.height = 5;
    m1.weight = 69;

    m1.sleep();
    cout<<m1.getAge()<<endl;
}

// Mode of inheritance
// Private Data member of superclass cannot be inherited.
/*
superclass    mode of inheritance   access modifier for subclass
Public          public                  public 
Public          protected               protected
Public          private                 private

Protected       public                  protected
Protected       Protected               protected
Protected       private                 private





*/