/*
	(after c++11)
	lambda
		lambda calculus(람다 대수)
		lambda expression(람다식)	: 수학의 함수를 단순하게 표현하는 방법, 이름 없는 함수

		f(x, y) = x + y ;	// x,y의 합을 구하는 함수
		(x,y) -> x + y;		// 람다식 표현
		
		((x,y)->x+y)(2,3)	// 람다식의 계산
		= 2 + 3
		= 5

	C++ 람다식의 선언

	lambda : anonymous function(이름 없는 익명 함수), lambda expression(람다식), 람다 함수

	람다식 선언
		캡쳐 리스트  매개변수 리트트	 생략가능		  함수 바디
		[     	 ] 	(			) 	 -> 리턴 타입	 { 	함수코드  };	

		[](int x, int y) { cout<< x + y ;};			// 매개변수 x,y의 합을 출력하는 람다 작성
		[](int x, int y) -> int { return x+y; };	// 매개변수 x,y의 합을 리턴하는 람다 작성
		[](int x, int y) { cout << x + y; } (2,3);	// x=2,y=3을 대입하여 코드 실행. 5출력

		캡쳐 리스트 : 람다식 외부에 선언된 변수(지역변수, 전역변수)목록으로 람다식에서 사용하고자 할 때 나열
		[x] : 변수 x의 값 활용			[&x] : 참조 변수 x 활용
		[=] : 모든 변수의 값 활용		[&]	 : 모든 참조 변수 활용

			int main()
			{
				[](int x, int y) { cout << x+y;}(2,3);		// 람다식 실행 5출력
				return 0;
			}



	람다식의 형식은 컴파일러에만 알려져 있기 때문에, 개발자가 람다식을 저장하는 변수를 직접 선언할 수 없다.
	auto를 이용하면 람다식을 저장하는 변수를 쉽게 선언 할 수 있다.
	

*/
#include <iostream>  
#include <string>  
using namespace std;

int main() {
	auto love = [](string a, string b) { 
		cout << a << "보다 " <<  b << "가 좋아" << endl;
	};  

	love("돈", "너"); // 람다식 호출
	love("냉면", "만두"); // 람다식 호출
}