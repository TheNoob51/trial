#include<iostream>
using namespace std;
int main(){
    int first = 0, second = 1, next;
    int n = 8;
    cout << "Fibonacci Sequence up to " << n << " terms:\n";

    for (int i = 0; i < n; ++i) {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}