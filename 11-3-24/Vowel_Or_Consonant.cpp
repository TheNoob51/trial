#include<iostream>
using namespace std;
int main(){
    char input_char;

    cout<<"***********************************************************"<<endl;
    cout<<"Vowel Checker"<<endl;
    cout<<"***********************************************************"<<endl;

    cout<<"Enter the Character \t";
    cin>>input_char;

    if (input_char == 'A' || input_char == 'E' || input_char == 'I' || input_char == 'O' || input_char == 'U' || input_char == 'a' || input_char == 'e' || input_char == 'i' || input_char == 'o' || input_char == 'u')
    {cout<<"It is Vowel";}
    else{cout<<"It is consonant";}
    return 0; 
}