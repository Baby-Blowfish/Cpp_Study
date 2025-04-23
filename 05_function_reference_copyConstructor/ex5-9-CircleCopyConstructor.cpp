/*
	object shallow copy(객체의 얕은 복사) : 객체의 멤버를 1:1로 복사
											객체의 멤버 변수에 동적 메모리가 할당된 경우
											사본은 원본 객체가 할당 받은 메모리를 공유하는 문제 발생
	object deep capy(객체의 깊은 복사) :	객체 복사 시, 객체의 멤버를 1:1대로 복사
											객체의 멤버 변수에 동적 메모리가 할당된 경우
											사본은 원본이 가진 메모리 크기 만큼 별도로 동적 할당
											원본의 동적 메모리에 있는 내용을 사본의 동적메모리에 복사
	
	복사 생성 및 copy constructor복사 생성자
		복사 생성자 선언 : 객체가 생성될 때 원본 객체를 복사하여 생성되는 경우 자동으로 실행되는 복사 생성자
		
		1. 매개변수는 오직 하나, 자기 클래스에 대한 참조로 선언
		2. 클래스 내에 오직 한 개만 선언
			ex)
			class Circle {
			private:
				int radius; 
			public:
				Circle(const Circle& c); // 컴파일러에 의해 자동으로 복사 생성자 선언됨.
				Circle() { radius = 1; }
				Circle(int radius) { this->radius = radius; }
				double getArea() { return 3.14*radius*radius; }
			};

			Circle::Circle(const Circle& c) { // 컴파일러에 의해 구현된 복사 생성자.
				this->radius = c.radius;
			}
			int main() {
				Circle src(30); // src 객체의  보통 생성자 호출
				Circle dest(src); // dest 객체의 복사 생성자 자동 호출
			}


*/


#include <iostream>
using namespace std;

class Circle {
private:
	int radius; 
public:
	Circle(const Circle& c); // 복사 생성자 선언
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
}; 

Circle::Circle(const Circle& c) { // 복사 생성자 구현
	this->radius = c.radius;
	cout << "복사 생성자 실행 radius = " << radius << endl;
}

int main() {
	Circle src(30); // src 객체의  보통 생성자 호출
	Circle dest(src); // dest 객체의 복사 생성자 호출

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "사본의 면적 = " << dest.getArea() << endl;
}