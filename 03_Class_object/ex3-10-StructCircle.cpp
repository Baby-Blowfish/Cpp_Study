/* 
	C++ 구조체 : 클래스와 동일한 구조와 기능을 가진다.(멤버변수,멤버함수,생성자와소멸자,상속,접근활용 등등등)
	유일한 차이점 : 구조체에서 디폴트 접근은 public이고 클래스에서는 디폴트 접근이 praivate 이다.
	구조체에서 객체 생성시 struct 키워드는 사용하지 않는다. (c++에서는)
		ex)
		struct structName
		{	
			int a;
			int b;
		};

		struct StructName stobj;
		struct structName stobj; // c++에서는 struct 키워드 사용하지 않음, 컴파일 에러러

*/

#include <iostream>
using namespace std;

// C++ 구조체 선언
struct StructCircle {
private:
	int radius;
public:
	StructCircle(int r) { radius = r; } // 구조체의 생성자
	double getArea(); 
};

double StructCircle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	StructCircle waffle(3); 
	cout << "면적은 " << waffle.getArea();
}