#include<iostream>
using namespace std;

int factorial(int n){
    if (n == 0|| n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    cout<<"********************************************************"<<endl;
    cout<<"Factorial Calculator"<<endl;
    cout<<"********************************************************"<<endl;

    int n;
    cout<<"Enter the number to calculate factorial \t";
    cin>>n;
    if (n<0){
        cout<<"Enter number greater than 0";
    }
    else{
        cout<<"Factorial of "<< n <<" is "<< factorial(n);
    }
    return 0;
}
