#include <iostream>
using namespace std;
//  cin >> ch; 일 때 "마 이 클" 이란 문자열을 입력하면  "이 클"은 키 입력을 기다리는 다음 >> 연산자에서 처리된다.
/*	cin.getline(char buf[], int size, char delimitChar)		: cin 객체의 멤버함수, 공백이 포함된 문자열을 입력받을 수 있음
	buf : 키보드로부터 읽은 문자열을 저장할 배열
	size :  buf[]의 크기
	delimitChar : 문자열 입력 끝을 지정하는 구분 문자, defalt value = \n으로 생략가능
	
	size-1개의 문자를 입력받거나 delimitChar에 지정된 구분 문자가 입력될 때까지 공백 문자를 포함하여 문자열을 입력 받을 수 있음 \
	마지막에는 null문자가 들어가야 하므로
*/

// 공백문자 white space character : 공백문자					int isspace( char c) : c가 공백 문자이면 true 리턴

int main() {
	cout << "주소를 입력하세요>>";

	char address[100]; 
	cin.getline(address, 100, '\n'); // 키보드로부터 주소 읽기

	cout << "주소는 " << address << "입니다\n"; // 주소 출력
}