/* 
	constructor(생성자) : 객체를 생성할때 객체를 초기화하는 멤버함수, 클래스의 이름과 동일한 멤버함수
		인자가 없는 것은 기본생성자(defalut constructor).

	1. 객체가 생성 될 때 필요한 초기 작업을 하기 위해 사용
		멤버 변수값 설정, 메모리 동적 할당, 파일 열기, 네트쿼크 연결 등
	2. 각 객체마다 생성되는 시점에 오직 한번만 자동으로 실행됨.
	3. 함수 이름은 클래스 이름과 동일해야함.
	4. 함수 선언부과 함수 구현부에 리턴 타입을 선언 하지 않고, 아무것도 반환하지 않는다..(void도 안됨)
		class Circle
		{	
			public :
				Circle();
				void Circle();	error!
				int Circle();   error!
				Circle(int n);

		};

		Circle::Circle
		{
			return;			
			return 0;		error!
		}

	5. 중복 가능 , 함수 오버 로딩 기능을 사용함. 함수 오버로딩은 함수이름은 같고 인자 즉 매개변수가 다를 경우에 해당
		반환값은 상관없음.

*/


#include <iostream> 
using namespace std; 

class Circle {
public:
	int radius;
	Circle(); // 기본 생성자
	Circle(int r); // 매개 변수 있는 생성자
	double getArea();
}; 

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut; // 매개 변수 없는 생성자 호출
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30); // 매개 변수 있는 생성자 호출
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}
