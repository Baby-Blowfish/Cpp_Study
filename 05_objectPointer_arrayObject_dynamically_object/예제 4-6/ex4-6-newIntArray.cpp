/*
	�迭�� ���� �Ҵ� �� ��ȯ
		������Ÿ�� *������ ���� = new ������Ÿ��[�迭��ũ��]
		delete [] �����ͺ���;

		int *p = new int [5];
		delete [] p;

	�ʱ�ȭ
		int *pia = new int[] {3,5,6,4};

	����
		int *p = new int [10];
		delete p;	//	����

		int *q = new int;
		delete [] p;	// ����


	C����� ���� �Ҵ�

		<cstdlib>
		int *p = (*int)malloc(5*sizeof(int));

	double *p = new double(3.14);
*/

#include <iostream>
using namespace std;

int main() {
	cout << "�Է��� ������ ������?";
	int n;
	cin >> n; // ������ ���� �Է�
	if(n<=0) return 0;
	int *p = new int[n]; // n ���� ���� �迭 ���� �Ҵ�
	if(!p) { 
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	for(int i=0; i<n; i++) {
		cout << i+1 << "��° ����: "; // ������Ʈ ���
		cin >> p[i]; // Ű����κ��� ���� �Է�
	}

	int sum = 0;
	for(int i=0; i<n; i++)
		sum += p[i];
	cout << "��� = " << sum/n << endl;

	delete [] p; // �迭 �޸� ��ȯ
}