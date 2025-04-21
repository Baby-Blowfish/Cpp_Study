/*
	��� ���迡�� �Լ� ������
		�Ļ� Ŭ������ �⺻ Ŭ������ ��� �Լ��� ������ �̸��� �������� �Լ��� redefine(������)�Ͽ� ��밡��
		�⺻ Ŭ������ ���� �����ͷδ� �⺻ Ŭ������ �Լ��� ȣ��
		�Ļ� Ŭ������ ���� �����ͷδ� �Ļ� Ŭ������ �ۼ��� �Լ��� ȣ��
		������ �ÿ� ���� ( ���� ���ε� )
*/

#include <iostream>
using namespace std;

class Base {
public:
	void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	void f() { cout << "Derived::f() called" << endl; }
};

int main() {
	Derived d, *pDer;
	pDer = &d; // ��ü d�� ����Ų��.
	pDer->f(); // Derived�� ��� f() ȣ��, �����Ϸ��� �Ļ� Ŭ������ �Լ��� �켱������ ���ε��ϱ� ����

	Base* pBase;
	pBase = pDer; // ��ĳ����. ��ü d�� ����Ų��.
	pBase->f(); // Base�� ��� f() ȣ��
}