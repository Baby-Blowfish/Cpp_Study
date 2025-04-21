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
	��ü�� ���� ������ ���� : 
*/


#include <iostream>
using namespace std;

class Circle {
	int radius; 
public:
	Circle() {	radius = 1; }
	Circle(int r)  { radius = r; }
	double getArea(); 
}; 

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

	// ��ü �̸����� ��� ����
	cout << donut.getArea() << endl;

	// ��ü �����ͷ� ��� ����
	Circle *p;
	p = &donut;
	cout << p->getArea() << endl; // donut�� getArea() ȣ��
	cout << (*p).getArea() <<endl; // donut�� getArea() ȣ��

	p = &pizza; 
	cout << p->getArea() << endl; // pizza�� getArea() ȣ��
	cout << (*p).getArea() << endl; // pizza�� getArea() ȣ��
}