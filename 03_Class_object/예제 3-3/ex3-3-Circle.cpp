/* 
	constructor(������) : ��ü�� �����Ҷ� ��ü�� �ʱ�ȭ�ϴ� ����Լ�, Ŭ������ �̸��� ������ ����Լ�
		���ڰ� ���� ���� �⺻������(defalut constructor).

	1. ��ü�� ���� �� �� �ʿ��� �ʱ� �۾��� �ϱ� ���� ���
		��� ������ ����, �޸� ���� �Ҵ�, ���� ����, ��Ʈ��ũ ���� ��
	2. �� ��ü���� �����Ǵ� ������ ���� �ѹ��� �ڵ����� �����.
	3. �Լ� �̸��� Ŭ���� �̸��� �����ؾ���.
	4. �Լ� ����ΰ� �Լ� �����ο� ���� Ÿ���� ���� ���� �ʰ�, �ƹ��͵� ��ȯ���� �ʴ´�..(void�� �ȵ�)
		class Circle
		{	
			public :
				Circle();
				void Circle();	error!
				int Circle();   error!
				Circle(int n);

		};

		Circle::Circle
		{
			return;			
			return 0;		error!
		}

	5. �ߺ� ���� , �Լ� ���� �ε� ����� �����. �Լ� �����ε��� �Լ��̸��� ���� ���� �� �Ű������� �ٸ� ��쿡 �ش�
		��ȯ���� �������.

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

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r) {
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
