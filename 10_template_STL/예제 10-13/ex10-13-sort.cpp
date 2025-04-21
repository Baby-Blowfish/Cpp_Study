
/*
	STL 알고리즘은 전역 함수 로써 STL 컨테이너 클래스의 멤버 함수가 아니며 템플릿으로 작성되어있음
	STL 알고리짐 함수는  tierator와 함께 작동

		#include<algorithm>

		vector<int> v;
		...	
		sort(v.begin,v.begin()+3);		// v.begin()에서 v.begin+2까지 처음 3개 원소 오름차순정렬
		sort(v.begin+2,v.begin()+5);	// v.begin()+2에서 v.begin+4까지 처음 3개 원소 오름차순 정렬
		sort(v.begin,v.end());			// 벡터 전체 오름차순 정렬
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;  	// 정수 벡터 생성

	cout << "5개의 정수를 입력하세요>> ";
	for(int i=0; i<5; i++) {
		int n;
		cin >> n;
		v.push_back(n); // 키보드에서 읽은 정수를 벡터에 삽입
	}

	// v.begin()에서 v.end() 사이의 값을 오름차순으로 정렬
	// sort() 함수의 실행 결과 벡터 v의 원소 순서가 변경됨
	sort(v.begin(), v.end()); 

	vector<int>::iterator it;  // 벡터 내의 원소를 탐색하는 iterator 변수 선언
	
	for(it=v.begin(); it != v.end(); it++) 	// 벡터 v의 모든 원소 출력 
		cout << *it <<' ';
	cout << endl;
}