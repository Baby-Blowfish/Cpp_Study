/*
	static : ������ �Լ��� life cycle(�����ֱ�)�� scope(����)�� storage class(���� ���)�� �ϳ��̴�.
			life cycle : ���α׷��� ������ �� �����ǰ� ���α׷��� ������ �� �Ҹ�
			scope : ������ �Լ��� ����� ���� ������ ���, global(����)�� local(����)���� ����

		Ŭ������ ��� ������ ��� �Լ��� �����Ͽ� ��� ������ �Լ��� static �����ڷ� ���� ����

		non - static ��� : instance ���, ����� ��ü���� ���� ����, ��ü�� ������ ������.
							������ Ŭ������ �ٸ� ��ü�� �������� �ʰ� ���� ������ �Ҵ�.
		static ��� : class ���, ��ü ���ΰ� �ƴ� ������ ������ Ŭ���� �� �ϳ� ����, ���α׷��� ������ ������.
					 ������ Ŭ������ ��� ��ü�鿡 ���� ������.

		staic ��� ���� : ������ Ŭ������ ��ü���� �����Ҽ� ���� �ϳ��� �Ҵ��.
			������ ������ �Ҵ�޴� ������ �߰������� �ʿ�. Ŭ���� �ٱ��� ���� ������ �����ؾ���.
			���� ��� ��ũ ���� �߻�
			class Sample{
				static int shareMoney;
			};
			int Person::shareMoney = 10; 

		static ����� ��� : ��ü.static���, ��ü������ ->static���

		#include <iostream>
		using namespace std;

		class Person {
		public:
			int money;
			void addMoney(int money){
				this->money += money;
			}
			
			static int shareMoney;
			static void addShared(int n){
				shareMoney += n;
			}
		};

		int Person::shareMoney = 10; 		// �ٽ� �ѹ� �����ؾ��Ѵ�.!!! ���� �ڷ��� ���̴°� ����

		int main()
		{
			Person::addShared(50);
			cout << Person::shareMoney<<endl;

			Person han;
			han.money = 100;
			han.shareMoney = 200;
			Person::shareMoney = 300;
			Person::addShared(100);

			cout << han.money << ' ' << Person::shareMoney<<endl;

			return 0;
		}


		static ����� ��� ��ü�� ����� ���� �ʾƵ� �̹� ���α׷� ������ �Ҵ�Ǿ� �ֱ⶧����
		Ŭ���� �̸����� ���� �����ϴ�.!!
			Ŭ�����̸�::static�������,	Ŭ�����̸�::static����Լ�
			��ü�̸�.static�������, 	��ü�̸�.static����Լ�

		�ݸ� non-static ����� ��ü�� �Ҵ��� �Ǿ� ������ �����ϴ�.
			��ü�̸�.�������,    ��ü�̸�.����Լ�


*/

#include <iostream>
using namespace std;

class Math {
public:
	static int abs(int a) { return a>0?a:-a; }
	static int max(int a, int b) { return (a>b)?a:b; }
	static int min(int a, int b) { return (a>b)?b:a; }
};

int main() {
	cout << Math::abs(-5) << endl;
	cout << Math::max(10, 8) << endl;
	cout << Math::min(-3, -8) << endl;
}