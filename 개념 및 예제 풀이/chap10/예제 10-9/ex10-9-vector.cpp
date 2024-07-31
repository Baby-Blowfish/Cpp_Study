/*
	Standard Template Livrary, STL (표준 템플릿 라이브러리) : 템플릿으로 작성된 제네릭 클래스와 함수 라이브러리
		HP사의 Alexsander Stepanov와 Meng Lee가 1994년 개발
		ISO/ANSI C++ 표준 채택

	container(컨테이너) : 데이터를 저장하고 검색하기 위해 담아두는 자료 구조를 구현한 클래스
		
		vector	: 가변 크기의 배열을 일반화한 클래스, <vector>
		deque	: 앞뒤 모두 입력 가능한 큐 클래스, <deque>
		list	: 빠른 삽입/삭제 가능한 리스트 클래스,	<list>
		set 	: 정렬된 순서로 값을 저장하는 집합 클래스, 값은 유일	<set>
		map		: (key, value) 쌍을 저장하는 맵 클래스,	<map>
		stack	: 스택을 일반화한 클래스	<stack>
		queue	: 큐를 일반화한 클래스		<queue>

		컨테이너의 분류 : 컨테이너에 저장되는 우너소를 다루는 방식에 따라 3가지로 분류
			1. Sequence Container(시퀸스 컨테이너) : vector,dequeue,list 연속적인 메모리 공간에 순서대로
				값을 저장하고 읽는 컨테이너. 인덱스를 사용하여 컨테이너 내의 특정 위치에 있는 값을 읽거나 변경
			2. Container Adaptor(컨테이너 어뎁터) : stack,queue 다른 컨테이너를 상속받아 기능 중 일부만 
				공개하여 기능을 제한하거나 변형한 컨테이너
			3. Associative Container(연관 컨테이너) : set,map '키'로 '값'을 저장하고 '키'로 검색하여
				'값'을 알아내는 컨테이너

	iterator(반복자) : 	컨테이너 원소들을 하나씩 순회 접근하기 위해 만들어진 컨테이너 원소에 대한 포인터
		iterator		: 다음 원소로 전진	read/write
		const_iterator	: 다음 원소로 전진	read
		reverse_iterator: 지난 원소로 후진	read/write
		const_revers_iterator : 지난 원소로 후진	read

	알고리즘 함수- 템플릿 함수 : 컨테이너 원소에 대한 복사, 검색, 삭제 , 정렬을 등의 기능을 구현한 템플릿함수
							컨에이너 클래스의 멤버 함수가 아님.
		copy 	merge		random		rotate
		equal	min			remove		search
		find	move		replace		sort
		max		partition	reverse		swap

	STL은 std 이름 공간에 작성되었음
		using namespace std;

	vector 컨테이너 활용
		가변 길이 배열을 구현한 제네릭 클래스
		내부에 배열을 가지고 원소를 저장, 삭제, 검색하는 멤버들을 제공
		스스로 내부 크기를 조절하므로 vector크기에 대해 고민할 필요 없음
		원소에 대한 인덱스는 0부터 시작
	

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v; // 정수만 삽입 가능한 벡터 생성

	v.push_back(1); // 벡터에 정수 1 삽입 , 삽입되는 값을 벡터의 맨 마지막에 삽입
	v.push_back(2); // 벡터에 정수 2 삽입
	v.push_back(3); // 벡터에 정수 3 삽입

	for(int i=0; i<v.size(); i++) // 벡터의 모든 원소 출력, size()함수로 크기 알 수 있음
		cout << v[i] << " "; // v[i]는 벡터의 i 번째 원소
	cout << endl;

	v[0] = 10; // 벡터의 첫 번째 원소를 10으로 변경, 벡터를 배열처럼 사용  10, 2, 3
	int n = v[2]; // n에 3이 저장 10, 2, 3
	v.at(2) = 5; // 벡터의 3 번째 원소를 5로 변경, at() 멤버 함수 사용 10, 2, 5
	
	for(int i=0; i<v.size(); i++) // 벡터의 모든 원소 출력
		cout << v[i] << " "; // v[i]는 벡터의 i 번째 원소
	cout << endl;

	vector<int>::iterator it;	// it는 정수 벡터의 원소를 가리키는 포인터
	it = v.begin();				// it는 벡터 v의 첫 번째 원소를 가리킴.
	it = v.erase(it);			// 벡터 v에서 첫번째 원소를 삭제함. 삭제 후 erase()의 리턴 값으로 it 재설정
	// erase(it)는 it가 가리키는 원소를 삭제한 후, 벡터의 원소들을 다시 앞으로 한 자리씩 이동시킨다.
	// 그리고 삭제된 다음 원소를 가리키는 포언터를 리턴한다. 
	// 그리므로 erase(it) 후에는 반드시 it가 리턴 값으로 치환되어야 한다.

	for(int i=0; i<v.size(); i++) // 벡터의 모든 원소 출력
		cout << v.at(i) << " "; // v[i]는 벡터의 i 번째 원소
	cout << endl;
}
