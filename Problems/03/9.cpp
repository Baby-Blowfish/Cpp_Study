#include <iostream>
#include <cstring>
#include <string>

#include "9.h"
using namespace std;

Oval::~Oval() {
  cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
}


int Oval::getWidth()
{
  return width;
}
int Oval::getHeight()
{
  return height;
}
void Oval::setWidth(int width)
{
  this->width = width;
}
void Oval::setHeight(int height)
{
  this->height = height;
}
void Oval::show()
{
  cout << "Width: " << width << ", Height: " << height << endl;
}


int main()
{
  Oval o1;
  Oval o2(10, 20);
  o1.setWidth(5);
  o1.setHeight(10);
  o1.show();
  o2.show();
  
  return 0;
}