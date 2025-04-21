/*
	�����Լ��� overriding(�������̵�) : �Ļ� Ŭ�������� �⺻ Ŭ������ ���� �Լ��� ������
	����ð� ������(run time polymorphism)
	���� ���ε�
	virtual : �����Ϸ����� �ڽſ� ���� ȣ�� ���ε��� ���� �ð����� �̷絵�� ����, �Լ��� ����, ������ �ȵ�

	overriding ���� : �Ļ� Ŭ�������� �ڽ��� ������ �°� �����Լ��� ������ �ϵ��� �ϴ� ��. �⺻ Ŭ������
	���� �Լ��� ��ӹ޴� �Ļ� Ŭ�������� �����ؾ� �� ������ �Լ� �������̽��� �����Ѵ�.
	���� �Լ��� �ϳ��� �������̽��� ���� ���� �ٸ� ����� �����̶�� �������� �����ϴ� ���� 

	class Shape{
	protected:
		virtual void draw(){}
	}

	class Circle : public Shape{
	protected:
		virtual void draw(){
		}
	}

	class Rect : public Shape{
	protected:
		virtual void draw(){
		}
	}

	class Line : public Shape{
	protected:
		virtual void draw(){
		}
	}

	void paint (Shape* p){
		p->darw();
	}

	paint(new Circle());
	paint(new Rect());
	paint(new Line());


	dynamic binding (���� ���ε�) : �������̵��� �Լ��� ������ ȣ��
				 �����Լ��� ȣ�� �ϴ� �ڵ带 ������ �Ҷ�, �����Ϸ��� ���ε��� ���� �ð��� �����ϵ��� �̷��д�.
				 ���߿� ���� �Լ��� ȣ��Ǹ� ���� �߿� ��ü ���� �������̵��� ���� �Լ��� �������� ã�� ȣ��
				 �������̵��� �Ļ� Ŭ�������� �������� ���� �Լ��� ȣ���� ����޴´ٴ� �����̴�.
				 run-time binding(����ð����ε�), late binding(���� ���ε�)
		���� ���ε��� �Ļ� Ŭ������ ��ü�� ����, �⺻ Ŭ������ �����ͷ� ���� �Լ��� ȣ�� �ɶ��� �Ͼ.
		1. �⺻ Ŭ���� ���� ��� �Լ��� ���� �Լ� ȣ��
		2. �Ļ� Ŭ���� ���� ��� �Լ��� ���� �Լ� ȣ��
		3. main()�� ���� �ܺ� �Լ����� �⺻ Ŭ������ �����ͷ� ���� �Լ� ȣ��
		4. �ٸ� Ŭ�������� ���� �Լ� ȣ��
		���� �Լ��� ȣ���ϸ�, ������ ���� ���ε��� ���� �Ļ� Ŭ������ �������̵��� ���� �Լ��� �����.
		
*/

#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	virtual void f() { cout << "Derived::f() called" << endl; }
};

int main() {
	Derived d, *pDer;
	pDer = &d; // ��ü d�� ����Ų��.
	pDer->f(); // Derived::f() ȣ�� 

	Base* pBase;
	pBase = pDer; // ��ĳ����. ��ü d�� ����Ų��.
	pBase->f(); // ���� ���ε� �߻�!! Derived::f() ����
}