/*
	���� �޸� �Ҵ� �� ��ȯ
	Static Allocation (���� �Ҵ�, stack) : ��Ÿ�ӿ� �Ҵ�, ��Ÿ�ӿ��� ũ�� ���� �Ұ�.
	Dynamic Allocation (���� �Ҵ�, heap) : ��Ÿ�ӿ� �Ҵ�, ��Ÿ�ӿ��� ũ�� ���� ����.

	������Ÿ�� *������ ���� = new ������Ÿ��;
	delete �����ͺ���;

	new		: ������Ÿ���� ũ�⸸ŭ ������ ���� �޸𸮸� �Ҵ� �ϰ� �ּҸ� �����Ѵ�.
	delete 	: ������ ������ ����Ű�� �޸𸮸� ������ ��ȯ�Ѵ�.

	���� �޸� �Ҵ� �� �ʱ�ȭ
	������Ÿ�� *������ ���� = new ������Ÿ��(�ʱ갪);
	
	ex)
		int *pi = new int;
		delete *pi;

		Circle *pCircle = new Circle();
		delete pCircle;
		
		int *pi = new int(20);
		delete *pi;
		
		Circle *pCircle = new Circle();
		delete pCircle;
			

	delete ��� ����
		ex)
			int n;
			int *p = &n;
			delete p;  error! �����Ҵ� ���� ���� �޸��� �Ҵ� �Ұ�

		ex)
			int *p = new int;
			delete p;
			delete p;  			error! �̹� ��ȯ�� �޸� �ߺ� ��ȯ �Ұ�


*/
#include <iostream>
using namespace std;

int main() {
	int *p;

	p = new int; 
	if(!p) { 
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}
	
	*p = 5; // �Ҵ� ���� ���� ������ 5 ����
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p; 
}