/* 7  - 4
	operrator overloading (������ �ߺ�) : �ǿ����ڿ� ���� ���� �ٸ� ������ �ϵ��� ������ �����ڸ� �ߺ��ؼ� �ۼ��ϴ� ��
		1. ���ο� �����ڸ� ���� �� ����.
		2. �ǿ������� Ÿ���� �ٸ� ������ ���� �����ϴ� ���̴�.
		3. �Լ��� ���� �̷�� ����.
		4. Ŭ������ ���踦 ������. �ߺ��� �����ڴ� �ݵ�� �ǿ����ڿ� ��ü�� �����Ѵ�. 
		5. �ǿ������� ������ �ٲ� �� ����.
		5. ������ �켱������ �ٲ� �� ����.
		6. ��� �����ڰ� �ߺ� ������ ���� �ƴϴ�.    ( .  .*  ::(��������)  ?;(3��) ) �Ұ���

		������ �Լ� 
			Ŭ������ ��� �Լ��� ����
			�ܺ� �Լ��� �����ϰ� Ŭ������ ������ �Լ��� ����

			���� Ÿ�� operator ������(�Ű���������Ʈ);

		�ܺ� �Լ��� �����ϰ� Ŭ������ ������ �Լ��� �����ϴ� ���
			Color operator + (Color op1, Color op2); // �ܺ� �����Լ�
			bool operator == (Color op1, Color op2); // �ܺ� �����Լ�
			...
			class Color{
			...
				friend Color operator + (Color op1, Color op2); // ������ ����
				friend bool operator == (Color op1, Color op2); // ������ ����
			...
			}

		Ŭ���� ��� �Լ��� ����Ǵ� ���

			class Color{
			...
				Color operator + (Color op2); // ���� �ǿ����ڴ� ��ü �ڽ��̰� ������ �ǿ����ڰ� op2�� ����
				bool operator == (Color op2); // ���� �ǿ����ڴ� ��ü �ڽ��̰� ������ �ǿ����ڰ� op2�� ����
			...
			}
*/

#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power operator+ (Power op2); // + ������ �Լ� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator+(Power op2) { 
	Power tmp; // �ӽ� ��ü ����
	tmp.kick = this->kick + op2.kick; // kick ���ϱ�
	tmp.punch = this->punch + op2.punch; // punch ���ϱ�
	return tmp; // ���� ��� ����
}

int main() {
	Power a(3,5), b(4,6), c;
	c = a + b; // �Ŀ� ��ü + ����
	a.show();
	b.show();
	c.show();
}