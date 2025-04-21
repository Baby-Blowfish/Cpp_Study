/*
	inheritance(���) : ��ü���� ����� ������ Ư���̴�. ����Ʈ���� ������ �����ϰ� �ϸ� �������ε�
						�� ���� ��ü ���� ���α׷����� �߿��� ����̴�.
						�� Ŭ���� ���̿� �θ� �ڽ��� ��Ӱ��踦 �����Ѵ�. 
						�⺻ Ŭ�������� �Ļ� Ŭ������ ������ Ŭ���� ������ ��üȭ
						���� ����� ���� Ŭ������ ��Ȱ�뼺�� ����
						

		base class(�⺻Ŭ����, �θ�Ŭ����) : super class(java), parent class(c#) 
		derived class(�Ļ�Ŭ����, �ڽ�Ŭ����) : sub class(java), child class(c#)
		multiple inheritance(���� ���) :

		1. ����� �̿��Ͽ� �ߺ��� �����ϰ� ������ Ŭ���� �ۼ�
		2. Ŭ���� ���� ������ �з� �� ������ ������.
		3. Ŭ���� ����� Ȯ���� ���� ����Ʈ������ ���꼺 ���.


	��� ���� 
		class �Ļ� Ŭ���� �̸� : ��� ���� ������ �⺻ Ŭ���� �̸�
		
		class Student : pulic Person{
			....
		};
		class StudentWorker : pulbic Student{
			...
		};

		Person Ŭ������ ����� ��� ������ ��� �Լ��� ��������, ���Ƚ�� ���� ����
		�����ϸ�  ��� ���� �����ڴ� pulic�� ��

		�Ļ�Ŭ���� ��ü�� �Ҵ�ɶ� �⺻ Ŭ������ ����鵵 �Ҵ��.
		�Ļ� Ŭ������ ������� �⺻ Ŭ������ private ��� �ܿ� ��� ����� ���ٰ���
		�⺻ Ŭ������ ����� private ����� �Ļ� Ŭ������ ��ӵǰ� �Ļ� Ŭ������ ��ü���� ���Ե�����
		�Ļ� Ŭ������ � ����Լ������� ���� ������ �Ұ����ϴ�. �⺻Ŭ������ ��� �Լ��� �⺻Ŭ������ ���
		������ ������ �����ϴ�.




*/

#include <iostream>
#include <string>
using namespace std;

class Point { // 2���� ��鿡�� �� ���� ǥ���ϴ� Ŭ���� Point ����
	int x, y; //�� �� (x,y) ��ǥ��
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point { // 2���� ��鿡�� �÷� ���� ǥ���ϴ� Ŭ���� ColorPoint. Point�� ��ӹ���
	string color;// ���� �� ǥ��
public:
	void setColor(string color)  {	this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point�� showPoint() ȣ��
}

int main() {
	Point p; // �⺻ Ŭ������ ��ü ����
	ColorPoint cp; // �Ļ� Ŭ������ ��ü ����
	cp.set(3,4); // �⺻ Ŭ������ ��� ȣ��
	cp.setColor("Red"); // �Ļ� Ŭ������ ��� ȣ��
	cp.showColorPoint(); // �Ļ� Ŭ������ ��� ȣ��
}