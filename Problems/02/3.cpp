#include <iostream>

int main()
{
  int a = 0, b = 0;
  std::cout <<"두 수를 입력하라 >> ";
  std::cin >> a >> b;
  std::cout << "큰 수 = " << (a > b ? a : b) << std::endl;
}