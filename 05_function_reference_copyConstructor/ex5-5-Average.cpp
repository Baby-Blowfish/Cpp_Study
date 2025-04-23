/*
	call by reference. 참조에 의한 호출
		함수의 매개 변수를 참조 타입으로 선언하여, 매개 변수가 함수를 호출 하는 쪽의 실인자를 참조(reference)
		하여 실인자와 공간을 공유하도록 하는 인자 전달 방식
		참조 매개 변수 a,b 는 이름만 존재하며 swap()의 stack에 공간을 할당 받지는 않는다.

	reference parameter (참조 매개변수)
		ex)
		#include<iostream>
		using namespace std;

		void swap(int &a, int &b) 
		{	
			int tmp;
			tmp = a;
			a = b;
			b = tmp;
		}
		
		int main()
		{
			int m = 2, n = 3;
			swap(m,n);
			cout <<"m = "<< m << ", n = " << n;
		}


*/

// 함수의 리턴값은 그 함수의 작동이 맞는지 확인하는데 쓰는게 더 좋다.
#include <iostream>
using namespace std;

bool average(int a[], int size, int& avg) {
	if(size <= 0)
		return false;
	int sum = 0;
	for(int i=0; i<size; i++) 
		sum += a[i];
	avg = sum/size;
	return true;
}

int main() {
	int x[] = {0,1,2,3,4,5};
	int avg;
	if(average(x, 6, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl;

	if(average(x, -2, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류 " << endl;
}