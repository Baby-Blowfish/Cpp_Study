/* 7  - 4
	operrator overloading (연산자 중복) : 피연산자에 따라 서로 다른 연산을 하도록 동일한 연산자를 중복해서 작성하는 것
		1. 새로운 연산자를 만들 수 없다.
		2. 피연산자의 타입이 다른 연산을 새로 정의하는 것이다.
		3. 함수를 통해 이루어 진다.
		4. 클래스와 관계를 가진다. 중복된 연산자는 반드시 피연산자에 객체를 동반한다. 
		5. 피연산자의 개수를 바꿀 수 없다.
		5. 연산의 우선순위를 바꿀 수 없다.
		6. 모든 연산자가 중복 가능한 것은 아니다.    ( .  .*  ::(범위지정)  ?;(3항) ) 불가능

		연산자 함수 
			클래스의 멤버 함수로 구현
			외부 함수로 구현하고 클래스의 프렌드 함수로 선언

			리턴 타입 operator 연산자(매개변수리스트);

		외부 함수로 구현하고 클래스에 프렌드 함수로 선언하는 경우
			Color operator + (Color op1, Color op2); // 외부 전역함수
			bool operator == (Color op1, Color op2); // 외부 전역함수
			...
			class Color{
			...
				friend Color operator + (Color op1, Color op2); // 프렌드 선언
				friend bool operator == (Color op1, Color op2); // 프렌드 선언
			...
			}

		클래스 멤버 함수로 선언되는 경우

			class Color{
			...
				Color operator + (Color op2); // 왼쪽 피연산자는 객체 자신이고 오른쪽 피연산자가 op2에 전달
				bool operator == (Color op2); // 왼쪽 피연산자는 객체 자신이고 오른쪽 피연산자가 op2에 전달
			...
			}
*/

#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power operator+ (Power op2); // + 연산자 함수 선언
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator+(Power op2) { 
	Power tmp; // 임시 객체 생성
	tmp.kick = this->kick + op2.kick; // kick 더하기
	tmp.punch = this->punch + op2.punch; // punch 더하기
	return tmp; // 더한 결과 리턴
}

int main() {
	Power a(3,5), b(4,6), c;
	c = a + b; // 파워 객체 + 연산
	a.show();
	b.show();
	c.show();
}