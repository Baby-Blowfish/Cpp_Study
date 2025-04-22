/*
	다차원 객체 배열 : Circle circles[2][3]; (기본생성자자)

	초기화 (생성자)
	Circle circles[2][3] = { {Circle(1), Circle(2), Circle(3)},
	                            {Circle(4), Circle(5), Circle(6)} };

*/

#include <iostream>
using namespace std;

class Circle {
	int radius; 
public:
	Circle() {	radius = 1; }
	Circle(int r)  { radius = r; }
	void setRadius(int r)  { radius = r; } 
	double getArea(); 
}; 

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle circles[2][3];

	circles[0][0].setRadius(1);
	circles[0][1].setRadius(2);
	circles[0][2].setRadius(3);
	circles[1][0].setRadius(4);
	circles[1][1].setRadius(5);
	circles[1][2].setRadius(6);

	cout << sizeof(circles) << endl; // 배열의 크기						24 	Circle [2][3]
	cout << sizeof(circles[0]) << endl; // 배열의 크기				12	Circle [3]
	cout << sizeof(circles[0][0]) << endl; // 배열의 크기			4		Circle

	cout << circles << endl; // 배열의 주소										Circle (*)[3]		100
	cout << circles + 1 << endl; // 배열의 주소								Circle (*)[3]		112
	cout << circles[0] << endl; // 배열의 주소								Circle *				100
	cout << circles[0] + 1 << endl; // 배열의 주소						Circle *				104
	cout << &circles[0] << endl; // 배열의 주소								Circle (*)[3]		100
	cout << &circles[1] << endl; // 배열의 주소								Circle (*)[3]		112	
	cout << &circles[0] + 1 << endl; // 배열의 주소						Circle (*)[3]		112
	cout << &circles[0][0] << endl; // 배열의 주소						Circle (*)			100
	cout << &circles[0][1] << endl; // 배열의 주소						Circle (*)			104
	cout << &circles[0][0] + 1 << endl; // 배열의 주소				Circle (*)			104
	cout << &circles[1][0] << endl; // 배열의 주소						Circle (*)			112
	cout << &circles << endl; // 배열의 주소									Circle (*)[2][3]	100
	cout << &circles + 1 << endl; // 배열의 주소							Circle (*)[2][3]	124



	for(int i=0; i<2; i++)  	// 배열의 각 원소 객체의 멤버 접근
		for(int j=0; j<3; j++) {
			cout << "Circle [" << i << "," << j 	<< "]의 면적은 ";
			cout << circles[i][j].getArea() <<endl;
		}
}