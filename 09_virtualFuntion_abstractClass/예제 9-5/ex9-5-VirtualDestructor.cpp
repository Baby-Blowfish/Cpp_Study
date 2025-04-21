/*
	����Ҹ��� : �⺻ Ŭ������ �Ҹ��ڸ� ���� �� ���� �Լ��� �ۼ�
				�Ļ� Ŭ������ ��ü�� �⺻ Ŭ������ ���� �����ͷ� delete �Ǵ� ��Ȳ������ ��������
				�Ҹ��� �Ǳ� ���ؼ�
	1. �Ҹ��ڸ� ���� �Լ��� �������� �ʴ� ���
		Base *p = new Derived();
		delete p;
			~Base()�� ȣ��ǰ� ~Derived()�� ������� ����.
	2. �Ҹ��ڸ� ���� �Լ��� ������ ���
			~Base()�� ���� ȣ���� ���� ���ε��� ���� ~Derived() ȣ��� �ٲ�.
			~Derive()�� ���� �� �Ļ� Ŭ������ �Ҹ��ڴ� �ڽ��� ����� �� �⺻ Ŭ������ �Ҹ��ڸ� ȣ���ϵ���
			������ �ǹǷ� ~Base()�ڵ尡 ����Ǿ� �⺻,�Ļ� Ŭ������ �Ҹ��ڰ� ��� ������� �����.

	�����ڴ� �����Լ��� �� �� ����, �����ڿ��� ���� �Լ��� ȣ���ص� ���� ���ε��� �Ͼ�� �ʴ´�.
		
*/

#include <iostream>
using namespace std;

class Base {
public:
	virtual ~Base() { cout << "~Base()" << endl; }
};

class Derived: public Base {
public:
	virtual ~Derived() { cout << "~Derived()" << endl; }
};

int main() {
	Derived *dp  = new Derived();
	Base *bp = new Derived();

	delete dp; // Derived�� �����ͷ� �Ҹ�
	delete bp; // Base�� �����ͷ� �Ҹ�
}
