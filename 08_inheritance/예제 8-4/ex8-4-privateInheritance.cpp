/*
	����� ����
	public ��� : �⺻ Ŭ������ public���� ��� ������ �⺻ Ŭ������ protected, public ����鸸
				 ���� ���� �Ļ� Ŭ�������� ��� Ȯ���.
	protectd ��� : �⺻ Ŭ������ protected�� ��ӹ����� �⺻ Ŭ������ protected, public �������
					protected, ���� ������ ����Ǿ� �Ļ� Ŭ������ ��� Ȯ��ȴ�.
	private ��� :  �⺻ Ŭ������ praivate�� ��ӹ�����, �⺻ Ŭ������ protected, public �������
					private ���� �������� ����Ǿ� �Ļ� Ŭ������ ��� Ȯ��ȴ�.
	
	��� ���� �����ڰ� �����Ǹ� private���� ó��


*/
#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : private Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};

int main() {
	Derived x;
	x.a = 5; 		// �� error!
	x.setA(10);		// �� error!
	x.showA(); 		// �� error!
	x.b = 10; 		// �� error!
	x.setB(10);		// �� error!
	x.showB(); 		// �� o
} 