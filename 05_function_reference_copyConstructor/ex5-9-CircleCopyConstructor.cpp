/*
	object shallow copy(��ü�� ���� ����) : ��ü�� ����� 1:1�� ����
											��ü�� ��� ������ ���� �޸𸮰� �Ҵ�� ���
											�纻�� ���� ��ü�� �Ҵ� ���� �޸𸮸� �����ϴ� ���� �߻�
	object deep capy(��ü�� ���� ����) :	��ü ���� ��, ��ü�� ����� 1:1��� ����
											��ü�� ��� ������ ���� �޸𸮰� �Ҵ�� ���
											�纻�� ������ ���� �޸� ũ�� ��ŭ ������ ���� �Ҵ�
											������ ���� �޸𸮿� �ִ� ������ �纻�� �����޸𸮿� ����
	
	���� ���� �� copy constructor���� ������
		���� ������ ���� : ��ü�� ������ �� ���� ��ü�� �����Ͽ� �����Ǵ� ��� �ڵ����� ����Ǵ� ���� ������
		
		1. �Ű������� ���� �ϳ�, �ڱ� Ŭ������ ���� ������ ����
		2. Ŭ���� ���� ���� �� ���� ����
			ex)
			class Circle {
			private:
				int radius; 
			public:
				Circle(const Circle& c); // �����Ϸ��� ���� �ڵ����� ���� ������ �����.
				Circle() { radius = 1; }
				Circle(int radius) { this->radius = radius; }
				double getArea() { return 3.14*radius*radius; }
			};

			Circle::Circle(const Circle& c) { // �����Ϸ��� ���� ������ ���� ������.
				this->radius = c.radius;
			}
			int main() {
				Circle src(30); // src ��ü��  ���� ������ ȣ��
				Circle dest(src); // dest ��ü�� ���� ������ �ڵ� ȣ��
			}


*/


#include <iostream>
using namespace std;

class Circle {
private:
	int radius; 
public:
	Circle(const Circle& c); // ���� ������ ����
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
}; 

Circle::Circle(const Circle& c) { // ���� ������ ����
	this->radius = c.radius;
	cout << "���� ������ ���� radius = " << radius << endl;
}

int main() {
	Circle src(30); // src ��ü��  ���� ������ ȣ��
	Circle dest(src); // dest ��ü�� ���� ������ ȣ��

	cout << "������ ���� = " << src.getArea() << endl;
	cout << "�纻�� ���� = " << dest.getArea() << endl;
}
