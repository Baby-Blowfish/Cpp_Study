/*
	��Ӱ� ��ü ������
	up casting : �Ļ� Ŭ������ ��ü�� �⺻ Ŭ������ �����ͷ� ����Ű�� ��
		
		int main() {
			ColorPoint cp; // �Ļ� Ŭ������ ��ü ����
			ColorPoint *pDer = &cp;
			Point *pBase = pDer; // �� ĳ����
			// Point *pBase = (Point *)pDer �� ���� ����� Ÿ�� ��ȯ�� �ʿ����.

			pDer->set(3,4);
			pBase->showPoint();
			pDer->setColor("Red");
			pDer->showColorPoint();
			pBase->showColorPoint(); // error!
			
		}


	down casting : �⺻ Ŭ������ ����Ű�� ��ü�� �Ļ� Ŭ������ �����ͷ� ����Ű�� ��

		int main() {
			ColorPoint cp; // �Ļ� Ŭ������ ��ü ����
			ColorPoint *pDer = &cp;
			Point *pBase = pDer; // �� ĳ����
			// Point *pBase = (Point *)pDer �� ���� ����� Ÿ�� ��ȯ�� �ʿ����.

			pBase->set(3,4);
			pBase->showPoint();

			pDer = (ColorPoint*)pBase;	// ��������� Ÿ���� ���ؾ���
			pDer->setColor("Red");
			pDer->showColorPoint();
			
		}




	protected ���� ������ : �⺻ Ŭ������ protected�� ������ ����� �Ļ� Ŭ�������� ������ ���
							�ٸ� Ŭ������ �ܺ� �Լ����� ������ �� ������ ������
*/

#include <iostream>
#include <string>
using namespace std;

class Point { 
protected:
	int x, y; //�� �� (x,y) ��ǥ��
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color)  {	this->color = color; }
	void showColorPoint();
	bool equals(ColorPoint p);
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point Ŭ������ showPoint() ȣ��
}

bool ColorPoint::equals(ColorPoint p) {
	if(x == p.x && y == p.y && color == p.color)	// �� ��� & protected�̹Ƿ� ����
		return true;
	else 
		return false;
}

int main() {
	Point p;	// �⺻ Ŭ������ ��ü ����
	p.set(2,3);										// �� public ����
	p.x = 5;										// �� private �Ұ���
	p.y = 5;										// �� private �Ұ���
	p.showPoint();

	ColorPoint cp; // �Ļ� Ŭ������ ��ü ����
	cp.x = 10;										// �� ��� but private �Ұ���
	cp.y = 10;										// �� ��� but private �Ұ���
	cp.set(3,4);
	cp.setColor("Red");

	ColorPoint cp2;
	cp2.set(3,4);
	cp2.setColor("Red");
	cout << ((cp.equals(cp2))?"true":"false");		// �� public ����
}