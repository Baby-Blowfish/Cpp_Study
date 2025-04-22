/*
  C++컴파일러는 객체 인스턴스화시에 생성자를 자동으로 호출한다.
  만약 생성자가 없다면 컴파일러는 기본 생성자를 자동으로 만들어준다.
  생성자가 하나라도 선언이 있으면 기본 생성자는 만들어지지 않는다.

    default constructor(기본생성자) : 클래스에 선언된 어떤 생성자도 없을때 컴파일러가 자동으로 생성해주는 생성자
        매개 변수가 없는 생성자를 만듬
        ex1) 생성자가 하나라도 선언이 없을 경우에만 컴파일러가 기본생성자를 생성함
            class Circle{
            public:
                int radius;
                double getArea();
                                    << Circle(); 컴파일러가 자동 삽입
            };
            
                                    << Circle::Circle(){}; 컴파일러가 자동 삽입
            int main()
            {
                Circle donut;
            }
    
        ex2) 생성자가 하나가 있는 경우 기본 생성자는 만들어 지지 않는다. 객채선언시 기본생성자를 호출하면 컴파일 오류!
            class Circle{
            public:
                int radius;
                double getArea();
                Circle(int a);
            };
            
            Circle::Circle(int a){};

            int main()
            {
                Circle pizza(20);    posible
                Circle donut;        error!
            }

*/

#include <iostream> 
using namespace std; 

class Rectangle { 
public:
	int width, height; 
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle() { // Rectangle::Rectangle() : Rectangle(1) {}로 해도 됨
	width = height = 1;
}

Rectangle::Rectangle(int w, int h) {
	width = w; height = h;
}

Rectangle::Rectangle(int length) { 
	width = height = length;
}

bool Rectangle::isSquare() { // 정사각형이면 true를 리턴하는 멤버 함수
	if(width == height) return true;
	else return false;
}

int main() {
	Rectangle rect1; 
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if(rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if(rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}