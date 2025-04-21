
#include <iostream>
using namespace std;

int main() {
	cout << "Enter your name >> ";

	char name[5];
	// 마지막 문자는 null문자인 '\0'이 들어가야 하므로 한글은 5개 글자, 영문은 10까지 저장할 수 있다.
	cin >> name; // 키보드로부터 문자열을 읽는다.
	// 만약 크기를 넘는다면 runtime error :stack smashing detected
	// name을 초기화 하지 않았으므로 남은 배열에는 쓰레기 값이 들어간다.

	cout << "name is " << name; // 이름을 출력한다.

}

// Enter your name >> kim
// name is kim


