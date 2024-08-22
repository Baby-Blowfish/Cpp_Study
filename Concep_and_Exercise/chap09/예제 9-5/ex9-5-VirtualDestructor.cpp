/*
	가상소멸자 : 기본 클래스의 소멸자를 만들 떄 가상 함수로 작성
				파생 클래스의 객체가 기본 클래스에 대한 포인터로 delete 되는 상황에서도 정상적인
				소멸이 되기 위해서
	1. 소멸자를 가상 함수로 선언하지 않는 경우
		Base *p = new Derived();
		delete p;
			~Base()만 호출되고 ~Derived()는 실행되지 않음.
	2. 소멸자를 가상 함수로 선언한 경우
			~Base()에 대한 호출이 동적 바인딩을 통해 ~Derived() 호출로 바뀜.
			~Derive()가 실행 후 파생 클래스의 소멸자는 자신이 실행된 후 기본 클래스의 소멸자를 호출하도록
			컴파일 되므로 ~Base()코드가 실행되어 기본,파생 클래스의 소멸자가 모두 순서대로 실행됨.

	생성자는 가상함수가 될 수 없고, 생성자에서 가상 함수를 호출해도 동적 바인딩이 일어나지 않는다.
		
*/

#include <iostream>
using namespace std;

class Base {
public:
	virtual ~Base() { cout << "~Base()" << endl; }
};

class Derived: public Base {
public:
	virtual ~Derived() { cout << "~Derived()" << endl; }
};

int main() {
	Derived *dp  = new Derived();
	Base *bp = new Derived();

	delete dp; // Derived의 포인터로 소멸
	delete bp; // Base의 포인터로 소멸
}
