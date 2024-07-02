#include<map>
#include<iostream>
using namespace std;
int main(){
   map<int,string> m {{1,"Hello"},{5,"bkfs"}};
   m.insert({3,"mamas"});

   for (auto i : m){
    cout<<i.first<<"\t"<<i.second<<endl;
   }
   
}