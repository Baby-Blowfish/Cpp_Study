/*
	��ü�� ���� ���� �� ��ȯ
		Ŭ�����̸� *�����ͺ��� = new Ŭ�����̸�;
		Ŭ�����̸� *�����ͺ��� = new Ŭ�����̸�(�����ڸŰ���������Ʈ);
		Circle *p = new Circle;		// �⺻ ������ Circle()ȣ��
		Circle *q = new Circle(30); // ������ Circle(30) ȣ��

		delete p;
		delete q;

		Circle donut;
		Circle *p = &donut;
		delete p;   error!

		Circle waffle;
		Circle waffle(); // ���� ���������� ��� �߻���Ŵ. �Լ��������� �ν��� �� ����.

		Circle *p = new Circle;		
		Circle *q = new Circle(); // �̰� ������.

		


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
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main() {
	Circle *p, *q;
	p = new Circle;
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;
	delete p; 
	delete q;
}