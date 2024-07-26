#include <iostream> 
using namespace std;  
/* namespace : 이름 공간 , 이름(identifier) 충돌 방지,
	정의 : namespace kitae {......}
	사용 : 이름공간::이름, ::범위 지정 연산자
	std::	: 표준 이름 공간
	using std::cout;	: cout 앞의 std:: 생략가능
	using namespace std;	: std 이름 공간에 선언된 모든 이름에 std:: 생략
	*/
// cin : console in 객체, standard input stream object
// >> : 스트림 추출연산자, 왼쪽의 스트림 객체를 읽어  오른쪽의 변수에  삽입 \
 		<iostream> 헤더 파일에 재정의(operator overloading) 되어 있음, bool, char, short, int, long, float, double 등의 기본 타입 데이터로 입력 가능\
		std::cout >> c >> h;  23 36 두개의 정수형을 입력받음.  >> 공백문자를 기준으로 받음 

/*
	사용자 입력 키 >> cin의 스트림 버퍼저장 >> enter키가 입력되면 >>연산자가 cin의 입력 버퍼에서 키 값을 끌어내어 변수에 저장
	즉, >>연산자는 backspace 키를 치면 작동함.
*/
int main() {
	cout << "너비를 입력하세요>>";

	int width;
	cin >> width; // 키보드로부터 너비를 읽어 width 변수에 저장

	cout << "높이를 입력하세요>>";

	int height;		// 실행문 중간에 변수 선언 가능
	cin >> height; // 키보드로부터 높이를 읽어 height 변수에 저장

	int area = width*height; // 사각형의 면적 계산
	cout << "면적은 " << area << "\n"; // 면적을 출력하고 다음 줄로 넘어감
}