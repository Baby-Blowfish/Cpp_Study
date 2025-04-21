/*
	함수의 인자 전달 방식 리뷰
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



	함수 호출시 객체 전달

	1. call by value 객체 전달
		값에 의 한 호출은 함수 안에서 매개 변수 객체에 어떤 변화가 일어나도 실인자를 훼손시키지 않는 장점
		실인자 객체의 크기가 크면 객체를 복사하는 시간이 커지는 단점

		객체를 매개 변수로 가지는 함수의 경우 매개 변수의 객체의 생성자를 실행되지 않고 소멸자만 실행됨
		만일 생성자가 실행된다면 전달받은 원본의 상태를 잃어버리게 된다. 따라서 매개변수의 생성자를 실행하지 않도록함.
		소멸자는 실행됨. 즉 소멸자가 실행되는 비대칭 구조

		이를 해결하기 위해 copy constructor(복사 생성자)를
*/

/*
	call by address 객체 전달
		객체를 복사하는 시간 소모가 없음. 매개 변수가 단순 포인터 이므로 생성자 소멸자 비대칭 문제도 없음
		원본객체를 훼손할 가능성이 있는 단점이 있음.
	
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
		cout << "생성자 실행 radius = "<<radius<<endl;
	}

	Circle::~Circle()
	{
		cout<<"소멸자 실행 radius = "<<radius<<endl;
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

	// 생성자 실행 radius = 30
	// 31
	// 소멸자 실행 radius = 31
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
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = "  << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r+1);
}

int main() {
	Circle waffle(30);
	increase(waffle);			//		call by value 객체 전달
	cout << waffle.getRadius() << endl;
}

/*
생성자 실행 radius = 30
소멸자 실행 radius = 31
30
소멸자 실행 radius = 30
*/