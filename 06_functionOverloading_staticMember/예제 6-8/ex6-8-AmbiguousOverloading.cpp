/*
	�Լ� �ߺ��� ��ȣ�� : �ߺ��� �Լ��� ���� ȣ���� ��ȣ(ambiguous)�� ��� ���� �߻�
		1. �� ��ȯ���� ���� ��ȣ�� : �����Ϸ��� ���� Ÿ���� ū Ÿ������ �ڵ� ����ȯ�Ѵ�.
			char -> int -> long -> float -> double
		2. ���� �Ű� ������ ���� ��ȣ�� : ���� �Ű� ������ ���� �Լ��� ���� �Ű� ������ ���� �Լ��� �ߺ���

		3. ����Ʈ �Ű� ������ ���� ��ȣ��

*/
#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;	
}

int add(int a, int &b) {
	b = b + a;
	return b;
}

int main(){
	int s=10, t=20;
	cout << add(s, t); // ������ ����
}
