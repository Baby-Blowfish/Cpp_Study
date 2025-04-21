/*
	���ø� �Լ��� �̸��� ������ �Լ��� �ߺ��Ǿ� ���� ��� �����Ϸ��� �ߺ��� �Լ��� ���ø� �Լ�����
	�켱�Ͽ� ���ε� �Ѵ�.


	���ø� �Լ��� ����Ʈ �Ű� ���� ��� ����
		template <class T> 
		void print(T array [], int n = 3) {
			for(int i=0; i<n; i++) 
				cout << array[i] << '\t';
			cout << endl;
		}

		int x[] = {1,2,3,4,5};
		print(x);
*/
#include <iostream>
using namespace std;

template <class T> 
void print(T array [], int n) {
	for(int i=0; i<n; i++) 
		cout << array[i] << '\t';
	cout << endl;
}

void print(char array [], int n) { // ���ø� �Լ��� ������ �̸��� �Լ� �ߺ�
	for(int i=0; i<n; i++) 
		cout << (int)array[i] << '\t'; // array[i]�� int Ÿ������ ��ȯ�Ͽ� ���� ���
	cout << endl;
}

int main() {
	int x[] = {1,2,3,4,5};
	double d[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	print(x, 5); // ���ø����κ��� ��üȭ�� �Լ� ȣ��
	print(d, 5); // ���ø����κ��� ��üȭ�� �Լ� ȣ��

	char c[5] = {1,2,3,4,5};
	print(c, 5); // char �迭�� ���ڷ� ����ϴ� �ߺ� �Լ� ȣ��
}