/*
	Defalut Parameter(����Ʈ �Ű�����) : �Լ� ȣ�� �� �Ű� ������ ���� �Ѿ���� �ʴ´ٸ� �̸� ������ ����Ʈ
										���� �޵��� ����� �Ű� ������ ���Ѵ�. �⺻�Ű�������� ��.
	
	�Ű����� = ����Ʈ ��
		void star(int a = 5); //a�� ����Ʈ �� 5
		
		void msg(int id, string text = "HELLO");
			msg(10);		// ����
			msg(20,"goog")	// ����
			msg();			// ����
			msg("hello");	// ����

	����Ʈ �Ű� ������ ���� ���� ���� : �� �ʿ� ���� ���� �Ǿ����.
		void calc( int a, int = 5, int c, int d = 0);		// ���� !
		void sum(int a = 0, int b, int c);					// ���� !

	�Ű� ������ ���� ���ϴ� ��Ģ : ȣ�� ���� ������ ������ ������ �տ������� ������� ���� �� 
								�������� ����Ʈ ������ ����
		void squre(int width = 1, int height = 1);
		squre();		// width = 1, height = 1
		squre(5);		// width = 5, height = 1
		squre(3, 8);	// width = 3, height = 8

*/

#include <iostream>
#include <string>
using namespace std;

// ���� ����
void star(int a=5);
void msg(int id, string text="");

// �Լ� ����
void star(int a) {
	for(int i=0; i<a; i++) cout << '*';
	cout << endl;
}

void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}

int main() {
	star(); // star(5);�� ����
	star(10);

	msg(10); // star(10, "");�� ����
	msg(10, "Hello");
}
