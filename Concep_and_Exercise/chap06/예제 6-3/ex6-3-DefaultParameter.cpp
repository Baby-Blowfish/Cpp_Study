/*
	Defalut Parameter(디폴트 매개변수) : 함수 호출 시 매개 변수가 값이 넘어오지 않는다면 미리 정해진 디폴트
										값을 받도록 선언된 매개 변수를 말한다. 기본매개변수라고도 함.
	
	매개변수 = 디폴트 값
		void star(int a = 5); //a의 디폴트 값 5
		
		void msg(int id, string text = "HELLO");
			msg(10);		// 가능
			msg(20,"goog")	// 가능
			msg();			// 오류
			msg("hello");	// 오류

	디폴트 매개 변수에 관한 제약 조건 : 끝 쪽에 몰려 선언 되어야함.
		void calc( int a, int = 5, int c, int d = 0);		// 오류 !
		void sum(int a = 0, int b, int c);					// 오류 !

	매개 변수에 값을 정하는 규칙 : 호출 문에 나열된 실인자 값들을 앞에서부터 순서대로 전달 후 
								나머지는 디폴트 값으로 전달
		void squre(int width = 1, int height = 1);
		squre();		// width = 1, height = 1
		squre(5);		// width = 5, height = 1
		squre(3, 8);	// width = 3, height = 8

*/

#include <iostream>
#include <string>
using namespace std;

// 원형 선언
void star(int a=5);
void msg(int id, string text="");

// 함수 구현
void star(int a) {
	for(int i=0; i<a; i++) cout << '*';
	cout << endl;
}

void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}

int main() {
	star(); // star(5);와 동일
	star(10);

	msg(10); // star(10, "");과 동일
	msg(10, "Hello");
}
