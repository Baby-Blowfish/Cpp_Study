#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random{

public:
  Random()
  {
    srand((unsigned)time(0));
  }

  int next()
  {
    return rand();
  }

  int nextInRage(int min, int max)
  {
    return min + rand() % (max - min + 1);
  }

};

int main()
{
  Random r;
  cout << "--0에서 " << RAND_MAX << " 까지의 랜덤 정수 10개-- " << endl;
  for (int i = 0; i < 10; i++)
  {
    int n = r.next();
    cout << n << ' ';
  }
  
  cout << endl << endl;
  cout << "--2에서 " <<  " 4까지의 랜덤 정수 10개-- " << endl;
  for (int i = 0; i < 10; i++)
  {
    int n = r.nextInRage(2, 4);
    cout << n << ' ';
  }
  cout << sizeof(int) << endl;
  cout << INT8_MAX << endl;
  cout << INT16_MAX << endl;
  cout << INT32_MAX << endl;
  cout << INT64_MAX << endl;
  cout << endl << endl;
  return 0;
}