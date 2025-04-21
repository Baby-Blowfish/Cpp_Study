/*
	inheritance(상속) : 객체지향 언어의 본질적 특성이다. 소프트웨어 재사용을 가능하게 하며 동적바인딩
						을 통해 객체 지향 프로그래밍의 중요한 기능이다.
						두 클래스 사이에 부모 자식의 상속관계를 선언한다. 
						기본 클래스에서 파생 클래스로 갈수로 클래스 개념이 구체화
						다중 상속을 통한 클래스의 재활용성을 높힘
						

		base class(기본클래스, 부모클래스) : super class(java), parent class(c#) 
		derived class(파생클래스, 자식클래스) : sub class(java), child class(c#)
		multiple inheritance(다중 상속) :

		1. 상속을 이용하여 중복을 제거하고 간결한 클래스 작성
		2. 클래스 간의 계층적 분류 및 관리가 용이함.
		3. 클래스 재사용과 확장을 통한 소프트웨어의 생산성 향상.


	상속 선언 
		class 파생 클래스 이름 : 상속 접근 지정자 기본 클래스 이름
		
		class Student : pulic Person{
			....
		};
		class StudentWorker : pulbic Student{
			...
		};

		Person 클래스에 선언된 멤버 변수나 멤버 함수를 물려받음, 상속횟수 제한 없음
		웬만하면  상속 접근 지정자는 pulic만 씀

		파생클래스 객체가 할당될때 기본 클래스의 멤버들도 할당됨.
		파생 클래스의 멤버들은 기본 클래스의 private 멤버 외에 모든 멤버를 접근가능
		기본 클래스에 선언된 private 멤버는 파생 클래스에 상속되고 파생 클래스의 객체에도 포함되지만
		파생 클래스의 어떤 멤버함수에서도 직접 접근이 불가능하다. 기본클래스의 멤버 함수만 기본클래스의 멤버
		변수에 접근이 가능하다.




*/

#include <iostream>
#include <string>
using namespace std;

class Point { // 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
	int x, y; //한 점 (x,y) 좌표값
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point { // 2차원 평면에서 컬러 점을 표현하는 클래스 ColorPoint. Point를 상속받음
	string color;// 점의 색 표현
public:
	void setColor(string color)  {	this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point의 showPoint() 호출
}

int main() {
	Point p; // 기본 클래스의 객체 생성
	ColorPoint cp; // 파생 클래스의 객체 생성
	cp.set(3,4); // 기본 클래스의 멤버 호출
	cp.setColor("Red"); // 파생 클래스의 멤버 호출
	cp.showColorPoint(); // 파생 클래스의 멤버 호출
}