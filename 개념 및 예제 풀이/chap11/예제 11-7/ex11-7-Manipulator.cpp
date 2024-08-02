/*
	manipulator(조작자) : <<,>> 연산자와 항상 함께 사용

	매개 변수 없는 조작자
*/

#include <iostream>
using namespace std;

int main() {
	cout << hex << showbase << 30 << endl;
	cout << dec << showpos << 100 << endl;
	cout << true << ' ' << false << endl;
	cout << boolalpha << true << ' ' << false << endl;
}