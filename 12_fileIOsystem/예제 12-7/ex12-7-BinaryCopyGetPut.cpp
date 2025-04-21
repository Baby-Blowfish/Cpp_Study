
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	// �ҽ� ���ϰ� ���� ������ �̸�
	const char* srcFile = "C:\\Users\\cannu\\Desktop\\��ȿ��.jpg";
	const char* destFile = "C:\\Users\\cannu\\Desktop\\��ȿ��.jpg";

	// �ҽ� ���� ����
	ifstream fsrc(srcFile, ios::in | ios::binary);
	if(!fsrc) { // ���� ���� �˻�
		cout << srcFile << " ���� ����" << endl;
		return 0;
	}

	// ���� ���� ����
	ofstream fdest(destFile, ios::out | ios::binary);
	if(!fdest) { // ���� ���� �˻�
		cout << destFile << " ���� ����"<< endl;
		return 0;
	}

	// �ҽ� ���Ͽ��� ���� ���Ϸ� �����ϱ�
	int c;
	while((c=fsrc.get()) != EOF) { // �ҽ� ������ ������ �� ����Ʈ�� �д´�.
		fdest.put(c); // ���� ����Ʈ�� ���Ͽ� ����Ѵ�.
	}
	cout << srcFile << "�� " << destFile << "�� ���� �Ϸ�" << endl;
	fsrc.close();
	fdest.close();
}