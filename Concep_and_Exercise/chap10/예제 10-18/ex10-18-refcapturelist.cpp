#include <iostream>  
using namespace std;

int main() {
	int sum = 0; // 지역 변수

	[&sum](int x, int y) { sum = x + y; } (2, 3); // 합 5를 지역변수 sum에 저장
	// 지역변수 sum에 대한 참조를 받은 참조 변수 &sum를 캡쳐 리스트로 받아 활용
	cout << "합은 " << sum;
}