#include <iostream>
using namespace std;

template <class T>
class A
{
public:
    T num1;
    T num2;

    // A(T n1, T n2){
    //     this->num1 = n1;
    //     this->num2 = n2;
    // }  // Constructor to initialize members

    A(T n1, T n2) : num1(n1), num2(n2) {}
    // can also be used in it


    void add()
    {
        cout << "Addition of num1 and num2: " << num1 + num2 << endl;
    }
};

int main()
{
    A<int> d(5, 6);  // Using constructor to initialize
    d.add();

    A<float> e(5.5, 6.5);  // Example with float data type
    e.add();

    return 0;
}
