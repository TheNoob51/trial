#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string word;

    cout << "********************************************************" << endl;
    cout << "Palindrome Checker" << endl;
    cout << "********************************************************" << endl;

    cout << "Enter the word to be checked: ";
    cin >> word;

    string reversedWord = word;
    reverse(reversedWord.begin(), reversedWord.end());

    // If word is equal to its reverse, it's a palindrome
    if (word == reversedWord) {
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }

    return 0;
}
