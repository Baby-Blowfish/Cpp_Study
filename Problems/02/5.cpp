#include <iostream>

int main()
{
  char ch[100] = {0};
  int count = 0;

  std::cout << "문자들을 입력하라(100자 이네)" << std::endl;
  std::cin.getline(ch, 100);
  for(int i = 0; ch[i] != '\0' && i <100; i++)
  {
    if(ch[i] == 'x')
    {
      count++;
    }
  }
  std::cout << "x의 개수는 " << count << std::endl;

}