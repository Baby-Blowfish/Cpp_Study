/*
	stream(스트림) : 연속적인 데이터의 흐름을 혹은 데이터를 전송하는 소프트웨어 모듈
					프로그램과 장치를 연결하며 바이트 단위로 입출력

	input stream	: 키보드, 네트워크, 파일 등 입력장치로부터 입력된 데이터를 순서대로 프로그램에 전달하는 객체
	output stream	: 
*/
#include <iostream>
using namespace std;

int main() {
	// "Hi!"를 출력하고 다음 줄로 넘어간다.
	cout.put('H');
	cout.put('i');
	cout.put(33);
	cout.put('\n');
	
	// "C++ "을 출력한다.
	cout.put('C').put('+').put('+').put(' ');

	char str[]="I love programming";
	cout.write(str, 6); // str 배열의 6 개의 문자 "I love"를 스트림에 출력
}