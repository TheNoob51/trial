#include <iostream>
using namespace std;
class sample
{
private:
public:
    static int count;
    sample()
    {
        count++;
    }
    void show()
    {
        cout << "count= " << count << "\n";
    }
};
int sample::count = 10;
int main()
{
    
    sample s1, s2, s3;
    s1.show();
    s2.show();
    s3.show();
    return 0;
}
