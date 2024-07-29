/*
	함수 중복의 모호성 : 중복된 함수에 대한 호출이 모호(ambiguous)할 경우 에러 발생
		1. 형 변환으로 인한 모호성 : 컴파일러는 작은 타입을 큰 타입으로 자동 형변환한다.
			char -> int -> long -> float -> double
		2. 참조 매개 변수로 인한 모호성 : 참조 매개 변수를 가진 함수와 보통 매개 변수를 가진 함수가 중복시

		3. 디폴트 매개 변수로 인한 모호성 : 디폴트 매개 변수를 가진 함수와, 보통 매개 변수를 가진 함수가 중복되는 경우

*/
#include <iostream>
#include <string>
using namespace std;

void msg(int id) {
	cout << id << endl;
}

void msg(int id, string s="") {
	cout << id << ":" << s << endl;
}

int main(){
	msg(5, "Good Morning"); // 정상 컴파일. 두번째 msg() 호출
	msg(6); // 함수 호출 모호. 컴파일 오류
}
