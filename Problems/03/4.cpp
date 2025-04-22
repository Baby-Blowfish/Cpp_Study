#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class CoffeeMachine
{
  int coffee;
  int water;
  int sugar;

public:
  CoffeeMachine(int coffee, int water, int sugar)
  {
    this->coffee = coffee;
    this->water = water;
    this->sugar = sugar;
  };
  void drinkEspresso()
  {
    if (this->coffee >= 1 && this->water >= 1)
    {
      this->coffee -= 1;
      this->water -= 1;
      cout << "Espresso made!" << endl;
    }
    else
    {
      cout << "Not enough ingredients!" << endl;
    }
  }
  void drinkAmericano()
  {
    if (this->coffee >= 1 && this->water >= 2)
    {
      this->coffee -= 1;
      this->water -= 2;
      cout << "Americano made!" << endl;
    }
    else
    {
      cout << "Not enough ingredients!" << endl;
    }
  }

  void drinkSugarCoffee()
  {
    if (this->coffee >= 1 && this->water >= 2 && this->sugar >= 1)
    {
      this->coffee -= 1;
      this->water -= 2;
      this->sugar -= 1;
      cout << "Sugar coffee made!" << endl;
    }
    else
    {
      cout << "Not enough ingredients!" << endl;
    }
  }

  void show()
  {
    cout << "Coffee: " << this->coffee << endl;
    cout << "Water: " << this->water << endl;
    cout << "Sugar: " << this->sugar << endl;
  }

  void fill()
  {
    this->coffee += 10;
    this->water += 10;
    this->sugar += 10;
    cout << "Ingredients refilled!" << endl;
  }

};
int main()
{
  CoffeeMachine cm(5, 5, 5);
  cm.show();
  cm.drinkEspresso();
  cm.show();
  cm.drinkAmericano();
  cm.show();
  cm.drinkSugarCoffee();
  cm.show();
  cm.fill();
  cm.show();
  return 0;
}