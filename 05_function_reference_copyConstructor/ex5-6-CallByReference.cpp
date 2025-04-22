/*
	������ ���� ȣ��� ��ü ����
		���� ���� ȣ��� ��ü ���� 
			���� ��ü ���� �Ұ�, �Ű� ���� ��ü�� ������ ���� x, �Ҹ��ڸ� ����Ǵ� ���Ī ����
		������ ���� ȣ��� ��ü ����
			���� �Ű� ������ �̷���� ��� ������ ���� ��ü�� ���� ������ �ȴ�.
			���� �Ű� ������ �̸��� �����ǹǷ�, �����ڿ� �Ҹ��ڴ� �ƿ� ������� �ʴ´�.
			Circle c;			// ������ ����
			Circle &refc = c; 	// ������ ���� 	x

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
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = "  << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
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