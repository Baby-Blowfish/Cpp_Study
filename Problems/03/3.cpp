#include <iostream>
#include <cstring>
#include <string>
using namespace std;


class Account
{
  string name;
  long accountNumber;
  long money;

public:
  Account(string n, long a, long m) : name(n), accountNumber(a), money(m) {};

  string& getOwner()
  {
    return name;
  }

  long inquire()
  {
    return money;
  }

  double withdraw(long amount);

  void deposit(long amount)
  {
    money += amount;
  }


};


double Account::withdraw(long amount)
{
  if (amount > money)
  {
    cout << "Not enough money" << endl;
    return 0;
  }
  else
  {
    money -= amount;
    return amount;
  }
}

int main()
{
  Account a("John Doe", 123456789, 1000);
  a.deposit(500);
  cout << "Account owner: " << a.getOwner() << " 잔액은" << a.inquire() << "원입니다." << endl;
  double money = a.withdraw(200);
  cout << "Account owner: " << a.getOwner() << " 잔액은" << a.inquire() << "원입니다." << endl;
  return 0;
}