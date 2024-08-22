/*
	istream& get(char* s, int n) : 입력 스트림으로부터 n-1개의 문자를 읽어 배열 s에 저장하고 마지막에
									'\0' 문자 삽입, 입력 도중 '\n'을 만나면 '\0'을 삽입하고 리턴
	
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char cmd[80];
	cout << "cin.get(char*, int)로 문자열을 읽습니다." << endl;
	while(true) {
		cout << "종료하려면 exit을 입력하세요 >> ";
		cin.get(cmd, 80); // 79개까지의 문자 읽음
		if(strcmp(cmd, "exit") == 0) {
			cout << "프로그램을 종료합니다...."; 
			return 0;
		}
		else // else 블록을 제거하면 무한루프에 빠짐
			cin.ignore(1); // 버퍼에 남아 있는 <Enter> 키 ('\n') 제거
	}
}