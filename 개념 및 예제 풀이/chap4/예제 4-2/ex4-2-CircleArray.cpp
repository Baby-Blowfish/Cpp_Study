/*
	배열 장점 : 동일 타입의 변수를 관리하기 편함
		 단점 : 크기가 고정되어 있다.

	객체 배열 : Circle circleArray[3];
	1. 객체 배열이 인스턴스 시 각각 마다 기본 생성자 호출
	2. 기본 생성자가 있는 지 확인해야함.
	3. 객체 인스턴스 시 매개 변수를 가진 생성자 호출 시 오류 
		Circle CircleArray[3](0); error!
	4. 객체 배열이 소멸시 높은 인덱스 부터 객체가 소멸됨 ~Circle();

	circleArray[1] : circleArray의 첫 주소로 가서 1의 크기 차이가 나는 것을 호출
	*(circleArray+1) : circleArray의 두번쨰 주소로 바로 감

*/

#include <iostream>
using namespace std;

class Circle {
	int radius; 
public:
	Circle() {	radius = 1; }
	Circle(int r)  { radius = r; }
	void setRadius(int r)  { radius = r; } 
	double getArea(); 
}; 

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle circleArray[3]; // (1) Circle 객체 배열 생성

	// 배열의 각 원소 객체의 멤버 접근
	circleArray[0].setRadius(10); // (2)
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for(int i=0; i<3; i++) // 배열의 각 원소 객체의 멤버 접근
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
		//cout << "Circle " << i << "의 면적은 " << p[i].getArea() << endl;

	Circle *p; // (3)
	p = circleArray; // (4)
	for(int i=0; i<3; i++) { 	// 객체 포인터로 배열 접근
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++; // (5)
	}
}