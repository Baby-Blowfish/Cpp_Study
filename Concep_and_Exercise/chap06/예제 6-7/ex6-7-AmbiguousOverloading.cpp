/*
	함수 중복의 모호성 : 중복된 함수에 대한 호출이 모호(ambiguous)할 경우 에러 발생
		1. 형 변환으로 인한 모호성 : 컴파일런는 작은 타입을 큰 타입으로 자동 형변환한다.
			char -> int -> long -> float -> double
		2. 참조 매개 변수로 인한 모호성
		3. 디폴트 매개 변수로 인한 모호성

*/

#include <iostream>
using namespace std;

float square(long a) {
	return a*a;
}

float square(float a) {
	return a*a;
}

double square(double a) {
	return a*a;
}

int main() {
	cout << square(3.0); // square(double a); 호출
	//cout << square(3); // 중복된 함수에 대한 모호한 호출로서, 컴파일 오류
						 // 3.0은 기본 double 타입, 3은 기본 int 타입, long형이 있더라도 error가 발생
	cout << square(3.f); // 명시적으로 타입을 선언해야함.
	cout << square((float)3); // 명시적으로 타입을 선언해야함.
}