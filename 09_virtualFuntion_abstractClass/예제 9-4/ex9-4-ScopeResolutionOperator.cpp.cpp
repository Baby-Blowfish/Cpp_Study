/*
	���� ���� ������(::)�� �̿��Ͽ� ���� ���ε����� ȣ��

	
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
		Shape::draw(); // �⺻ Ŭ������ draw() ȣ��
		cout << "Circle" << endl;
	}
};

int main() {
	Circle circle;
	Shape * pShape = &circle;

	pShape->draw();  // ���� ���ε� �߻�. draw()�� virtual�̹Ƿ�
	pShape->Shape::draw(); // ���� ���ε� �߻�. �������������ڷ� ����
}