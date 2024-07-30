#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : protected Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};

int main() {
	Derived x;
	x.a = 5; 		// ¨ç error!
	x.setA(10); 	// ¨è error!
	x.showA();		// ¨é error!
	x.b = 10; 		// ¨ê error!
	x.setB(10); 	// ¨ë error!
	x.showB(); 		// ¨ì o
}