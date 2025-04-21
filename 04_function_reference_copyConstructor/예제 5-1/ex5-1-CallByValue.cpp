/*
	�Լ��� ���� ���� ��� ����
	argument passing 
		call by value
		call by address
	
	ex) 
		#include <iostream>
		using namespace std;

		void swap(int a, int b)
		{
			int temp = a;
			a = b;
			b = a;
			return ;
		}
		void swap( int* a, int* b)
		{
			int p= *a;
			*a = *b;
			*b = p;
			return;
		}

		int main()
		{
			int m = 2, n =3;
			swap(m,n);
			cout<<m<<" "<<n<<endl;
			swap(&m,&n);
			cout<<m<<" "<<n;
			return 0;
		}



	�Լ� ȣ��� ��ü ����

	1. call by value ��ü ����
		���� �� �� ȣ���� �Լ� �ȿ��� �Ű� ���� ��ü�� � ��ȭ�� �Ͼ�� �����ڸ� �Ѽս�Ű�� �ʴ� ����
		������ ��ü�� ũ�Ⱑ ũ�� ��ü�� �����ϴ� �ð��� Ŀ���� ����

		��ü�� �Ű� ������ ������ �Լ��� ��� �Ű� ������ ��ü�� �����ڸ� ������� �ʰ� �Ҹ��ڸ� �����
		���� �����ڰ� ����ȴٸ� ���޹��� ������ ���¸� �Ҿ������ �ȴ�. ���� �Ű������� �����ڸ� �������� �ʵ�����.
		�Ҹ��ڴ� �����. �� �Ҹ��ڰ� ����Ǵ� ���Ī ����

		�̸� �ذ��ϱ� ���� copy constructor(���� ������)��
*/

/*
	call by address ��ü ����
		��ü�� �����ϴ� �ð� �Ҹ� ����. �Ű� ������ �ܼ� ������ �̹Ƿ� ������ �Ҹ��� ���Ī ������ ����
		������ü�� �Ѽ��� ���ɼ��� �ִ� ������ ����.
	
	#include <iostream>

	using namespace std;

	class Circle{
		private:
			int radius;
		public:
			Circle();
			Circle(int r);
			~Circle();
			double getArea(){return 3.14*radius*radius;}
			int getRadius(){return radius;}
			void setRadius(int radius){ this->radius = radius;}
	};

	Circle::Circle(){
		radius = 1;
	}
	Circle::Circle(int radius)
	{
		this->radius = radius;
		cout << "������ ���� radius = "<<radius<<endl;
	}

	Circle::~Circle()
	{
		cout<<"�Ҹ��� ���� radius = "<<radius<<endl;
	}

	void increase(Circle *c)
	{
		int r = c->getRadius();
		c->setRadius(r+1);
	}

	int main()
	{
		Circle waffle(30);
		
		increase(&waffle);

		cout<<waffle.getRadius()<<endl;
		return 0;
	}

	// ������ ���� radius = 30
	// 31
	// �Ҹ��� ���� radius = 31
*/

#include <iostream>
using namespace std;

class Circle {
private:
	int radius; 
public:
	Circle(); 
	Circle(int r);
	~Circle();
	double getArea()  { return 3.14*radius*radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
}; 

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = "  << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r+1);
}

int main() {
	Circle waffle(30);
	increase(waffle);			//		call by value ��ü ����
	cout << waffle.getRadius() << endl;
}

/*
������ ���� radius = 30
�Ҹ��� ���� radius = 31
30
�Ҹ��� ���� radius = 30
*/