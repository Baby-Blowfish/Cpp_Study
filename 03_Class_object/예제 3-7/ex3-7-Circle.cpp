/* 
	destructor(�Ҹ���) �Ҹ��� : ��ü�� �޸𸮿��� �Ҹ�Ǵ� �������� �ڵ����� ȣ��Ǵ� �Լ�

	1. ��ü�� ����� �� �ʿ��� ������ �۾��� �����̴�.
	2. ~Ŭ�����̸�()
	3. ���� Ÿ���� ����
	4. ���� �Ѱ��� �����ϸ� �Ű� ������ ������ ����. �Լ� �����ε� �Ұ�
	5. �Ҹ��ڰ� ������� ������ �⺻ �Ҹ��ڰ� �ڵ����� ����. 
	6. �޸𸮿��� ���� �Ǿ��� �� �Ҹ��ڰ� ����ȴ�.
	7. ������ �ݴ������ �Ҹ��ڰ� ����ȴ�.

*/

#include <iostream> 
using namespace std; 

class Circle {
public:
	int radius;
	Circle(); 
	Circle(int r); 
	~Circle(); // �Ҹ���
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

Circle::~Circle() {
	cout << "������ " << radius << " �� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donu;
	Circle pizza(30); 
	return 0;
}
