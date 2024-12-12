#include <iostream>
using namespace std;

class first
{
    int x;  // private member x
public:
    void get()
    {
        cout << "Enter a number: ";
        cin >> x;
    }

    // Declare second as a friend of first
    friend class second;
};

class second
{
public:
    void print(first t)
    {
        // Access private member x of first through the friend function
        cout << "The number is " << t.x << endl;
    }
};

int main()
{
    first f;
    second s;

    f.get();   // Input a number into f
    s.print(f); // Print the number using s

    return 0;
}
