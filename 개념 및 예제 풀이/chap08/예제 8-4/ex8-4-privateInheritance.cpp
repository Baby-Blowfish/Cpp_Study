/*
	상속의 종류
	public 상속 : 기본 클래스를 public으로 상속 받으면 기본 클래스의 protected, public 멤버들만
				 변경 없이 파생 클래스에서 상속 확장됨.
	protectd 상속 : 기본 클래스를 protected로 상속받으면 기본 클래스의 protected, public 멤버들은
					protected, 접근 지정을 변경되어 파생 클래스에 상속 확장된다.
	private 상속 :  기본 클래스를 praivate로 상속받으면, 기본 클래스의 protected, public 멤버들은
					private 접근 지정으로 변경되어 파생 클래스에 상속 확장된다.
	
	상속 접근 지정자가 생략되면 private으로 처리


*/
#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : private Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};

int main() {
	Derived x;
	x.a = 5; 		// ① error!
	x.setA(10);		// ② error!
	x.showA(); 		// ③ error!
	x.b = 10; 		// ④ error!
	x.setB(10);		// ⑤ error!
	x.showB(); 		// ⑥ o
} 