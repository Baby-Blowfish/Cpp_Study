/*
	가상함수와 overriding(오버라이딩) : 파생 클래스에서 기본 클래스의 가상 함수를 재정의
	실행시간 다형성(run time polymorphism)
	동적 바인딩
	virtual : 컴파일러에게 자신에 대한 호출 바인디을 실행 시간까지 미루도록 지시, 함수만 가능, 변수는 안됨

	overriding 목적 : 파생 클래스들이 자신의 목적에 맞게 가상함수를 재정의 하도록 하는 것. 기본 클래스의
	가상 함수는 상속받는 파생 클래스에서 구현해야 할 일종의 함수 인터페이스를 제공한다.
	가상 함수는 하나의 인터페이스에 대해 서로 다른 모양의 구현이라는 다형성을 실현하는 도구 

	class Shape{
	protected:
		virtual void draw(){}
	}

	class Circle : public Shape{
	protected:
		virtual void draw(){
		}
	}

	class Rect : public Shape{
	protected:
		virtual void draw(){
		}
	}

	class Line : public Shape{
	protected:
		virtual void draw(){
		}
	}

	void paint (Shape* p){
		p->darw();
	}

	paint(new Circle());
	paint(new Rect());
	paint(new Line());


	dynamic binding (동적 바인딩) : 오버라이딩된 함수가 무조건 호출
				 가상함수를 호출 하는 코드를 컴파일 할때, 컴파일러는 바인딩을 실행 시간에 결정하도록 미루어둔다.
				 나중에 가상 함수가 호출되면 실행 중에 객체 내에 오버라이딩된 가상 함수를 동적으로 찾아 호출
				 오버라이딩은 파생 클래스에서 재정의한 가상 함수를 호출을 보장받는다는 선언이다.
				 run-time binding(실행시간바인딩), late binding(늦은 바인딩)
		동적 바인딩은 파생 클래스의 객체에 대해, 기본 클래스의 포인터로 가상 함수가 호출 될때만 일어남.
		1. 기본 클래스 내의 멤버 함수가 가상 함수 호출
		2. 파생 클래스 내의 멤버 함수가 가상 함수 호출
		3. main()과 같은 외부 함수에서 기본 클래스의 포인터로 가상 함수 호출
		4. 다른 클래스에서 가상 함수 호출
		가상 함수를 호출하면, 무조건 동적 바인딩을 통해 파생 클래스에 오버라이딩된 가상 함수가 실행됨.
		
*/

#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	virtual void f() { cout << "Derived::f() called" << endl; }
};

int main() {
	Derived d, *pDer;
	pDer = &d; // 객체 d를 가리킨다.
	pDer->f(); // Derived::f() 호출 

	Base* pBase;
	pBase = pDer; // 업캐스팅. 객체 d를 가리킨다.
	pBase->f(); // 동적 바인딩 발생!! Derived::f() 실행
}