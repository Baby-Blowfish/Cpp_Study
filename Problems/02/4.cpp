#include <iostream>

int main()
{
  double num[5] = {0.0};
  std::cout <<"5 개의 실수를 입력하라라 >> ";
  std::cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];
  std::cout << "제일 큰 수 = ";
  double max = num[0];
  for(int i = 1; i < 5; i++)
  {
    if(num[i] > max)
      max = num[i];
  }
  std::cout << max << std::endl;
}