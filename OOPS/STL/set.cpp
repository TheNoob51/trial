#include<set>
#include<iostream>
using namespace std;
int main(){
   set<int> s;
   s.insert(5);
   s.insert(6);
   s.insert(54);
   s.insert(1);
   s.insert(52);
   s.insert(5);
   s.insert(5);

   for (int i : s){
    cout<<i<<endl;
   }

   //auto it = s.begin(); can also be used
   set<int>::iterator it = s.begin();
   set<int>::iterator ita = s.end();

   auto finna = s.find(5);//it will give value 5, since it is used as dereferencing (*finna)
   
   cout<<endl<<*it<<endl;
   cout<<*ita<<endl;
   cout<<*finna<<endl;


}