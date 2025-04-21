/* 
	C++ 구조체 : 클래스와 동일한 구조와 기능을 가진다.
	구조체에서 디폴트 접근은 public이고 클래스에서는 디폴트 접근이 praivate 이다.
	구조체에서 객체 생성시 struct 키워드는 사용하지 않는다. (c++에서는)

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