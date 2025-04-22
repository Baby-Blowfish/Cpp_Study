#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
  bool run = true;
  char ch[100] = {0};
  int a = 0, b = 0;
  char op;
  while(run)
  {
    cout << "? ";
    cin >> a;
    cin >> op;
    cin >> b;
    
    switch(op)
    {
      case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
      case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
      case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
      case '/': 
        if(b == 0)
        {
          cout << "0으로 나눌 수 없습니다." << endl;
          break;
        }
        cout << a << " / " << b << " = " << a / b << endl;
        break;
      case '%': 
        if(b == 0)
        {
          cout << "0으로 나눌 수 없습니다." << endl;
          break;
        }
        cout << a << " % " << b << " = " << a % b << endl;
        break;
      default:
        cout << "잘못된 연산자입니다." << endl;
        break;
    }
  }
  return 0;
}