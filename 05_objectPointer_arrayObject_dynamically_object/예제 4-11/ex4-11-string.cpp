/*
#include <stdio.h>

int main()

{
    char x, y;
    x = -128;
    y = -x;

    if(x == y) printf("1\n");
    if((x - y) == 0) printf("2\n");
    if((x+y)==2*x) printf("3\n");
    if(x != -y) printf("4\n");

    return 0;
}

*/


/*
	this ������ : ��ü �ڽſ� ���� �����ͷν� Ŭ������ ��� �Լ� �������� ���ȴ�. ���������� �ƴϰ� ���������� �ƴ�
				  ��� �Լ��� ȣ�� �ɶ� �����Ϸ��� ���� �Ű� ������ �߰��Ǵ� �������̸� ��ü�� ���� �ּҸ� ��� �ִ�.
				  static ����Լ������� ��� �Ұ���

	1. ��� ������ �̸��� ������ �̸����� �Ű� ���� �̸��� ������ �Ҷ� ���
		class Circle {
			int radius;
		public :
			Circle(){
				this->radius = 1;
			}
			Circle(int radius){
				this->radius = radius;
			}
			void setRadius(int radius){
				this->radius = radius;
			}
		}

	2. ��ü�� ��� �Լ��� ��ü �ڽ��� �ּҸ� ������ ��
	class Sample{
	public:
		sample* f(){
			...
			return this;
		}
	}

	this�� ���� ����
		1. Ŭ������ ��� �Լ������� ��밡��
		2. ���� ��� �Լ������� ����� �� ����.




	string Ŭ������ �̿��� ���ڿ� ���

	c-��Ʈ�� : \0�� ������ ���ڹ迭�� ���ڿ��� ����ϴ� ���
	string Ŭ���� : ���ڿ��� ��ü�� �ٷ�� ���
		#include <string>
		using namespace std;
	1. ���ڿ��� ũ�⿡ ���߾� ������ �޸� ũ�⸦ ����
		string str = "I love "; // str�� "I love "�� ��.
		str.append("C++");		// str�� "I love C++"�� ��.

	string ��ü ���� �� ���
		string str;	// �� ���ڿ��� ���� ��Ʈ�� ��ü
		string address("����� ���ϱ� �Ｚ�� 389")	// ���ڿ� ���ͷ��� �ʱ�ȭ
		string copyAddress(address); // address�� ������ copyAddress ����

		char text[] = {'l','o','v','e','','C','+','+','\0',};
		string str(text);

		cout << address << endl;
		cout << str << endl;

		string *p = new string(C++); // ��Ʈ�� ��ü ���� ����
		cout << *p; // c++ ���
		p->append(" Great");	//c++ Great
		cout << *p;		// c++ Great ���
		delete p;		// ��Ʈ�� ��ü ��ȯ
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	// ��Ʈ�� ����
	string str; // �� ���ڿ��� ���� ��Ʈ�� ��ü ����
	string address("����� ���ϱ� �Ｑ�� 389");
	string copyAddress(address); // address�� ���ڿ��� ������ ��Ʈ�� ��ü ����

	char text[] = {'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0'}; // C-��Ʈ��
	string title(text); // "Love C++" ���ڿ��� ���� ��Ʈ�� ��ü ����

	// ��Ʈ�� ���
	cout << str << endl; // �� ��Ʈ��. �ƹ� ���� ��µ��� ����
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}