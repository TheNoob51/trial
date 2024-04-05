#include <iostream>
using namespace std;

inline float mult(float x, float y)
{
    return (x * y);
}
inline int divi(int p, int q)
{
    return (p + q);
}
int main()
{
    float a = 5.2, b = 5.5;
    cout << "\n\n\nthe result is\n\t ";
    cout << mult(a, b) << "\n";
    cout << divi(a, b);
    return 0;
}
