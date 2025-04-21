/*
	��Ӱ� ������, �Ҹ���
	�Ļ� Ŭ������ �⺻ Ŭ������ ������ ȣ�� �� ���� ����
		�Ļ� Ŭ���� �ν��Ͻ�ȭ�� �⺻ Ŭ������ ������ ������ �Ļ� Ŭ������ �����ڰ� ����ȴ�.
		Ŭ���� A,B,C,�� ��Ӱ����� ����
			C c;
				C()�� ȣ���ϰ� �Ǹ�, C()�� �����ϱ��� �����Ϸ��� ���� B()�� ȣ��, B()�� ����Ǳ���
				A()ȣ��, A()����, B()����, C()����

		if  A()�� ������� �ʰ� A(int a){}�� �ִ� ���
			B b; �ΰ�� ����Ҽ� �ִ� ������ �⺻ �����ڰ� �����ϴ�. ��� error!

	������� �⺻ Ŭ������ ������ ����
		class A {
		public:
			A(){}
			A(int x){}
		};
		class B : public A{
		public:
			B(int x);
		};

		B::B(int x):A(x+3){
		}

		int main()
		{
			B b;	C// b��ü�� ������ ����� AŬ������ �������� A(int x)�� ��������� ����
		}
		 


*/

#include <iostream>
#include <string>
using namespace std;

class  TV {
	int size; // ��ũ�� ũ��
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }
	int getSize() { return size; }
};

class  WideTV : public TV { // TV�� ��ӹ޴� WideTV
	bool videoIn;
public:
	WideTV(int size, bool videoIn) : TV(size) 	{ 
			this->videoIn = videoIn;
	}
	bool getVideoIn() { return videoIn; }
};

class  SmartTV : public WideTV { // WideTV�� ��ӹ޴� SmartTV
	string ipAddr; // ���ͳ� �ּ�
public:
	 SmartTV(string ipAddr, int size) : WideTV(size, true) { 
		 this->ipAddr = ipAddr;
	}
	 string getIpAddr() { return ipAddr; }
};

int main() {
	 // 32 ��ġ ũ�⿡ "192.0.0.1"�� ���ͳ� �ּҸ� ������ ����Ʈ TV ��ü ����
	SmartTV  htv("192.0.0.1", 32);
	cout << "size=" << htv.getSize() << endl;
	cout << "videoIn=" << boolalpha << htv.getVideoIn() << endl;
	cout << "IP=" << htv.getIpAddr() << endl;
}
