/*
	static : 변수와 함수의 life cycle(생명주기)와 scope(범위)를 storage class(지정 방식)중 하나이다.
			life cycle : 프로그램이 시작할 때 생성되고 프로그램이 종료할 때 소멸
			scope : 변수나 함수가 선언된 범위 내에서 사용, global(전역)과 local(지역)으로 구분

		클래스의 멤버 변수나 멤버 함수를 포함하여 모든 변수와 함수는 static 지정자로 선언 가능

		non - static 멤버 : instance 멤버, 멤버는 객체마다 별도 생성, 객체와 생명을 같이함.
							동일한 클래스의 다른 객체와 공유하지 않고 따로 공간에 할당.
		static 멤버 : class 멤버, 객체 내부가 아닌 별도의 공간에 클래스 당 하나 생성, 프로그램과 생명을 같이함.
					 동일한 클래스의 모든 객체들에 의해 공유됨.

		staic 멤버 선언 : 동일한 클래스의 객체들이 공유할수 있음 하나만 할당됨.
			변수의 공간을 할당받는 선언문이 추가적으로 필요. 클래스 바깥의 전역 공간에 선언해야함.
			없을 경우 링크 오류 발생
			class Sample{
				static int shareMoney;
			};
			int Person::shareMoney = 10; 

		static 멤버의 사용 : 객체.static멤버, 객체포인터 ->static멤버

		#include <iostream>
		using namespace std;

		class Person {
		public:
			int money;
			void addMoney(int money){
				this->money += money;
			}
			
			static int shareMoney;
			static void addShared(int n){
				shareMoney += n;
			}
		};

		int Person::shareMoney = 10; 		// 다시 한번 선언해야한다.!!! 앞의 자료형 붙이는것 주의

		int main()
		{
			Person::addShared(50);
			cout << Person::shareMoney<<endl;

			Person han;
			han.money = 100;
			han.shareMoney = 200;
			Person::shareMoney = 300;
			Person::addShared(100);

			cout << han.money << ' ' << Person::shareMoney<<endl;

			return 0;
		}


		static 멤버의 경우 객체가 만들어 지지 않아도 이미 프로그램 시작전 할당되어 있기때문에
		클래스 이름으로 접근 가능하다.!!
			클래스이름::static멤버변수,	클래스이름::static멤버함수
			객체이름.static멤버변수, 	객체이름.static멤버함수

		반면 non-static 멤버는 객체가 할당이 되어 접근이 가능하다.
			객체이름.멤버변수,    객체이름.멤버함수


*/

#include <iostream>
using namespace std;

class Math {
public:
	static int abs(int a) { return a>0?a:-a; }
	static int max(int a, int b) { return (a>b)?a:b; }
	static int min(int a, int b) { return (a>b)?b:a; }
};

int main() {
	cout << Math::abs(-5) << endl;
	cout << Math::max(10, 8) << endl;
	cout << Math::min(-3, -8) << endl;
}