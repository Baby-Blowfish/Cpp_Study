/*
	생성자와 멤버 변수의 초기화
		Point::Point(){ x = 0, y = 0};
		Point::Point():x(0),y(0){};

		Point::Point(int a , int b){ x = a, y = b};
		Point::Point(int a, int b):x(a),y(b){};

		Point::Point(int a):x(a+100),y(100){};

*/

#include <iostream>
using namespace std;

class Point {
	int x, y;	// c++11부터 클래스 선언부에 초기화 가능
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

Point::Point() : Point(0, 0) { } // Point(int a, int b) 생성자 호출

Point::Point(int a, int b)
	: x(a), y(b) { }

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}