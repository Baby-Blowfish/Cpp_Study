#include <iostream>
using namespace std; 

int main() {
	cout << "Enter width >> ";

	int width;
	cin >> width; // 키보드로부터 너비를 읽어 width 변수에 저장

	cout << "Enter height >> ";

	int height;		// 실행문 중간에 변수 선언 가능
	cin >> height; // 키보드로부터 높이를 읽어 height 변수에 저장

	int area = width*height; // 사각형의 면적 계산
	cout << "Area is : " << area <<endl; // 면적을 출력하고 다음 줄로 넘어감
}

// Enter width >> 3
// Enter height >> 5
// Area is : 15