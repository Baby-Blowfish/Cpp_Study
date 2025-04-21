/*
	istream class

	int get() : �Է� ��Ʈ������ ���ڸ� �о� ����, ������ EOF�� ������ -1(EOF) ����
	istream& get(char& ch) : �Է� ��Ʈ������ ���ڸ� �о� ch�� ����, ���� �Է� ��Ʈ�� ��ü�� ���� ����
	������ EOF�� ������, ��Ʈ�� ������ ���� �÷���(failbit) ����

*/

#include <iostream>
using namespace std;

void get1() {
	cout << "cin.get()�� <Enter> Ű���� �Է� �ް� ����մϴ�>>";
	int ch; // EOF���� �񱳸� ���� int Ÿ������ ����
	while((ch = cin.get()) != EOF) { // ���� �б�
		cout.put(ch); // ���� ���� ���
		if(ch == '\n')
			break; // <Enter> Ű�� �ԷµǸ� �б� �ߴ�
	}
}

void get2() {
	cout << "cin.get(char&)�� <Enter> Ű���� �Է� �ް� ����մϴ�>>";
	char ch;
	while(true) { 
		cin.get(ch); // ���� �б�
		if(cin.eof()) break; // EOF�� ������ �б� ����
		cout.put(ch); // ch�� ���� ���
		if(ch == '\n')  
			break; // <Enter> Ű�� �ԷµǸ� �б� �ߴ�
	}
}

int main() {
	get1(); // cin.get()�� �̿��ϴ� ���
	get2(); // cin.get(char&)�� �̿��ϴ� ���
}