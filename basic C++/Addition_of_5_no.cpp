#include<iostream>
using namespace std;
int main(){
    cout<<"***********************************************************"<<endl;
    cout<<"Number Adder"<<endl;
    cout<<"***********************************************************"<<endl;
    int num1,num2,num3,num4,num5;
    cout<<"Enter 5 numbers to add \n";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;
    cin>>num5;
    int sol = num1 + num2 + num3 + num4 + num5;
    cout<<"The sum of five numbers are : "<<sol;
    return 0;
}