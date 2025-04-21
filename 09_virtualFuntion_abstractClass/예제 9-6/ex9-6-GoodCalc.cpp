/*
	pure virtual function(���� ���� �Լ�) : �ڵ尡 ���� ���� �ִ� ���� �Լ�
	
	abstract class(�߻� Ŭ����) : �ּ� �ϳ��� ���� ���� �Լ��� ���� Ŭ����
								 �Ҿ����� Ŭ����
								 �߻� Ŭ������ �ν��Ͻ��� ������ �� ����.
		Shape shape;				error!
		Shape *p = new Shape();		error!
		Shape *p;					����
	
	�߻� Ŭ������ ��� : �߻� Ŭ������ ��� �޴� �Ļ� Ŭ������ �ڵ����� �߻� Ŭ�������ȴ�. ��ü ���� �Ұ���

	�߻� Ŭ������ ���� : �Ļ� Ŭ�������� �߻� Ŭ������ ���� ���� �Լ��� �ڵ带 �ۼ����� ����

	�Ļ� Ŭ������ ������ Ŭ������ �Ƿ��� ��ӹ��� �߻� Ŭ������ ��� ���� ���� �Լ��� �������̵��Ͽ�
	�����Ͽ��� �Ѵ�. 
	�߻� Ŭ������ �����Ѵٸ� �߻� Ŭ������ �ƴϹǷ� ��ü�� ���� �� �� �ִ�.

*/
#include <iostream>
using namespace std;

class Calculator {
public:
	virtual int add(int a, int b) = 0; // �� ������ �� ����
	virtual int subtract(int a, int b) = 0; // �� ������ �� ����
	virtual double average(int a [], int size) = 0; // �迭 a�� ��� ����. size�� �迭�� ũ��
};

class GoodCalc : public Calculator {
public:
	int add(int a, int b) { return a + b; }	
	int subtract(int a, int b) { return a - b; }	
	double average(int a [], int size) {
		double sum = 0;
		for(int i=0; i<size; i++) 
			sum += a[i];
		return sum/size;
	}	
};

int main() {
	int a[] = {1,2,3,4,5};
	Calculator *p = new GoodCalc();
	cout << p->add(2, 3) << endl;
	cout << p->subtract(2, 3) << endl;
	cout << p->average(a, 5) << endl;
	delete p;
}