#include <iostream>
#include <cstring>

int main()
{
  char ch[100] = {0};
  char chcmp[100] = {0};
  int len = 0;

  std::cout << "새 암호를 입력하세요 >> ";
  std::cin >> ch;

  std::cout << "새 암호를 다시 한번 입력하세요 >> ";
  std::cin >> chcmp;

  if( (len = strlen(ch)) != strlen(chcmp))
  {
    std::cout << "암호가 다릅니다." << std::endl;
    return 0;
  }
  else if(strncmp(ch, chcmp, len) == 0)
  {
    std::cout << "암호가 같습니다." << std::endl;
  }
  else
  {
    std::cout << "암호가 다릅니다." << std::endl;
    return 0;
  }

  return 0;

}