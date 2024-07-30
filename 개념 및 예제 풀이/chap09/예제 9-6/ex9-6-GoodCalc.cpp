/*
	pure virtual function(순수 가상 함수) : 코드가 없고 선언만 있는 가상 함수
	
	abstract class(추상 클래스) : 최소 하나의 순수 가상 함술르 가진 클래스
								 불안전한 클래스
								 추상 클래스의 인스턴스를 생성할 수 없다.
		Shape shape;				error!
		Shape *p = new Shape();		error!
		Shape *p;					가능
	
	추상 클래스의 상속 : 추상 클래스를 상속 받는 파생 클래스는 자동으로 추상 클래스가된다. 객체 생성 불가능

	추상 클래스의 구현 : 파생 클래스에서 추상 클래스의 순수 가상 함수의 코드를 작성함을 뜻함

	파생 클래스가 온전한 클래스가 되려면 상속받은 추상 클래스의 모든 순수 가상 함수를 오버라이딩하여
	구현하여야 한다. 
	추상 클래스를 구현한다면 추상 클래스가 아니므로 객체를 생성 할 수 있다.

*/
#include <iostream>
using namespace std;

class Calculator {
public:
	virtual int add(int a, int b) = 0; // 두 정수의 합 리턴
	virtual int subtract(int a, int b) = 0; // 두 정수의 차 리턴
	virtual double average(int a [], int size) = 0; // 배열 a의 평균 리턴. size는 배열의 크기
};

class GoodCalc : public Calculator {
public:
	int add(int a, int b) { return a + b; }	
	int subtract(int a, int b) { return a - b; }	
	double average(int a [], int size) {
		double sum = 0;
		for(int i=0; i<size; i++) 
			sum += a[i];
		return sum/size;
	}	
};

int main() {
	int a[] = {1,2,3,4,5};
	Calculator *p = new GoodCalc();
	cout << p->add(2, 3) << endl;
	cout << p->subtract(2, 3) << endl;
	cout << p->average(a, 5) << endl;
	delete p;
}