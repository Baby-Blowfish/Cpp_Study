#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
  char ch[10000] = {0};
  cout << " 영문 텍스트를 입력하세요. 히스토그램을 그립니다."<<endl;
  cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
  cin.getline(ch, 10000, ';');
  int lenaphabet = 0;
  int count[26] = {0};
 
  for(int i = 0; i < strlen(ch); i++)
  {
    tolower(ch[i]);
    if(isalpha(ch[i]))
    {
      lenaphabet++;
      count[ch[i] - 'a']++;
    }
  }
  cout << "영문자 개수는 " << lenaphabet << "입니다." << endl;

  for(int i = 0; i < 26; i++)
  {
    cout << (char)(i + 'a') << " ("<< count[i] << ") : ";
    for(int j = 0; j < count[i]; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}