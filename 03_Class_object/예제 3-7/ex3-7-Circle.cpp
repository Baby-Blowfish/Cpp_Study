/* 
	destructor(소멸자) 소멸자 : 객체가 메모리에서 소멸되는 시점에서 자동으로 호출되는 함수

	1. 객체가 사라질 때 필요한 마무리 작업을 위함이다.
	2. ~클래스이름()
	3. 리턴 타입이 없음
	4. 오직 한개만 존재하며 매개 변수를 가지지 않음. 함수 오버로딩 불가
	5. 소멸자가 선언되지 않으면 기본 소멸자가 자동으로 생성. 
	6. 메모리에서 해제 되었을 때 소멸자가 실행된다.
	7. 생성된 반대순으로 소멸자가 실행된다.

*/

#include <iostream> 
using namespace std; 

class Circle {
public:
	int radius;
	Circle(); 
	Circle(int r); 
	~Circle(); // 소멸자
	double getArea(); 
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donu;
	Circle pizza(30); 
	return 0;
}
