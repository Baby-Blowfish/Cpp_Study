/*	
	call by reference(����)�� �Լ�
	& : reference, ������, ����Ų��.
	reference variable (���� ����) : ���缮�� �ٿ��� �޶ѱ� ó�� �̹� ����� ������ ���� ����(alias)

	��������
		�������� ���� : &���, ����� ������ ���� ������ �ʱ�ȭ �ؾߵ�., ���� �޸� ������  �Ҵ�x
					   �̸��� �ٸ��� �θ��� ��
		int n = 2;
		int &refn = n;

		Circle circle;
		Circle &refc = circle;
		
		���� ���� ��� : ���� ������ ����, ���� ������ ���� = ���� ������ ����, �����Ͱ� �ƴ��� ����!
			refn = 3; // n = 3;, refn = 3;
			n = 5;  // n = 5;, refn = 5;
			refn++;	// n = 6;  refn = 6;

		���� ����
			refc->setRadius(3);  error!
			int *p = &refn;	// p�� refn�� �ּҸ� ���� �� n�� �ּҸ� ����
			*p = 20;		// n = 20, refn = 20;
			char &n[10];	// error! ������ �迭�� ���� �� ����.
			int &r = refn;	// �������� refn�� ���� ���� ���� r ���� ����
			int &a = 10;	// error!

	������ ���� ȣ��

	�Լ��� ���� ����

*/

#include <iostream>
using namespace std;

int main() {
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int &refn = n; // ���� ���� refn ����. refn�� n�� ���� ����
	n = 4; 
	refn++; // refn=5, n=5
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i; // refn=1, n=1
	refn++; // refn=2, n=2
	cout << i << '\t' << n << '\t' << refn << endl;
	
	int *p = &refn; // p�� refn�� �ּҸ� ����. ���� p�� n�� �ּҸ� ����
	*p = 20; // refn=20, n=20
	cout << i << '\t' << n << '\t' << refn << endl;
}