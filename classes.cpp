#include <iostream>

using namespace std;

class Player
{
   public:
      float x;
      float y;
      float z;
};

int main()
{
   Player PlayerOne;

   PlayerOne.x = 5.0;
   PlayerOne.y = 6.0;
   PlayerOne.z = 7.0;

   cout << "Player x: " << PlayerOne.x << " y: " << PlayerOne.y << " z: " << PlayerOne.z <<endl;
   return 0;
}
