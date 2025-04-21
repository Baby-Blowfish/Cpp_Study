/*
	friend Ű���� : Ŭ���� �ܺο� �ۼ��� �Լ��� Ŭ���� ���� friend Ű����� �����Ͽ�, Ŭ���� ��� �Լ��� ������
				    ���� �ڰ��� �ο��Ҽ� �ִ�. ���� ����� �ƴϹǷ� ��ӵ��� �ʴ´�.

	friend fuction : friend Ű����� ����� �ܺ� �Լ��� ������ �Լ���� �θ�, Ŭ���� ����ΰ�ó��
					Ŭ������ ��� ������ �Լ��� ���� ����.
	1. Ŭ���� �ܺο� �ۼ��� �Լ��� ������� ����
		
	2. �ٸ� Ŭ������ ��� �Լ��� ������� ����
	3. �ٸ� Ŭ������ ��� ��� �Լ��� ������� ����

*/


#include <iostream>
using namespace std;

class Rect; // forward decalaration. �� ������ ������, ���� ���ο��� Rect�� �����ϴ� ���� ����(forward reference) ���� �߻�
bool equals(Rect r, Rect s); // equals() �Լ� ����

class Rect { // Rect Ŭ���� ����
	int width, height;
public:
	Rect(int width, int height)  { 	this->width = width; this->height = height;	}
	friend bool equals(Rect r, Rect s); //������ �Լ� ����
};

bool equals(Rect r, Rect s) { // �ܺ� �Լ�
	if(r.width == s.width && r.height == s.height) return true; 
	else return false;
}

int main() {
	Rect a(3,4), b(4,5);
	if(equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}