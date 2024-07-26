/*
	동적 메모리 할당 및 반환
	Static Allocation (정적 할당, stack) : 런타임에 할당, 런타임에서 크기 변경 불가.
	Dynamic Allocation (동적 할당, heap) : 런타임에 할당, 런타임에서 크기 변경 가능.

	데이터타입 *포인터 변수 = new 데이터타입;
	delete 포인터변수;

	new		: 데이터타입의 크기만큼 힙으로 부터 메모리를 할당 하고 주소를 리턴한다.
	delete 	: 포인터 변수가 가리키는 메모리를 힙으로 반환한다.

	동적 메모리 할당 및 초기화
	데이터타입 *포인터 변수 = new 데이터타입(초깃값);
	
	ex)
		int *pi = new int;
		delete *pi;

		Circle *pCircle = new Circle();
		delete pCircle;
		
		int *pi = new int(20);
		delete *pi;
		
		Circle *pCircle = new Circle();
		delete pCircle;
			

	delete 사용 주의
		ex)
			int n;
			int *p = &n;
			delete p;  error! 동적할당 받지 않은 메모리의 할당 불가

		ex)
			int *p = new int;
			delete p;
			delete p;  			error! 이미 반환한 메모리 중복 반환 불가


*/
#include <iostream>
using namespace std;

int main() {
	int *p;

	p = new int; 
	if(!p) { 
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}
	
	*p = 5; // 할당 받은 정수 공간에 5 삽입
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p; 
}