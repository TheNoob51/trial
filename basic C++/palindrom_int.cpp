#include <iostream>
using namespace std;
int main() {

    int number;
    int reversedNumber = 0;

    cout<<"********************************************************"<<endl;
    cout<<"Palindrome checker"<<endl;
    cout<<"********************************************************"<<endl;
    cout << "Enter the number to be reversed"<<endl;
    cin >> number;

    int i = number;
    // Reverse the number
    while (i > 0) {
        int digit = i % 10;
        reversedNumber = reversedNumber * 10 + digit;
        i /= 10;
    }

    if (number == reversedNumber){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
    // Return 0 to indicate successful execution
    return 0;
}
