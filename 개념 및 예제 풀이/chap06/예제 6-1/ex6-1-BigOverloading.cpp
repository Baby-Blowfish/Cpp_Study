/*
	function overloding(함수 중복) : polymorphism(다형성)의 한사례, 전역함수와 멤버 함수 모두에 적용, 상속관계에 있는
									기본 클래스와 파생 클래스 사이에도 허용
	중복 함수 조건 : 중복된 함수들의 이름이 동일하여야 함.
					중복된 함수들은 매개 변수 타입이나 매개 변수의 개수가 달라야 한다,
					함수 중복에 리턴 타입은 고려되지 않는다.

		int sum(int a, int b){				// 가능
			return a+b;
		}

		int sum(int a, int b, int c){		// 가능
			return a+b+c;
		}

		double sum(double a, double b){		// 가능
			return a+b;
		}

		double sum(int a, int b){			// 불가능, 중복된 함수를 구분할때 리턴타입 고려 X
			return a+b;
		}
*/

#include <iostream>
using namespace std;

int big(int a, int b) { // a와 b 중 큰 수 리턴
	if(a>b) return a;
	else return b;
}
int big(int a[], int size) { // 배열 a[]에서 가장 큰 수 리턴
	int res = a[0];
	for(int i=1; i<size; i++)
		if(res < a[i]) res = a[i];
	return res;
}

int main() {
	int array[5] = {1, 9, -2, 8, 6};
	cout << big(2,3) << endl; // int big(int a, int b) 호출
	cout << big(array, 5) << endl; // int big(int a[], int size) 호출
}