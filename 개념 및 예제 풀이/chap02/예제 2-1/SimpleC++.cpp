/* 
	소스: SimpleC++.cpp
	cout과 << 연산자를 이용하여 화면에 출력한다.
*/

#include <iostream> //  #include : 전처리기(preprocessor : cpp), 헤더파일을 컴파일 전에 소스에서 확장하도록 지시, 매크로의 경우 미리 변환됨 
// <iosstream> : .h는 요즘 안붙이는 추세

// useing namespace std; : 네임스페이스

// C++ 프로그램은 main() 함수에서부터 실행을 시작한다.

// cout : console out 객체, C++ 표준 출력 스트림 객체(standard output stream object)
// std::  : cout의 이름 공간이 std임을 표시
// << : 스트림 삽입연산자, 오른쪽의 피연산자 데이터를 왼쪽 스트림 객체에 삽입, <<는 비트연산자이지만 출력스트림에 데이터를 삽입하는 삽인 연산자로\
 		<iostream> 헤더 파일에 재정의(operator overloading) 되어 있음, bool, char, short, int, long, float, double 등의 기본 타입 데이터로 줄력 가능\
		std::cout << n+5 << f() << true << c << std::endl;
// std::cout<<'\n'		 	: 단순이 스트림 버퍼에 '\n'을 삽입하고 끝남.
// std::cout<<std::endl 	: 조작자(manipulator) 함수, <iostream>에 정의, 스트림 버퍼에 '\n'을 삽입하고 \
							  cout에게 현재 스트림 버퍼에 있는 데이터를 즉각 장치에 출력하도록 지시 

int main() {
	std::cout << "Hello\n"; // 화면에 Hello를 출력하고 다음 줄로 넘어감
	std::cout << "첫 번째 맛보기입니다.";
	return 0; // main() 함수가 종료하면 프로그램이 종료됨
}