#include <iostream>

double area(int r); // 함수의 원형 선언

double area(int r) { // 함수 구현
	return 3.14*r*r; // 반지름 r의 원면적 리턴
}

int main() {
	int n=3;
	char c='#';
	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
	std::cout << "n + 5 = " << n + 5 << '\n';
	std::cout << "Area is :  " << area(n); // 함수 area()의 리턴 값 출력
}
// #5.5-3hello1
// n + 5 = 8
// Area is :  28.26