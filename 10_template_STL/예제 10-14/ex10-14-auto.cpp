/*
	auto : c++11ǥ�غ��� �ǹ̰� �����Ǿ�, ���� �������κ��� ������ Ÿ���� �߷��Ͽ� �����ϵ��� ����
		������ ������ ���� ������ �����ϰ� ���ָ�, Ÿ���� ������ ��Ÿ�� ���ŷο��� ���� �� �ְ���.

		auto i = 3.14; 	// double i
		auto n = 3; 	// int	n
		auto *p = &n	// int* p

		int n = 10;
		int & ref = n;
		auto ref2 = ref;	// int& ref2

		int squre(int x){return x*x;}
		auto n = squar(3);	// int n;

		vector<int> v = {1,2,3,4,5};
		vector<int>::iterator it;
		for(it=v.begin(); it!=v.end(); it++)
		{	... }

		vector<int> v = {1,2,3,4,5};
		for(auto it=v.begin(); it!=v.end(); it++)		// it�� vector<int>::iterator�� �߷е�
		{	... }
		
*/


#include <iostream>
#include <vector>
using namespace std;

int square(int x) { return x*x; }

int main() {
	// �⺻ Ÿ�� ���� auto Ȱ��
	auto c = 'a'; // c�� char Ÿ������ ����
	auto pi = 3.14; // pi�� double Ÿ������ ����
	auto ten = 10; // ten�� int Ÿ������ ����
	auto *p = &ten; // ���� p�� int* Ÿ������ ����
	cout << c << " " << pi << " " << ten << " " << *p << endl;

	// �Լ��� ���� Ÿ������ �߷�
	auto ret = square(3); // square() �Լ��� ���� Ÿ���� int �̹Ƿ� ret�� int�� ����
	cout << *p << " " << ret << endl;

	vector<int> v = { 1,2,3,4,5 }; //���� v�� 5���� ����, 1,2,3,4,5 ����
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << " "; // 1 2 3 4 5 ���
	cout << endl;

	// ���ø��� auto�� ����Ͽ� ������ ������ ����ȭ
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << " "; // 1 2 3 4 5 ���
}