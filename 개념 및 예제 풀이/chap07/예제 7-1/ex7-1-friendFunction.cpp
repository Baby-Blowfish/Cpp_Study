/*
	friend 키워드 : 클래스 외부에 작성된 함수를 클래스 내에 friend 키워드로 선언하여, 클래스 멤버 함수와 동일한
				    접근 자격을 부여할수 있다. 물론 멤버가 아니므로 상속되지 않는다.

	friend fuction : friend 키워드로 선언되 외부 함수를 프렌드 함수라고 부름, 클래스 멤버인것처럼
					클래스의 모든 변수나 함수에 접근 가능.
	1. 클래스 외부에 작성된 함수를 프렌드로 선언
		
	2. 다른 클래스의 멤버 함수를 프렌드로 선언
	3. 다른 클래스의 모든 멤버 함수를 프렌드로 선언

*/


#include <iostream>
using namespace std;

class Rect; // forward decalaration. 이 라인이 없으면, 다음 라인에서 Rect를 참조하는 전방 참조(forward reference) 문제 발생
bool equals(Rect r, Rect s); // equals() 함수 선언

class Rect { // Rect 클래스 선언
	int width, height;
public:
	Rect(int width, int height)  { 	this->width = width; this->height = height;	}
	friend bool equals(Rect r, Rect s); //프렌드 함수 선언
};

bool equals(Rect r, Rect s) { // 외부 함수
	if(r.width == s.width && r.height == s.height) return true; 
	else return false;
}

int main() {
	Rect a(3,4), b(4,5);
	if(equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}