#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
using namespace std;

class Date
{
  int day, month, year;

public:
  Date(int y, int m, int d) : year(y), month(m), day(d) {};
  Date(const char *date)
  {
    stringstream ss(date);
    string token;
    getline(ss, token, '/');
    year = stoi(token);
    getline(ss, token, '/');
    month = stoi(token);
    getline(ss, token, '/');
    day = stoi(token);
  }
  void show(void)
  {
    cout << year << "년" << month << "월" << day << "일" << endl;
  }
  int getyear(void)
  {
    return year;
  }
  int getmonth(void)
  {
    return month;
  }
  int getday(void)
  {
    return day;
  }
};

int main()
{
  Date date1(2023, 10, 12);
  Date date2("2023/10/12");
  date1.show();
  cout << date1.getyear() << "," << date1.getmonth() << "," << date1.getday() << "," << endl;
  return 0;
}