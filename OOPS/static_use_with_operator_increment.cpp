#include <iostream>
using namespace std;
class Player
{
  private:
    int id {0};
    
  public:
  static int next_id;
    int getID() { return id; }
    Player()  {  
        cout<<"Id before "<<id<<endl;
        id = next_id++; 
        cout<<"ID after "<<id<<endl;
    }
};
int Player::next_id = 1;
int main()
{
  Player p1;
  Player p2;
  Player p3;
  cout << p1.getID() << " ";
  cout << p2.getID() << " ";
  cout << p3.getID()<<endl;

  cout<<"final value of next_id -> "<<Player::next_id<<endl;
  return 0;
}