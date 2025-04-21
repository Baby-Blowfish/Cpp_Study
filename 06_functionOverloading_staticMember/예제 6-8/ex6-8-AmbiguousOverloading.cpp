/*
	함수 중복의 모호성 : 중복된 함수에 대한 호출이 모호(ambiguous)할 경우 에러 발생
		1. 형 변환으로 인한 모호성 : 컴파일런는 작은 타입을 큰 타입으로 자동 형변환한다.
			char -> int -> long -> float -> double
		2. 참조 매개 변수로 인한 모호성 : 참조 매개 변수를 가진 함수와 보통 매개 변수를 가진 함수가 중복시

		3. 디폴트 매개 변수로 인한 모호성

*/
#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;	
}

int add(int a, int &b) {
	b = b + a;
	return b;
}

int main(){
	int s=10, t=20;
	cout << add(s, t); // 컴파일 오류
}
