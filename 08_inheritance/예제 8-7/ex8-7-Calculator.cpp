/*

	multiple inheritanc(���� ���) : �ϳ��� �Ļ�Ŭ������ ���� Ŭ������ ���ÿ� ��ӹ޴� ��

	
	���̾� ��� ���� ���� ��ӱ����� �⺻ Ŭ������ ����� �ߺ� ��ӵǾ� �� Ŭ���� ��� ���ٿ� 
	��ȣ�� ���� �߻�
	
	
	virtual inheritance(���� ���) : ���� ��ӿ��� ����� ��� �ߺ� ���� ���� �ذ��ϱ�����
									�⺻ Ŭ���� �տ� virtual Ű���带 �̿��Ͽ� ���� ��� ����
	virtual bass class(���� �⺻ Ŭ����) : �����Ϸ����� �Ļ� Ŭ������ ��ü�� �����ɶ� �⺻ Ŭ������
											��� ������ ���� �ѹ��� �Ҵ��ϰ� �̹� �Ҵ�Ǿ� �ִٸ�
											���� �ϵ��� ����
	
	class BaseIO{
	public:
		int mode;
	};
	class In : virtual BaseIO{
	public:
		int readPos;
	};
	class Out : virtual BaseIO{
	public:
		int writePos;
	};
	class Inout:public In, public Out{
	public:
		bool safe;
	};
	
	int main()
	{
		InOut ioObj;

		ioObj.readPos = 10;
		ioObj.writePos = 20;
		ioObj.safe = true;
		ioObj.mode = 5;
		
		return 0;
	}


*/

#include <iostream>
using namespace std;

class Adder {
protected:
	int add(int a, int b) { return a+b; }
};

class Subtractor {
protected:
	int minus(int a, int b)  { return a-b; }
};

class Calculator : public Adder, public Subtractor { // ���� ���
public:
	int calc(char op, int a, int b);
};

int Calculator::calc(char op, int a, int b) {
	int res=0;
	switch(op) {
		case '+' : res = add(a, b); break;
		case '-' : res = minus(a, b); break;
	}
	return res;
}

int main() {
	Calculator handCalculator;
	cout << "2 + 4 = " << handCalculator.calc('+', 2, 4) << endl;
	cout << "100 - 8 = " << handCalculator.calc('-', 100, 8) << endl;
}