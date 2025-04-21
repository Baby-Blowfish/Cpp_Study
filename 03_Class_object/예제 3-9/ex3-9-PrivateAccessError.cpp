/*
    access specifier (��� ���� ������) :
        private(�����) : Ŭ���� ���� ��� �Լ��� ���� ����
            private:
        publice(����) : Ŭ���� ������ ��� �Լ����� ���� ���
            public:
        protected(��ȣ) : Ŭ���� ���� ����� ��ӹ��� �Ļ� Ŭ�������� ���� ���
            protected:

    1. �ߺ��ؼ� ��� ����
    2. �⺻���� private
    3. ��������� private���� �����ϴ� ���� �ٶ�����
    4. �����ڿ� �Ҹ��ڴ� �ܺο��� ��ü ������ ����ϹǷ� �ظ��ϸ� public���� ������.





	�ʱ��� �Լ��� ������ ���� �۾��� �� �� �־� ���α׷��� building block�� ������ �� �Դ�.
	�Լ�ȣ�� �� �Լ��� �޸𸮿� �Ҵ� : ���� �ּ� ����, cpu �������� �� ����, �Լ��� �Ű����� stack�� ����
	�Լ� ����, �Լ��� ���ϰ��� �ӽ� ����ҿ� ����, ������ �������� �� cpu�� ����, ���ư� �ּҸ� �˾Ƴ��� ����

	overhead : ���� �Լ� ȣ�⿡ ���� �������

		ex)
		in odd(int x){
			return (x%2);
		}
		int main()
		{
			int sum = 0;

			for(int i = 1; i <= 10000l i++)
			{
				if(odd(i))
					sum += i;
			}
			cout << sum;
		}

	inline function(�ζ��� �Լ�) : ª�� �ڵ�� ������ �Լ��� ���� �Լ� ȣ�� �������� ���� ���α׷� ���� �ӵ�
								  ���ϸ� �������� ���Ե� ���
								  �ζ��� �Լ��� ȣ���ϴ� ���� �ζ��� �Լ��� �ڵ带 �״�� �����Ͽ� �Լ� ȣ����
								  �Ͼ�� �ʰ� ��
		ex)
		inline in odd(int x){
			return (x%2);
		}

*/


#include <iostream> 
using namespace std; 

class PrivateAccessError {
private:
	int a;
	void f();
	PrivateAccessError();
public:
	int b;
	PrivateAccessError(int x);
	void g();
};

PrivateAccessError::PrivateAccessError() {
	a = 1; // (1)
	b = 1; // (2)
}

PrivateAccessError::PrivateAccessError(int x) {
	a = x; // (3)
	b = x; // (4)
}

void PrivateAccessError::f() {
	a = 5; // (5)
	b = 5; // (6)
}

void PrivateAccessError::g() {
	a = 6; // (7)
	b = 6; // (8)
}

int main() {
	PrivateAccessError objA; // (9) error!
	PrivateAccessError objB(100); // (10)
	objB.a = 10; // (11)	error!
	objB.b = 20; // (12)
	objB.f(); // (13) error!
	objB.g(); // (14)
}