/*
	참조 리턴
	char c = 'a';
	
	char& r(){
		return c;  // c의 참조 리턴
	}

	r() = 'c';    //  가능

	char* p()
	{
		return &c;
	}

	char *s = p();  // 가능
	*s = 'b';		// 가능 
	p() = 'b';		// (포인터 = 값) 오류!!
					// l-value (공간) = r-value(값)
*/

#include <iostream>
using namespace std;

// 배열 s의 index 원소 공간에 대한 참조 리턴하는 함수
char& find(char s[], int index) {
	return s[index]; // 참조 리턴
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S'; // name[0]='S'로 변경
	cout << name << endl;

	char& ref = find(name, 2);
	ref = 't'; // name = "Site"
	cout << name << endl;
}