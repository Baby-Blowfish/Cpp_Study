/*
	������ �Լ� �ߺ�
		// class Circle {
		// private:
		// 	int radius; 
		// public:
		// 	Circle(); 
		// 	Circle(int r);
		// 	~Circle();
		// 	double getArea()  { return 3.14*radius*radius; }
		// 	int getRadius() { return radius; }
		// 	void setRadius(int radius) { this->radius = radius; }
		// }; 

	�Ҹ��� �Լ� �ߺ� : �Ҹ��ڴ� �Ű������� ������ �ʱ� ������ �� Ŭ������ ���� �ϳ��� �����Ҽ� �ִ�.
						���� �ٺ������� �Լ� �ߺ��� �Ұ��� �ϴ�.
*/

#include <iostream>
using namespace std;

int sum(int a, int b) { // a���� b���� ���ϱ�
	int s = 0;
	for(int i=a; i<=b; i++) 
		s += i;
	return s;
}

int sum(int a) { // 0���� a���� ���ϱ�
	int s = 0;
	for(int i=0; i<=a; i++) 
		s += i;
	return s;
}

int main() {
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}