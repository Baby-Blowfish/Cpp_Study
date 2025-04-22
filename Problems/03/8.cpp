#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Integer
{
  int value;
public: 
  Integer(int value) : value(value) {}
  Integer(string value) : value(stoi(value)) {}

  int get() const
  {
    return value;
  }

  void set(int value)
  {
    this->value = value;
  }

  bool isEven() const
  {
    return !(value % 2 != 0);
  }
};

int main()
{
  Integer n(30);
  cout << n.get() << ' ';
  n.set(50);
  cout << n.get() << ' ';

  Integer m("300");
  cout << m.get() << ' ';
  cout << m.isEven() << ' ';

  return 0;
}