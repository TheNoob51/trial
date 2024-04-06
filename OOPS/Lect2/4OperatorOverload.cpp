#include<iostream>
using namespace std;

class A{
    public:
    int a;
    int b;

    int add(){
        return a+b;
    }

    void operator+ (A &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output : "<< value2 - value1<<endl; 
    }

    // when no parameter (operand) is added, that means it will be treated as uninary operator 
    void operator& (){
        cout<<"Hello"<<endl;
    }

    void operator() (){
        cout<<"Hello ()";
    }
};

int main(){
    A a1,a2;
    a1.a = 4;
    a2.a = 7;

    a1 + a2;
    &a1 ;
    a2();
}