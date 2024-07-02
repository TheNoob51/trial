// C++ program to demonstrate the use of std::max_element
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
int main()
{
    // creating vector
    vector<int> v = { 10, 88, 2, 9, 45, 82, 42, 221 };

    // Finding the maximum value between the first and the
    // fourth element
    auto max = max_element(v.begin(), v.end());

    cout << "Maximum Element: " << *max << "\n";
    return 0;
}