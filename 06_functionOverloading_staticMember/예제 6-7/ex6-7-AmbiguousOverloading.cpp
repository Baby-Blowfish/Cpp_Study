/*
	�Լ� �ߺ��� ��ȣ�� : �ߺ��� �Լ��� ���� ȣ���� ��ȣ(ambiguous)�� ��� ���� �߻�
		1. �� ��ȯ���� ���� ��ȣ�� : �����Ϸ��� ���� Ÿ���� ū Ÿ������ �ڵ� ����ȯ�Ѵ�.
			char -> int -> long -> float -> double
		2. ���� �Ű� ������ ���� ��ȣ��
		3. ����Ʈ �Ű� ������ ���� ��ȣ��

*/

#include <iostream>
using namespace std;

float square(long a) {
	return a*a;
}

float square(float a) {
	return a*a;
}

double square(double a) {
	return a*a;
}

int main() {
	cout << square(3.0); // square(double a); ȣ��
	//cout << square(3); // �ߺ��� �Լ��� ���� ��ȣ�� ȣ��μ�, ������ ����
						 // 3.0�� �⺻ double Ÿ��, 3�� �⺻ int Ÿ��, long���� �ִ��� error�� �߻�
	cout << square(3.f); // ��������� Ÿ���� �����ؾ���.
	cout << square((float)3); // ��������� Ÿ���� �����ؾ���.
}