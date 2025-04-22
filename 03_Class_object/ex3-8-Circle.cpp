/*
	생성자/ 소멸자 실행 순서
		local object(지역 객체) : 함수 내에 선언된 객체
		gobal object(전역 객체) : 함수 바깥에 선언된 객체

	class Circle
	{	
		....
	};

	Circle globalCircle;	// 전역객체 선언

	void f()
	{
		Circle localCirclel	// 지역객체 선언
	}
*/

#include <iostream> 
using namespace std; 

class Circle {
public:
	int radius;
	Circle(); 
	Circle(int r);
	~Circle(); 
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

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	Circle mainDonut;
	Circle mainPizza(30);
	f();
}