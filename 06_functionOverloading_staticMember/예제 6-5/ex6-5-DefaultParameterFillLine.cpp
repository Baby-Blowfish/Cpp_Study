/*
	������ ������ ����Ʈ ��
		void f( int* p=NULL);
		void g( int x[]=NULL);
		void h( const char *s=NULL);	
	�Լ� �ߺ� ����ȭ : ������ �⺻���� �����Ҷ� �Լ� ���� �ε����� �ۼ��ϴµ� �̺��� ����Ʈ �Ű�������
					 ����ϸ� ����ȭ ��ų �� �ִ�.

*/

#include <iostream>
using namespace std;

void fillLine(int n=25, char c='*') { // n���� c ���ڸ� �� ���ο� ���
	for(int i=0; i<n; i++) 
		cout << c;
	cout << endl;
}

int main() {
	fillLine(); // 25���� '*'�� �� ���ο� ���
	fillLine(10, '%'); // 10���� '%'�� �� ���ο� ���
}