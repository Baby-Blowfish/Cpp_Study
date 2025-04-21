/*

	multiple inheritanc(다중 상속) : 하나의 파생클래스가 여러 클래스를 동시에 상속받는 것

	
	다이아 몬드 형의 다중 상속구조는 기본 클래스의 멤버가 중복 상속되어 본 클래스 멤버 접근에 
	모호한 문제 발생
	
	
	virtual inheritance(가상 상속) : 다중 상속에서 생긴느 멤버 중복 생성 문제 해결하기위해
									기본 클래스 앞에 virtual 키워드를 이용하여 가상 상속 선언
	virtual bass class(가상 기본 클래스) : 컴파일러에게 파생 클래스의 객체가 생성될때 기본 클래스의
											멤버 공간을 오직 한번만 할당하고 이미 할당되어 있다면
											공유 하도록 지시
	
	class BaseIO{
	public:
		int mode;
	};
	class In : virtual BaseIO{
	public:
		int readPos;
	};
	class Out : virtual BaseIO{
	public:
		int writePos;
	};
	class Inout:public In, public Out{
	public:
		bool safe;
	};
	
	int main()
	{
		InOut ioObj;

		ioObj.readPos = 10;
		ioObj.writePos = 20;
		ioObj.safe = true;
		ioObj.mode = 5;
		
		return 0;
	}


*/

#include <iostream>
using namespace std;

class Adder {
protected:
	int add(int a, int b) { return a+b; }
};

class Subtractor {
protected:
	int minus(int a, int b)  { return a-b; }
};

class Calculator : public Adder, public Subtractor { // 다중 상속
public:
	int calc(char op, int a, int b);
};

int Calculator::calc(char op, int a, int b) {
	int res=0;
	switch(op) {
		case '+' : res = add(a, b); break;
		case '-' : res = minus(a, b); break;
	}
	return res;
}

int main() {
	Calculator handCalculator;
	cout << "2 + 4 = " << handCalculator.calc('+', 2, 4) << endl;
	cout << "100 - 8 = " << handCalculator.calc('-', 100, 8) << endl;
}