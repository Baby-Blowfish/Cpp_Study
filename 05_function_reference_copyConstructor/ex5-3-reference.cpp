/*	
	call by reference(참조)와 함수
	& : reference, 참조자, 가리킨다.
	reference variable (참조 변수) : 유재석에 붙여진 메뚜기 처럼 이미 선언된 변수에 대한 별명(alias)

	참조변수
		참조변수 선언 : &사용, 선언시 무조건 원본 변수로 초기화 해야됨., 따로 메모리 공간을  할당x
					   이름만 다르게 부르는 것
		int n = 2;
		int &refn = n;

		Circle circle;
		Circle &refc = circle;
		
		참조 변수 사용 : 보통 변수와 동일, 참조 변수의 변경 = 원본 변수의 변경, 포인터가 아님을 유의!
			refn = 3; // n = 3;, refn = 3;
			n = 5;  // n = 5;, refn = 5;
			refn++;	// n = 6;  refn = 6;

		유의 사항
			refc->setRadius(3);  error!
			int *p = &refn;	// p는 refn의 주소를 가짐 즉 n의 주소를 가짐
			*p = 20;		// n = 20, refn = 20;
			char &n[10];	// error! 참조의 배열을 만들 수 없다.
			int &r = refn;	// 참조변수 refn에 대한 참조 변수 r 선언 가능
			int &a = 10;	// error!

	참조에 의한 호출

	함수의 참조 리턴

*/

#include <iostream>
using namespace std;

int main() {
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int &refn = n; // 참조 변수 refn 선언. refn은 n에 대한 별명
	n = 4; 
	refn++; // refn=5, n=5
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i; // refn=1, n=1
	refn++; // refn=2, n=2
	cout << i << '\t' << n << '\t' << refn << endl;
	
	int *p = &refn; // p는 refn의 주소를 가짐. 실제 p는 n의 주소를 가짐
	*p = 20; // refn=20, n=20
	cout << i << '\t' << n << '\t' << refn << endl;
}