/*
	function overloding(�Լ� �ߺ�) : polymorphism(������)�� �ѻ��, �����Լ��� ��� �Լ� ��ο� ����, ��Ӱ��迡 �ִ�
									�⺻ Ŭ������ �Ļ� Ŭ���� ���̿��� ���
	�ߺ� �Լ� ���� : �ߺ��� �Լ����� �̸��� �����Ͽ��� ��.
					�ߺ��� �Լ����� �Ű� ���� Ÿ���̳� �Ű� ������ ������ �޶�� �Ѵ�,
					�Լ� �ߺ��� ���� Ÿ���� ������� �ʴ´�.

		int sum(int a, int b){				// ����
			return a+b;
		}

		int sum(int a, int b, int c){		// ����
			return a+b+c;
		}

		double sum(double a, double b){		// ����
			return a+b;
		}

		double sum(int a, int b){			// �Ұ���, �ߺ��� �Լ��� �����Ҷ� ����Ÿ�� ��� X
			return a+b;
		}
*/

#include <iostream>
using namespace std;

int big(int a, int b) { // a�� b �� ū �� ����
	if(a>b) return a;
	else return b;
}
int big(int a[], int size) { // �迭 a[]���� ���� ū �� ����
	int res = a[0];
	for(int i=1; i<size; i++)
		if(res < a[i]) res = a[i];
	return res;
}

int main() {
	int array[5] = {1, 9, -2, 8, 6};
	cout << big(2,3) << endl; // int big(int a, int b) ȣ��
	cout << big(array, 5) << endl; // int big(int a[], int size) ȣ��
}