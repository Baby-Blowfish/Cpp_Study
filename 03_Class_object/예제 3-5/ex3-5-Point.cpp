/*
	�����ڿ� ��� ������ �ʱ�ȭ
		Point::Point(){ x = 0, y = 0};
		Point::Point():x(0),y(0){};

		Point::Point(int a , int b){ x = a, y = b};
		Point::Point(int a, int b):x(a),y(b){};

		Point::Point(int a):x(a+100),y(100){};

*/

#include <iostream>
using namespace std;

class Point {
	int x, y;	// c++11���� Ŭ���� ����ο� �ʱ�ȭ ����
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

Point::Point() : Point(0, 0) { } // Point(int a, int b) ������ ȣ��

Point::Point(int a, int b)
	: x(a), y(b) { }

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}