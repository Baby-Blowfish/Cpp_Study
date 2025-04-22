#include <iostream>
#include <cstring>

int main()
{
  bool isSame = true;
  char ch[100] = {0};

  while (isSame)
  {
    std::cout << "종료하고 싶으면 yes를 입력하세요 >>";
    std::cin.getline(ch, 100);
    if (strcmp(ch, "yes") == 0)
    {
      isSame = false;
    }
  }

  std::cout << "종료합니다." << std::endl;

  return 0;
}