#include <iostream>
#include <cstring>
using namespace std;

// 대소문자는 구분한다.
// cin >> 은 공백문자를 구분자로 한다.
// cin.getline()은 공백문자를 포함하여 입력받는다.
// strcmp() : 두 문자열을 비교하여 같으면 0, 다르면 0이 아닌 값을 리턴한다.
int main() {
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while(true) {
		cout << "암호>>";
		cin >> password;
		if(strcmp(password, "C++") == 0) {
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else
			cout << "암호가 틀립니다~~" << endl;
	}
}