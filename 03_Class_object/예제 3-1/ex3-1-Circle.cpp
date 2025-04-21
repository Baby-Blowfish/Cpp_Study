/*	��ü(object) : ����(state) �� ��� ���� , �ൿ(behavior) �� ��� �Լ�
	
	ĸ��ȭ(encapsulation) : ��ü�� ĸ���� �μ� �� ���θ� ��ȣ�ϰ� �� �� ���� �� (private)
	��ü�� ���� ���� ��ȯ�̳� ����ϱ� ���� �Ϻ� ����� ���� ������ �ʿ���( public )

	Class(Ŭ����) : ��ü�� �����ϴ� ���赵, ��ü�� ���� Ʋ 
	��ü(instance) : ��� ������ ��� �Լ��� �޸𸮿��� ����Ǵ� ��
*/

/*	Ŭ���� �����
	class declaration(Ŭ���� �����)
		class  Ŭ���� �̸�
		{
			public :             // access specifier(����������) : public, private, protected, \
			`													 �⺻���� private 
				int radius = 4;
				double getArea();
			.......
		};                       //  ���� Ŭ���� ������ ����� �� ����. ���� ; �������� ���� ǥ�ð� �ȳ�!!!!!!!!!!!!!!!

	class implementation(Ŭ���� ������)
		double Circle :: getArea()		// ���� Ÿ��,  Ŭ�����̸�,  ����������, ����Լ���� �Ű�����
		{
			return 3.14*radius*radius;
		}

*/

#include <iostream> 
using namespace std; 

class Circle {
public:
	int radius; 
	double getArea(); 
}; // Ŭ���� �����

double Circle::getArea() {
	return 3.14*radius*radius;
}	// Ŭ���� ������

int main() {
	Circle donut; // Ŭ������ ũ�⸸ŭ stack�� �Ҵ�� = instance
	// ��ü�� ����� �����ϴ� ��� :   ��ü�̸�.���
	donut.radius = 1; // donut ��ü�� �������� 1�� ����
	double area = donut.getArea(); // donut ��ü�� ���� �˾Ƴ���
	cout << "donut ������ " << area << endl;

	Circle pizza; 
	pizza.radius = 30; // pizza ��ü�� �������� 30���� ����
	area = pizza.getArea(); // pizza ��ü�� ���� �˾Ƴ���
	cout << "pizza ������ " << area << endl;
}
