/*
#include <stdio.h>

int main()

{
    char x, y;
    x = -128;
    y = -x;

    if(x == y) printf("1\n");
    if((x - y) == 0) printf("2\n");
    if((x+y)==2*x) printf("3\n");
    if(x != -y) printf("4\n");

    return 0;
}

*/


/*
	this 포인터 : 객체 자신에 대한 포인터로써 클래스의 멤버 함수 내에서만 사용된다. 전역변수도 아니고 지역변수도 아님
				  멤버 함수가 호출 될때 컴파일러에 의해 매개 변수로 추가되는 포인터이며 개체에 대한 주소를 담고 있다.
					객체마다 다르기 때문에 this 포인터도 다르다.
				  static 멤버함수에서는 사용 불가능

	1. 멤버 변수의 이름과 동일한 이름으로 매개 변수 이름을 짓고자 할때 사용
		class Circle {
			int radius;
		public :
			Circle(){
				this->radius = 1;
			}
			Circle(int radius){
				this->radius = radius;
			}
			void setRadius(int radius){
				this->radius = radius;
			}
		}

	2. 객체의 멤버 함수에 객체 자신의 주소를 리턴할 때때
	class Sample{
	public:
		sample* f(){
			...
			return this;
		}
	}

	this의 제약 조건
		1. 클래스의 멤버 함수에서만 사용가능
		2. 정적 멤버 함수에서는 사용할 수 없다.(정적 멤버함수는 객체가 생성되기 전에 호출될 수 있으므로 this 포인터가 없다.)

		ex)
		class Circle{
			int radius;
		public:
				Circle(int radius){
					this->radius = radius;
				}
				void setRadius(int radius){
					this->radius = radius;
				}
				int getRadius(){
					return this->radius;
		};

		Circle ob;
		ob.setRadius(5);




		// 컴파일러가 객체* this를 자동으로 추가한다.

		class Circle{
			int radius;
		public:
				Circle(Circle* this, int radius){
					this->radius = radius;
				}
				void setRadius(Circle* this, int radius){
					this->radius = radius;
				}
				int getRadius(Circle* this){
					return this->radius;
				}
		};

		Circle ob;
		ob.setRadius(&ob, 5);





	string 클래스를 이용한 문자열 사용

	c-스트링 : \0로 끝나는 문자배열을 문자열로 취급하는 방법
	string 클래스 : 문자열을 객체로 다루는 방법
		#include <string>
		using namespace std;
	1. 문자열의 크기에 맞추어 스스로 메모리 크기를 조절
		string str = "I love "; // str은 "I love "이 됨.
		str.append("C++");		// str은 "I love C++"이 됨.

	string 객체 생성 및 출력
		string str;	// 빈 문자열을 가진 스트링 객체
		string address("서울시 성북구 삼성동 389")	// 문자열 리터럴로 초기화
		string copyAddress(address); // address를 복사한 copyAddress 생성

		char text[] = {'l','o','v','e','','C','+','+','\0'};
		string str(text);
		string str2(text, 4); // text의 0~3까지의 문자로 초기화

		cout << address << endl;
		cout << str << endl;

		string *p = new string(C++); // 스트링 객체 동적 생성
		cout << *p; // c++ 출력
		p->append(" Great");	//c++ Great
		cout << *p;		// c++ Great 출력
		delete p;		// 스트링 객체 반환
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	// 스트링 생성
	string str; // 빈 문자열을 가진 스트링 객체 생성
	string address("서울시 성북구 삼선동 389");
	string copyAddress(address); // address의 문자열을 복사한 스트링 객체 생성

	char text[] = {'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0'}; // C-스트링
	string title(text); // "Love C++" 문자열을 가진 스트링 객체 생성

	// 스트링 출력
	cout << str << endl; // 빈 스트링. 아무 값도 출력되지 않음
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}