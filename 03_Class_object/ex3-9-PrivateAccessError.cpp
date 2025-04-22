/*
		access specifier (멤버 접근 지정자) :
				private(비공개) : 클래스 내의 멤버 함수만 접근 가능
						private:
				publice(공개) : 클래스 내외의 모든 함수에게 접근 허용
						public:
				protected(보호) : 클래스 내의 멤버와 상속받은 파생 클래스에만 접근 허용
						protected:

		1. 중복해서 사용 가능
		2. 접근지정자를 선언하지 않을 경우우 private
		3. 멤버변수는 private으로 지정하는 것이 바람직함
		4. 생성자와 소멸자는 외부에서 객체 생성시 사용하므로 왠만하면 public에서 선언함.





	초기의 함수는 적절한 단위 작업을 할 수 있어 프로그램의 building block의 역할을 해 왔다.
	함수호출 시 함수를 메모리에 할당 : 리턴 주소 저장, cpu 레지스터 값 저장, 함수의 매개변수 stack에 저장
	함수 실행, 함수의 리턴값을 임시 저장소에 저장, 저장한 레지스터 값 cpu에 복귀, 돌아갈 주소를 알아내어 리턴

	overhead : 잦은 함수 호출에 따른 오버헤드

		ex)
		in odd(int x){
			return (x%2);
		}
		int main()
		{
			int sum = 0;

			for(int i = 1; i <= 10000l i++)
			{
				if(odd(i))
					sum += i;
			}
			cout << sum;
		}

	inline function(인라인 함수)
	짧은 코드로 구성된 함수에 대해 함수 호출 오버헤드로 인한 프로그램 실행 속도 저하를 막기위해 도입된 기능					
	인라인 함수를 호출하는 곳에 인라인 함수의 코드를 그대로 삽입하여 함수 호출이 일어나지 않게 함
	인라인 함수는 컴파일러가 인라인으로 처리할지 여부를 결정함	
	getter/setter 함수는 inline으로 선언하는 것이 좋음 
	실행속도는 향상시키지만 전체 프로그램크기가 늘어남.
	컴파일러에 따라 재귀 함수, static 변수, 반복문, switch 문, goto 문 등을 가진 함수는 인라인 함수로 허용되지 않음

		ex)
		inline in odd(int x){
			return (x%2);
		}

		멤버함수는 모두 인라인으로 선언가능(생성자 포함)

		멤버함수를 클래스의 선언부에 구현한경우 자동 인라인 함수가 됨
		class Circle {
		public:
			int radius;

			Circle() {	// 자동 인라인 기본 생성자자
				radius = 1;
				cout << "반지름 " << radius << " 원 생성" << endl;
			}

			Circle(int r) {	// 자동 인라인 생성자자
				radius = r;
				cout << "반지름 " << radius << " 원 생성" << endl;
			}

			~Circle();

			double getArea();

		};

		Circle::~Circle() {
			cout << "반지름 " << radius << " 원 소멸" << endl;
		}

		inline double Circle::getArea() {	// 인라인 멤버함수수
			return 3.14*radius*radius;
		}

*/

#include <iostream>
using namespace std;

class PrivateAccessError
{
private:
	int a;
	void f();
	PrivateAccessError();

public:
	int b;
	PrivateAccessError(int x);
	void g();
};

PrivateAccessError::PrivateAccessError()
{
	a = 1; // (1)
	b = 1; // (2)
}

PrivateAccessError::PrivateAccessError(int x)
{
	a = x; // (3)
	b = x; // (4)
}

void PrivateAccessError::f()
{
	a = 5; // (5)
	b = 5; // (6)
}

void PrivateAccessError::g()
{
	a = 6; // (7)
	b = 6; // (8)
}

int main()
{
	PrivateAccessError objA;			// (9) error!
	PrivateAccessError objB(100); // (10)
	objB.a = 10;									// (11)	error!
	objB.b = 20;									// (12)
	objB.f();											// (13) error!
	objB.g();											// (14)
}