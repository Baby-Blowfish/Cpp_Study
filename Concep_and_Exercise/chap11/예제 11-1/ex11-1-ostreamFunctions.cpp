/*
	stream(스트림) : 연속적인 데이터의 흐름을 혹은 데이터를 전송하는 소프트웨어 모듈
					프로그램과 장치를 연결하며 바이트 단위로 입출력

	input stream	: 키보드, 네트워크, 파일 등 입력장치로부터 입력된 데이터를 순서대로 프로그램에 전달하는 객체
	output stream	: 프로그램에서 출력한 데이터를 프린터, 하드디스크,스크린,네트워크, 파일 등으로 전달하는 객체

	표준 입력 스트림 객체 : cin
	표준 출력 스트림 객체 : cout
	입력 스트림 버퍼
	출력 스트림 버퍼

	ostream  class 멤버 함수
	
	ostream& put(char ch) : ch의 문자를 스트림에 출력
	ostream& write(char* str, int n) : str배열에 있는 n개의 문자를 스트림에 출력
	ostream& flush()	: 현재 스트림 버퍼에 있는 내용 강제 출력


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