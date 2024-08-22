/*
	template(템플릿) : 함수나 클래스 코드를 찍어 내듯이 생산할 수 있도록 일반화(generic)시키는 도구이다.
						중복 함수들을 일반화 시킨 함수 template function, generic function

	템플릿 선언과 제네릭 타입
		template <class T>
		template <typename T>

		generic type : c++의 기본 타입은 아니며 이들을 일반화 싴닌 새로운 타입으로 일반 타입이라고 함.
	
	specialization(구체화) : 중복 함수들을 템플릿화하는 과정의 역과정, 컴파일러가 함수의 호출문을 컴파일할때,
							구체화를 통해 제네릭 함수로부터 구체적인 함수의 소스 코드를 만들어 낸다..
	specialization function(구체화된 함수) : 구체화를 통해 생성된 함수를 구체화된 함수

	템플릿 역할 : 템플릿 함수는 컴파일 되지도 호출되지도 않는 그저 함수의 틀이다. 제네릭 함수를 선언하고
				 컴파일 시점에 구체화시키기 위한 틀을 만드는 것, 템플릿 함수로부터 구체화된 버전의 함수가
				 컴파일되고 호출된다.
	
	구체화의 오류 : 
		template <class T> 
		void myswap(T & a, T & b) 
		
		int c = 3;
		double d = 5.3;
		myswap(c, d);		compile error!, c와 d의 타입의 같아야함. 

	템플릿의 장단점
		1. 소프트웨어 생산성과 유연성을 높힘
		2. 컴파일러에 따라 템플릿이 지원되지 않을 수 있으므로 포팅에 취약
		3. 템플릿과 관련한 컴파일 오류 메시지가 빈약하여 디버깅에 어려움이 있음

	generic programming(일반화 프로그래밍) : 템플릿을 사용하여 제너릭 함수나 재네릭 클래스로 프로그래밍	
*/
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius=1) { this->radius = radius; }
	int getRadius() { return radius;}
};

template <class T> 
void myswap(T & a, T & b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a=4, b=5;
	myswap(a, b);
	cout << "a=" << a << ", " << "b=" << b << endl;

	double c=0.3, d=12.5;
	myswap(c, d);
	cout << "c=" << c << ", " << "d=" << d << endl;

	Circle donut(5), pizza(20);
	myswap(donut, pizza);
	cout << "donut반지름=" << donut.getRadius() << ", ";
	cout << "pizza반지름=" << pizza.getRadius()<< endl;
}