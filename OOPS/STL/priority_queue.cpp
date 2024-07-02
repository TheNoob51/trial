#include<queue>
#include<iostream>
using namespace std;
int main(){
    priority_queue<int> maxi;
    maxi.push(5);
    maxi.push(4);
    maxi.push(8);
    maxi.push(6);

    int n = maxi.size();

    for (int i =0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

    cout<<endl;

    priority_queue<int, vector<int>, greater<int>> mini;
    mini.push(5);
    mini.push(2);
    mini.push(1);
    mini.push(0);

    int n2 = mini.size();

    for (int i = 0; i < n2; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
}