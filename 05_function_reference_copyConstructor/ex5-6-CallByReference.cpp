/*
	참조에 의한 호출로 객체 전달
		값에 의한 호출로 객체 전달 
			원본 객체 변경 불가, 매개 변수 객체의 생성자 실행 x, 소멸자만 실행되는 비대칭 구조
		참조에 의한 호출로 객체 전달
			참조 매개 변수로 이루어진 모든 연산은 원본 객체에 대한 연산이 된다.
			참조 매개 변수는 이름만 생성되므로, 생성자와 소멸자는 아예 실행되지 않는다.
			Circle c;			// 생성자 생성
			Circle &refc = c; 	// 생성자 생성 	x

*/
#include <iostream>
using namespace std;

class Circle {
private:
	int radius; 
public:
	Circle(); 
	Circle(int r);
	~Circle();
	double getArea()  { return 3.14*radius*radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
}; 

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = "  << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle &c) {
	int r = c.getRadius();
	c.setRadius(r+1);
}

int main() {
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
}