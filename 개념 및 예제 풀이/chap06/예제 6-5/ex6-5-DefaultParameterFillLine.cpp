/*
	포인터 변수의 디폴트 값
		void f( int* p=NULL);
		void g( int x[]=NULL);
		void h( const char *s=NULL);	
	함수 중복 간소화 : 변수의 기본값을 설정할때 함수 오버 로딩으로 작성하는데 이보단 디폴트 매개변수를
					 사용하면 간소화 시킬 수 있다.

*/

#include <iostream>
using namespace std;

void fillLine(int n=25, char c='*') { // n개의 c 문자를 한 라인에 출력
	for(int i=0; i<n; i++) 
		cout << c;
	cout << endl;
}

int main() {
	fillLine(); // 25개의 '*'를 한 라인에 출력
	fillLine(10, '%'); // 10개의 '%'를 한 라인에 출력
}