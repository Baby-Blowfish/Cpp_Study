#include <iostream>

int main()
{
  int num = 1;
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      std::cout << num << '\t';
      num++;
    }
    std::cout << std::endl;
  }
}