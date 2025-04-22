#include <iostream>
#include <cstring>

int main()
{
  char coffee[100] = {0};
  int num = 0;
  int charge = 0;
  bool run = true;
  std::cout << "에스프레소 2000원, 아메리카노 3000원, 카페라떼 4000원" << std::endl;
  while(run)
  {
    std::cout <<"주문 >>";
    std::cin>> coffee>>num;

    if(strcmp(coffee, "에스프레소") == 0)
    {
      charge += num*2000;
      std::cout << "주문하신 에스프레소는 " << num*2000 << "원입니다." << std::endl;
    }
    else if(strcmp(coffee, "아메리카노") == 0)
    {
      charge += num*3000;
      std::cout << "주문하신 아메리카노는 " << num*3000 << "원입니다." << std::endl;
    }
    else if(strcmp(coffee, "카페라떼") == 0)
    {
      charge += num*4000;
      std::cout << "주문하신 카페라떼는 " << num*4000 << "원입니다." << std::endl;
    }
    else
    {
      std::cout << "잘못된 주문입니다." << std::endl;
      continue;
    }

    if(charge > 20000)
    {
      run = false;
    }

  }

  std::cout << charge << "원을 판매하여 카페 마감!" << std::endl;

  return 0;

}