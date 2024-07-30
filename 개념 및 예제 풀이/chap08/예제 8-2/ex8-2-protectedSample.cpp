/*
	상속과 객체 포인터
	up casting : 파생 클래스의 객체를 기본 클래스의 포인터로 가리키는 것
		
		int main() {
			ColorPoint cp; // 파생 클래스의 객체 생성
			ColorPoint *pDer = &cp;
			Point *pBase = pDer; // 업 캐스팅
			// Point *pBase = (Point *)pDer 과 같은 명시적 타입 변환이 필요없음.

			pDer->set(3,4);
			pBase->showPoint();
			pDer->setColor("Red");
			pDer->showColorPoint();
			pBase->showColorPoint(); // error!
			
		}


	down casting : 기본 클래스가 가리키는 객체를 파생 클래스의 포인터로 가리키는 것

		int main() {
			ColorPoint cp; // 파생 클래스의 객체 생성
			ColorPoint *pDer = &cp;
			Point *pBase = pDer; // 업 캐스팅
			// Point *pBase = (Point *)pDer 과 같은 명시적 타입 변환이 필요없음.

			pBase->set(3,4);
			pBase->showPoint();

			pDer = (ColorPoint*)pBase;	// 명시적으로 타입을 정해야함
			pDer->setColor("Red");
			pDer->showColorPoint();
			
		}




	protected 접근 지정자 : 기본 클래스의 protected로 지정된 멤버는 파생 클래스에게 접근을 허용
							다른 클래스나 외부 함수에서 접근할 수 없도록 숨겨짐
*/

#include <iostream>
#include <string>
using namespace std;

class Point { 
protected:
	int x, y; //한 점 (x,y) 좌표값
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
	showPoint(); // Point 클래스의 showPoint() 호출
}

bool ColorPoint::equals(ColorPoint p) {
	if(x == p.x && y == p.y && color == p.color)	// ① 상속 & protected이므로 가능
		return true;
	else 
		return false;
}

int main() {
	Point p;	// 기본 클래스의 객체 생성
	p.set(2,3);										// ② public 가능
	p.x = 5;										// ③ private 불가능
	p.y = 5;										// ④ private 불가능
	p.showPoint();

	ColorPoint cp; // 파생 클래스의 객체 생성
	cp.x = 10;										// ⑤ 상속 but private 불가능
	cp.y = 10;										// ⑥ 상속 but private 불가능
	cp.set(3,4);
	cp.setColor("Red");

	ColorPoint cp2;
	cp2.set(3,4);
	cp2.setColor("Red");
	cout << ((cp.equals(cp2))?"true":"false");		// ⑦ public 가능
}