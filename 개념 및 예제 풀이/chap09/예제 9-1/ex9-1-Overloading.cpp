/*
	상속 관계에서 함수 재정의
		파생 클래스에 기본 클래스의 멤버 함수와 동일한 이름과 원형으로 함수를 redefine(재정의)하여 사용가능
		기본 클래스에 대한 포인터로는 기본 클래스의 함수를 호출
		파생 클래스에 대한 포인터로는 파생 클래스에 작성된 함수를 호출
		컴파일 시에 결정 ( 동적 바인딩 )
*/

#include <iostream>
using namespace std;

class Base {
public:
	void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	void f() { cout << "Derived::f() called" << endl; }
};

int main() {
	Derived d, *pDer;
	pDer = &d; // 객체 d를 가리킨다.
	pDer->f(); // Derived의 멤버 f() 호출, 컴파일러는 파생 클래스의 함수를 우선적으로 바인딩하기 때문

	Base* pBase;
	pBase = pDer; // 업캐스팅. 객체 d를 가리킨다.
	pBase->f(); // Base의 멤버 f() 호출
}