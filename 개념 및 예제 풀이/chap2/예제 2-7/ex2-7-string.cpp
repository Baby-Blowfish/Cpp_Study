#include <iostream>
#include <string> 
using namespace std;
/*	string class : 문자열 크기 제약이 없어 문자열을 다루기 쉬움
	문자열 복사, 비교, 수정 등 다양한 문자열 연산을 위함 멤버 함수와 연산자를 제공
*/

int main() {
	string song("Falling in love with you"); // 문자열 song
	string elvis("Elvis Presley"); // 문자열 elvis
	string singer; // 문자열 singer

	cout << song + "를 부른 가수는"; // + 로 문자열 연결
	cout << "(힌트 : 첫글자는 " << elvis[0] << ")?";  // [] 연산자 사용

	getline(cin, singer); // 문자열 입력, string 타입의 c++문자열을 입력 받기 위해 사용
	if(singer == elvis)  // 문자열 비교
			cout << "맞았습니다.";
	else
			cout << "틀렸습니다. "+ elvis + "입니다." << endl; // +로 문자열 연결
}

/*	#include <iostream > 와 전처리기
	전처리기는 #include문에 지정된 <헤더파일>의 텍스트를 #include문이 있던 그 자리에 삽입한다. 이를 '헤더파일의 확장'이라고함
	컴파일러가 설치된 폴더의 include 파일에 존재
	2003년 부터 혀용은 하지만 엥간하면 헤더파일의 확장자를 붙이지 않는다.
	<헤더파일> : 컴파일러가 설치된 폴더에서 찾으라는 의미,  "헤더파일" : 프로젝트 폴더나 옵션으로 지정한 include 폴더에서 찾으라는 의미

	strcpy()가 호출되면 c 라이브러리 코드를 호출하는 것이지 헤더파일을 호출하는 것이 아님
	헤더파일은 함수의 선언(원형)만 들어있을 뿐 컴파일할때 호출하는 함수가 정확한지 판단하는데 사용한다.

*/