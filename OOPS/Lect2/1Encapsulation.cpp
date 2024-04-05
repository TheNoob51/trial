#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int age;
    int long number;

public:
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return age;
    }
    void setNum(int number)
    {
        this->number = number;
    }
    int getNum()
    {
        return number;
    }
};

int main(){
    Student s1;
    s1.setAge(21);
    s1.setName("Noone");
    s1.setNum(987654321);

    cout<<"The age of Student \t"<<s1.getAge()<<endl;
    cout<<"The number of Student\t"<<s1.getNum()<<endl;
    cout << "The name of student is\t" << s1.getName()<<endl;
}