#include<iostream>
#include<string>
using namespace std;

class Hero{
    public:
    int a = 20;
    void getA(){
        cout<<b<<endl;
    }

    void SetV(){
        cin>>v;
        cout<<"Thank you for setting v\n";
    }

    void getV(){
        cout<<v<<endl;
    }

    private:
    int b = 3;
    int v = 54;
    char s = 'V';
};

int main(){
    Hero hero;
    cout<<hero.a<<endl;
    cout<<sizeof(Hero)<<endl;
    hero.SetV();
    hero.getV();

}