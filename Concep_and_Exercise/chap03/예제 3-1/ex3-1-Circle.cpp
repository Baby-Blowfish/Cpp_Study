/*	객체(object) : 상태(state) 즉 멤버 변수 , 행동(behavior) 즉 멤버 함수
	
	캡슐화(encapsulation) : 객체를 캡슐로 싸서 그 내부를 보호하고 볼 수 없게 함 (private)
	객체들 끼리 정보 교환이나 통신하기 위해 일부 요소의 공개 노출이 필요함( public )

	Class(클래스) : 객체를 정의하는 설계도, 객체를 찍어내는 틀 
	실체(instance) : 멤버 변수와 멤버 함수가 메모리에서 실행되는 것
*/

/*	클래스 만들기
	class declaration(클래스 선언부)
		class  클래스 이름
		{
			public :             // access specifier(접근지정자) : public, private, protected, \
			`													 기본값은 private 
				int radius = 4;
				double getArea();
			.......
		};                       //  보통 클래스 선언은 헤더에 들어가 있음. 뒤의 ; 뺴먹으면 에러 표시가 안남!!!!!!!!!!!!!!!

	class implementation(클래스 구현부)
		double Circle :: getArea()		// 리턴 타입,  클래스이름,  범위지정자, 멤버함수명과 매개변수
		{
			return 3.14*radius*radius;
		}

*/

#include <iostream> 
using namespace std; 

class Circle {
public:
	int radius; 
	double getArea(); 
}; // 클래스 선언부

double Circle::getArea() {
	return 3.14*radius*radius;
}	// 클래스 구현부

int main() {
	Circle donut; // 클래스의 크기만큼 stack에 할당됨 = instance
	// 객체의 멤버에 접근하는 방법 :   객체이름.멤버
	donut.radius = 1; // donut 객체의 반지름을 1로 설정
	double area = donut.getArea(); // donut 객체의 면적 알아내기
	cout << "donut 면적은 " << area << endl;

	Circle pizza; 
	pizza.radius = 30; // pizza 객체의 반지름을 30으로 설정
	area = pizza.getArea(); // pizza 객체의 면적 알아내기
	cout << "pizza 면적은 " << area << endl;
}
