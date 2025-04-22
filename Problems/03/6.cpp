#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom
{

public:
  SelectableRandom()
  {
    srand((unsigned)time(0));
  }

  int next()
  {
    return (rand() % 2 == 0) ? rand() : rand() + 1;
  }

  int nextInRage(int min, int max)
  {
    int n = (min + rand() % (max - min + 1));
    if (n % 2 == 0)
      return n;
    else if (n != max)
      return n + 1;
    else
      return n - 1;
  }
};

int main()
{
  SelectableRandom r;
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
  cout << sizeof(int) << endl;
  cout << INT8_MAX << endl;
  cout << INT16_MAX << endl;
  cout << INT32_MAX << endl;
  cout << INT64_MAX << endl;
  cout << endl
       << endl;
  return 0;
}