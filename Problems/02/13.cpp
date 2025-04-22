#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
  bool run = true;
  int n = 0, i = 0;
  cout << "********* 승리장에 오신 것을 환영영습니다. *********" << endl;
  while (run)
  {
    cout << "짬뽕:1, 짜장:2, 볶음밥:3, 종료:4" << endl;
    cin >> i;
    if (i == 4)
      run = false;
    else if (i < 1 || i > 4)
    {
      cout << "잘못된 입력입니다." << endl;
      continue;
    }
    else
    {
      cout << "몇인분?";
      cin >> n;
      switch (i)
      {
      case 1:
        cout << "짬뽕 " << n << "인분" << endl;
        break;
      case 2:
        cout << "짜장 " << n << "인분" << endl;
        break;
      case 3:
        cout << "볶음밥 " << n << "인분" << endl;
        break;
      }
    }
   
  }
  cout << "오늘 영업은 끝났습니다." << endl;
  return 0;
}
