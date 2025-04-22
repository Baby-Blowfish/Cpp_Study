#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom
{
  bool isEven;

public:
  SelectableRandom()
  {
    isEven = false;
    srand((unsigned)time(0));
  }

  SelectableRandom(bool isEven)
  {
    this->isEven = isEven;
    srand((unsigned)time(0));
  }
  void setIsEven(bool isEven)
  {
    this->isEven = isEven;
  }

  int next()
  {
    if (isEven)
      return (rand() % 2 != 0) ? rand() + 1 : rand();
    else
      return (rand() % 2 != 0) ? rand() : rand() + 1;
  }

  int nextInRage(int min, int max)
  {
    int n = (min + rand() % (max - min + 1));
    if (isEven)
    {
      if (n % 2 != 0)
      {
        if (n != max)
          return n + 1;
        else
          return n - 1;
      }
      else
        return n;
    }
    else
    {
      if (n % 2 != 0)
        return n;
      else if (n != max)
        return n + 1;
      else
        return n - 1;
    }
  }
};

int main()
{
  SelectableRandom r(true);
  cout << "--0에서 " << RAND_MAX << " 까지의 랜덤 정수 10개-- " << endl;
  for (int i = 0; i < 10; i++)
  {
    int n = r.next();
    cout << n << ' ';
  }

  cout << endl
       << endl;
  cout << "--2에서 " << " 10까지의 랜덤 정수 10개-- " << endl;
  for (int i = 0; i < 10; i++)
  {
    int n = r.nextInRage(2, 10);
    cout << n << ' ';
  }

  cout << endl
       << endl;

  r.setIsEven(false);
  cout << "--0에서 " << RAND_MAX << " 까지의 랜덤 정수 10개-- " << endl;
  for (int i = 0; i < 10; i++)
  {
    int n = r.next();
    cout << n << ' ';
  }

  cout << endl
       << endl;
  cout << "--2에서 " << " 10까지의 랜덤 정수 10개-- " << endl;
  for (int i = 0; i < 10; i++)
  {
    int n = r.nextInRage(2, 10);
    cout << n << ' ';
  }

  cout << endl
       << endl;

  return 0;
}