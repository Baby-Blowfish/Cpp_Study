/*
	delegating constructor (위임 생성자) :
		한 클래스의 생성자들에는 대개 객체를 초기화하는 비슷한 코드가 중복됨
		c++11부터 중복된 초기화 코드르 하나의 생성자로 몰고, 다른 생성자에서 이 생성자를 호출할 수 있게함.

*/

#include <iostream> 
using namespace std; 

class Circle {
public:
	int radius;
	Circle(); // 기본 생성자
	Circle(int r); // 매개 변수 있는 생성자
	double getArea();
}; 

Circle::Circle() : Circle(1) { }// 타겟 생성자
// Circle()생성자가 호출되면 자신의 코드를 실행하기전 Circle(int r)을 먼저 호출하고 자신의 코드를 실행함.

Circle::Circle(int r) { // 위임 생성자
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut; // 매개 변수 없는 생성자 호출
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30); // 매개 변수 있는 생성자 호출
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}