#include <iostream>
using namespace std;

#include "Exp.h"

int main()
{
  Exp a(3,2);
  Exp b(9);
  Exp c;

  cout << a.getValue() << ' ' <<b.getValue() << ' ' << c.getValue() << endl;
  cout << "a의 베이스" << a.getBase() << ',' << "지수" << a.getExp() << endl;

  if(a.equal(b))
    cout << "a와 b는 같다." << endl;
  else
    cout << "a와 b는 다르다." << endl;
    
  return 0;
}