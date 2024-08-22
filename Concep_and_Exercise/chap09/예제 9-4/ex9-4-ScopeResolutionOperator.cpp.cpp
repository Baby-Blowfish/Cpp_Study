/*
	범위 지정 연산자(::)를 이용하여 정적 바인딩으로 호출

	
	#include <iostream>
	using namespace std;

	int n = 11;
	int main()
	{
		int n = 3;
		cout << ::n <<endl;	// 11
		cout << n << endl;	// 3
	}

	#include <iotstream>
	using namespace std;

	void sendMessage(const char* msg){	cout << msg << endl; }

	class Window{
	public:
		void sendMessage(const char* msg) { cout << "window msg : "<<msg << endl;}
		void run(){
			::sendMessage("global hello");
			sendMessage("loval hello");
		}
	};

	int main()
	{
		Window window;
		window.run();
	}


*/

#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() { 
		cout << "--Shape--"; 
	}
};

class Circle : public Shape {
public:
	int x;
	virtual void draw() { 
		Shape::draw(); // 기본 클래스의 draw() 호출
		cout << "Circle" << endl;
	}
};

int main() {
	Circle circle;
	Shape * pShape = &circle;

	pShape->draw();  // 동적 바인딩 발생. draw()는 virtual이므로
	pShape->Shape::draw(); // 정적 바인딩 발생. 범위지정연산자로 인해
}