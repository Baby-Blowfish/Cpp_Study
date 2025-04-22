/*
	object assignment(��ü ġȯ) // ���빰�� ������ �����̴�.
		Circle c1(5);
		Circle c2(30);
		c1 = c2;		// ��ü�� ��Ʈ ������ ����

	object return(��ü ����)	
		Circle getCircle(){
			Circle tmp(30);
			return tmp;		//	1. return���� ����Ǹ� tmp�� ���纻�� ����
		}

		Circle r;
		r = getCircle();	// 2. tmp�� ���纻�� c�� ġȯ ��. ���� tmp�� stack���� �����.

		��ü�� ���� �� �Ҹ� : ��ü�� �޸� �Ҵ� ������ ȣ�� ��ü�� ��� �Ҹ��� ȣ�� ��ü�� �޸� ����
		���� : ������
		���� : ���� ���� ������
		���� : ���� ������
		�Ҹ� : �Ҹ���

*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
};

Circle getCircle() {
	Circle tmp(30);
	return tmp; // ��ü tmp�� �����Ѵ�.
}

int main() {
	Circle c; // ��ü�� �����ȴ�. radius=1�� �ʱ�ȭ�ȴ�.
	cout << c.getArea() << endl;

	c = getCircle(); // ���� ���� ������
	cout << c.getArea() << endl;
}

/*
3.14
2826
*/