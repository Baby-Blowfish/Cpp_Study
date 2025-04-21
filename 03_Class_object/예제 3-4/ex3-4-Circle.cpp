/*
	delegating constructor (���� ������) :
		�� Ŭ������ �����ڵ鿡�� �밳 ��ü�� �ʱ�ȭ�ϴ� ����� �ڵ尡 �ߺ���
		c++11���� �ߺ��� �ʱ�ȭ �ڵ帣 �ϳ��� �����ڷ� ����, �ٸ� �����ڿ��� �� �����ڸ� ȣ���� �� �ְ���.

*/

#include <iostream> 
using namespace std; 

class Circle {
public:
	int radius;
	Circle(); // �⺻ ������
	Circle(int r); // �Ű� ���� �ִ� ������
	double getArea();
}; 

Circle::Circle() : Circle(1) { }// Ÿ�� ������
// Circle()�����ڰ� ȣ��Ǹ� �ڽ��� �ڵ带 �����ϱ��� Circle(int r)�� ���� ȣ���ϰ� �ڽ��� �ڵ带 ������.

Circle::Circle(int r) { // ���� ������
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut; // �Ű� ���� ���� ������ ȣ��
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30); // �Ű� ���� �ִ� ������ ȣ��
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}