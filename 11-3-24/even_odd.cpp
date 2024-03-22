#include<iostream>
using namespace std;
int main(){
    
    cout<<"***********************************************************"<<endl;
    cout<<"Even Odd Number Checker"<<endl;
    cout<<"***********************************************************"<<endl;


    int a;
    cout<<"Enter the number to be checked \t";
    cin>>a;
    if (a%2 == 0){cout<<"It is even";}
    else{cout<<"It is Odd";}
    return 0; 
}