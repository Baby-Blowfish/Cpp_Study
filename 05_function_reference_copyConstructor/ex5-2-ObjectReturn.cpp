/*
	object assignment(객체 치환) // 내용물만 같을뿐 별개이다.
		Circle c1(5);
		Circle c2(30);
		c1 = c2;		// 객체를 비트 단위로 복사

	object return(객체 리턴)	
		Circle getCircle(){
			Circle tmp(30);
			return tmp;		//	1. return문이 실행되면 tmp의 복사본이 생성
		}

		Circle r;
		r = getCircle();	// 2. tmp의 복사본이 c에 치환 됨. 그후 tmp는 stack에서 사라짐.

		객체의 생성 및 소멸 : 객체의 메모리 할당 생성자 호출 객체으 사용 소멸자 호출 객체의 메모리 해제
		생성 : 생성자
		대입 : 복사 대입 생성자
		복사 : 복사 생성자
		소멸 : 소멸자

*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
};

Circle getCircle() {
	Circle tmp(30);
	return tmp; // 객체 tmp을 리턴한다.
}

int main() {
	Circle c; // 객체가 생성된다. radius=1로 초기화된다.
	cout << c.getArea() << endl;

	c = getCircle(); // 복사 대입 생성자
	cout << c.getArea() << endl;
}

/*
3.14
2826
*/