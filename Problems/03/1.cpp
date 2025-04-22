#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Tower
{
  int height;

public:
  Tower() : height(1) {};
  Tower(int h) : height(h) {};
  int getHeight() const { return height; };
};

int main()
{
  Tower t1;
  Tower t2(100);

  cout << "Height of t1: " << t1.getHeight() << endl;
  cout << "Height of t2: " << t2.getHeight() << endl;
  return 0;
}