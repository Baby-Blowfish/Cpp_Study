#include <iostream>
#include <cstring>

int main()
{
  int size = 0, num = 0;
  char name[5][100] = {0};

  std::cout << "5명의 이름을 ; 으로 구분하여 입력하세요"<<std::endl<<">>";

  for(int i = 0; i < 5; i++)
  {
    
    std::cin.getline(name[i], 100, ';');
    if(size < strlen(name[i]))
    {
      size = strlen(name[i]);
      num = i;
    }

    std::cout << i << " : " << name[i] << std::endl;
  }

  std::cout << "가장 긴 이름은 " << name[num] << "입니다." << std::endl;

  return 0;
}