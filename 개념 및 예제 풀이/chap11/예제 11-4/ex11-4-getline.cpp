/*
	istream& get(char* s, int n, char delim = '\n')
		입력스트림으로부터 최대 n-1개의 문자를 읽어 배열 s에 젖아하고 마지막에 '\0\문자 삽입,
		입력 도중 delim에 지정된 구분 문자를 만나면 지금까지 읽은 문자를 배열 s에 저장하고 리턴
	istream& getline(char* s, int n, c har delim ='\n')
		get()과 동일, 하지만 delim에 지정된 구분 문자를 스트림에서 제거

	istream& ignore(int n = 1, int delim = EOF)
		입력 스트림에서 n개 문자 제거, 도중에 delim문자를 만나면 delim 문자를 제거하고 리턴
	
	int gcount()
		최근에 입력 스트림에서 읽은 바이트 수(문자의 개수) 리턴, <enter> 키도 개수에 포함

		char line[80];
		getline(line, 80);
		gcount();					// '\n'을 읽어오지 않고 버렸으므로 

		getline(line, 80);
		gcount();
*/

#include <iostream>
using namespace std;

int main() {
	char line[80];
	cout << "cin.getline() 함수로 라인을 읽습니다." << endl;
	cout << "exit을 입력하면 루프가 끝납니다." << endl;

	int no = 1; // 라인 번호
	while(true) {
		cout << "라인 " << no << " >> ";
		cin.getline(line, 80); // 79개까지의 문자 읽음
		if(strcmp(line, "exit") == 0)
			break;
		cout << "echo --> ";;		
		cout << line << endl; // 읽은 라인을 화면에 출력
		no++; // 라인 번호 증가
	}
}