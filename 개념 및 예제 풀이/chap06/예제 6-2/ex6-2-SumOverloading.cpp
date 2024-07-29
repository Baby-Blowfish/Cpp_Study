/*
	생성자 함수 중복
		// class Circle {
		// private:
		// 	int radius; 
		// public:
		// 	Circle(); 
		// 	Circle(int r);
		// 	~Circle();
		// 	double getArea()  { return 3.14*radius*radius; }
		// 	int getRadius() { return radius; }
		// 	void setRadius(int radius) { this->radius = radius; }
		// }; 

	소멸자 함수 중복 : 소멸자는 매개변수를 가지지 않기 때문에 한 클래스에 오직 하나만 존재할수 있다.
						따라서 근본적으로 함수 중복은 불가능 하다.
*/

#include <iostream>
using namespace std;

int sum(int a, int b) { // a에서 b까지 합하기
	int s = 0;
	for(int i=a; i<=b; i++) 
		s += i;
	return s;
}

int sum(int a) { // 0에서 a까지 합하기
	int s = 0;
	for(int i=0; i<=a; i++) 
		s += i;
	return s;
}

int main() {
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}