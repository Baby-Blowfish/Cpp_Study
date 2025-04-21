/*
	istream& get(char* s, int n, char delim = '\n')
		�Է½�Ʈ�����κ��� �ִ� n-1���� ���ڸ� �о� �迭 s�� �����ϰ� �������� '\0\���� ����,
		�Է� ���� delim�� ������ ���� ���ڸ� ������ ���ݱ��� ���� ���ڸ� �迭 s�� �����ϰ� ����
	istream& getline(char* s, int n, c har delim ='\n')
		get()�� ����, ������ delim�� ������ ���� ���ڸ� ��Ʈ������ ����

	istream& ignore(int n = 1, int delim = EOF)
		�Է� ��Ʈ������ n�� ���� ����, ���߿� delim���ڸ� ������ delim ���ڸ� �����ϰ� ����
	
	int gcount()
		�ֱٿ� �Է� ��Ʈ������ ���� ����Ʈ ��(������ ����) ����, <enter> Ű�� ������ ����

		char line[80];
		getline(line, 80);
		gcount();					// '\n'�� �о���� �ʰ� �������Ƿ� 

		getline(line, 80);
		gcount();
*/

#include <iostream>
using namespace std;

int main() {
	char line[80];
	cout << "cin.getline() �Լ��� ������ �н��ϴ�." << endl;
	cout << "exit�� �Է��ϸ� ������ �����ϴ�." << endl;

	int no = 1; // ���� ��ȣ
	while(true) {
		cout << "���� " << no << " >> ";
		cin.getline(line, 80); // 79�������� ���� ����
		if(strcmp(line, "exit") == 0)
			break;
		cout << "echo --> ";;		
		cout << line << endl; // ���� ������ ȭ�鿡 ���
		no++; // ���� ��ȣ ����
	}
}