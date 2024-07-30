/*
	상속과 생성자, 소멸자
	파생 클래스와 기본 클래스의 생성자 호출 및 실행 관계
		파생 클래스 인스턴스화시 기본 클래스의 생성자 실행후 파생 클래스의 생성자가 실행된다.
		클래스 A,B,C,가 상속관계라고 가정
			C c;
				C()를 호출하게 되면, C()가 실행하기전 컴파일러가 먼저 B()를 호출, B()가 실행되기전
				A()호출, A()실행, B()실행, C()실행

		if  A()가 선언되지 않고 A(int a){}만 있는 경우
			B b; 인경우 사용할수 있는 적절한 기본 생성자가 없습니다. 라고 error!

	명시적인 기본 클래스의 생성자 선택
		class A {
		public:
			A(){}
			A(int x){}
		};
		class B : public A{
		public:
			B(int x);
		};

		B::B(int x):A(x+3){
		}

		int main()
		{
			B b;	C// b객체의 생성사 실행시 A클래스의 생성자중 A(int x)를 명시적으로 선택
		}
		 


*/

#include <iostream>
#include <string>
using namespace std;

class  TV {
	int size; // 스크린 크기
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }
	int getSize() { return size; }
};

class  WideTV : public TV { // TV를 상속받는 WideTV
	bool videoIn;
public:
	WideTV(int size, bool videoIn) : TV(size) 	{ 
			this->videoIn = videoIn;
	}
	bool getVideoIn() { return videoIn; }
};

class  SmartTV : public WideTV { // WideTV를 상속받는 SmartTV
	string ipAddr; // 인터넷 주소
public:
	 SmartTV(string ipAddr, int size) : WideTV(size, true) { 
		 this->ipAddr = ipAddr;
	}
	 string getIpAddr() { return ipAddr; }
};

int main() {
	 // 32 인치 크기에 "192.0.0.1"의 인터넷 주소를 가지는 스마트 TV 객체 생성
	SmartTV  htv("192.0.0.1", 32);
	cout << "size=" << htv.getSize() << endl;
	cout << "videoIn=" << boolalpha << htv.getVideoIn() << endl;
	cout << "IP=" << htv.getIpAddr() << endl;
}
