/*
		function pointer

#include <stdio.h>

int g_b;
int g_d = 0;

int main(void)
{
		int a;

		printf("%p\n",main);
		printf("%p\n",scanf);
		printf("%p\n",printf);
		printf("%p\n",&g_b);
		printf("%p\n",&g_d);
		printf("%p\n",&a);


		return 0;
}
0000000000401550
0000000000402AC0
0000000000402AC8
0000000000407030
0000000000407034
000000000061FE1C

*/

/*
	객체에 대한 포인터 변수 :
*/

#include <iostream>
using namespace std;

class Circle
{
	int radius;

public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle donut;
	Circle pizza(30);

	// 객체 이름으로 멤버 접근
	cout << donut.getArea() << endl;

	// 객체 포인터로 멤버 접근
	Circle *p;
	cout << sizeof(Circle) << endl; // Circle 객체의 크기 		4
	cout << sizeof(p) << endl;			// Circle 포인터의 크기		8		
	cout << sizeof(*p) << endl;			// Circle 객체의 크기		  4

	p = &donut;
	cout << p->getArea() << endl;		// donut의 getArea() 호출
	cout << (*p).getArea() << endl; // donut의 getArea() 호출

	p = &pizza;
	cout << p->getArea() << endl;		// pizza의 getArea() 호출
	cout << (*p).getArea() << endl; // pizza의 getArea() 호출
}