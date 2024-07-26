/*
	객체의 동적 생성 및 반환
		클래스이름 *포인터변수 = new 클래스이름;
		클래스이름 *포인터변수 = new 클래스이름(생성자매개변수리스트);
		Circle *p = new Circle;		// 기본 생성자 Circle()호출
		Circle *q = new Circle(30); // 생성자 Circle(30) 호출

		delete p;
		delete q;

		Circle donut;
		Circle *p = &donut;
		delete p;   error!

		Circle waffle;
		Circle waffle(); // 같은 문장이지만 경고를 발생시킴. 함수선언으로 인식할 수 있음.

		Circle *p = new Circle;		
		Circle *q = new Circle(); // 이건 괜찮음.

		


*/

#include <iostream>
using namespace std;

class Circle {
	int radius; 
public:
	Circle(); 
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14*radius*radius; }
}; 

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	Circle *p, *q;
	p = new Circle;
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;
	delete p; 
	delete q;
}