/*
    default constructor(�⺻������) : Ŭ������ ����� � �����ڵ� ������ �����Ϸ��� �ڵ����� �������ִ� ������
        �Ű� ������ ���� �����ڸ� ����
        ex1) �����ڰ� �ϳ��� ������ ���� ��쿡�� �����Ϸ��� �⺻�����ڸ� ������
            class Circle{
            public:
                int radius;
                double getArea();
                                    << Circle(); �����Ϸ��� �ڵ� ����
            };
            
                                    << Circle::Circle(){}; �����Ϸ��� �ڵ� ����
            int main()
            {
                Circle donut;
            }
    
        ex2) �����ڰ� �ϳ��� �ִ� ��� �⺻ �����ڴ� ����� ���� �ʴ´�. ��ä����� �⺻�����ڸ� ȣ���ϸ� ������ ����!
            class Circle{
            public:
                int radius;
                double getArea();
                Circle(int a);
            };
            
            Circle::Circle(inta){};

            int main()
            {
                Circle pizza(20);    posible
                Circle donut;        error!
            }

*/

#include <iostream> 
using namespace std; 

class Rectangle { 
public:
	int width, height; 
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle() { // Rectangle::Rectangle() : Rectangle(1) {}�� �ص� ��
	width = height = 1;
}

Rectangle::Rectangle(int w, int h) {
	width = w; height = h;
}

Rectangle::Rectangle(int length) { // Rectangle::Rectangle(int length) : Rectangle(length) {}�� �ص� ��
	width = height = length;
}

bool Rectangle::isSquare() { // ���簢���̸� true�� �����ϴ� ��� �Լ�
	if(width == height) return true;
	else return false;
}

int main() {
	Rectangle rect1; 
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if(rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if(rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if(rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
}
