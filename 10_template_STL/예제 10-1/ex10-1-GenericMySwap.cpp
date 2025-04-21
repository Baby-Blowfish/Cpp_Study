/*
	template(���ø�) : �Լ��� Ŭ���� �ڵ带 ��� ������ ������ �� �ֵ��� �Ϲ�ȭ(generic)��Ű�� �����̴�.
						�ߺ� �Լ����� �Ϲ�ȭ ��Ų �Լ� template function, generic function

	���ø� ����� ���׸� Ÿ��
		template <class T>
		template <typename T>

		generic type : c++�� �⺻ Ÿ���� �ƴϸ� �̵��� �Ϲ�ȭ ��� ���ο� Ÿ������ �Ϲ� Ÿ���̶�� ��.
	
	specialization(��üȭ) : �ߺ� �Լ����� ���ø�ȭ�ϴ� ������ ������, �����Ϸ��� �Լ��� ȣ�⹮�� �������Ҷ�,
							��üȭ�� ���� ���׸� �Լ��κ��� ��ü���� �Լ��� �ҽ� �ڵ带 ����� ����..
	specialization function(��üȭ�� �Լ�) : ��üȭ�� ���� ������ �Լ��� ��üȭ�� �Լ�

	���ø� ���� : ���ø� �Լ��� ������ ������ ȣ������� �ʴ� ���� �Լ��� Ʋ�̴�. ���׸� �Լ��� �����ϰ�
				 ������ ������ ��üȭ��Ű�� ���� Ʋ�� ����� ��, ���ø� �Լ��κ��� ��üȭ�� ������ �Լ���
				 �����ϵǰ� ȣ��ȴ�.
	
	��üȭ�� ���� : 
		template <class T> 
		void myswap(T & a, T & b) 
		
		int c = 3;
		double d = 5.3;
		myswap(c, d);		compile error!, c�� d�� Ÿ���� ���ƾ���. 

	���ø��� �����
		1. ����Ʈ���� ���꼺�� �������� ����
		2. �����Ϸ��� ���� ���ø��� �������� ���� �� �����Ƿ� ���ÿ� ���
		3. ���ø��� ������ ������ ���� �޽����� ����Ͽ� ����뿡 ������� ����

	generic programming(�Ϲ�ȭ ���α׷���) : ���ø��� ����Ͽ� ���ʸ� �Լ��� ��׸� Ŭ������ ���α׷���	
*/
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius=1) { this->radius = radius; }
	int getRadius() { return radius;}
};

template <class T> 
void myswap(T & a, T & b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a=4, b=5;
	myswap(a, b);
	cout << "a=" << a << ", " << "b=" << b << endl;

	double c=0.3, d=12.5;
	myswap(c, d);
	cout << "c=" << c << ", " << "d=" << d << endl;

	Circle donut(5), pizza(20);
	myswap(donut, pizza);
	cout << "donut������=" << donut.getRadius() << ", ";
	cout << "pizza������=" << pizza.getRadius()<< endl;
}