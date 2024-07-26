/*
	deepcopy : 복사생성자를 작성안할때 기본복사생성자가 만들어지짐, 기본복사생성자는 값을 그대로 복사함.
					이때 만약 멤버 변수에 포인터가 있다면 원본의 포인터와 복사본의 포인터가 같은 공간을 
					가리키므로 하나를 변경하면 둘다 변경되는 문제가 있음. 이를 해결하기 위해
					기본복사생성자에서 복사본이 원본과 다른 공간을 가리키도록 따로 공간을 할당하는 작업을
					해야 안정성이 생김.  
					
*/

#define _CRT_SECURE_NO_WARNINGS //비주얼 스튜디오에서 strcpy로 인한 오류를 막기 위한 선언문
#include <iostream>
#include <cstring>
using namespace std;

class Person { // Person 클래스 선언
	char* name;
	int id;
public:
	Person(int id, const char* name); // 생성자
	Person(const Person& person); // 복사 생성자
	~Person(); // 소멸자
	void changeName(const char *name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id,const char* name) { // 생성자
	this->id = id;
	int len = strlen(name); // name의 문자 개수
	this->name = new char [len+1]; // name 문자열 공간 핟당
	strcpy(this->name, name); // name에 문자열 복사
}

Person::Person(const Person& person) { // 복사 생성자
	this->id = person.id; // id 값 복사
	int len = strlen(person.name);// name의 문자 개수
	this->name = new char [len+1]; // name을 위한 공간 핟당
	strcpy(this->name, person.name); // name의 문자열 복사
	cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}

Person::~Person() {// 소멸자
	if(name) // 만일 name에 동적 할당된 배열이 있으면
		delete [] name; // 동적 할당 메모리 소멸
}

void Person::changeName(const char* name) { // 이름 변경
	if(strlen(name) > strlen(this->name))
		return; // 현재 name에 할당된 메모리보다 긴 이름으로 바꿀 수 없다.
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae");			// (1) father 객체 생성
	Person daughter(father);			// (2) daughter 객체 복사 생성. 복사 생성자 호출

	cout << "daughter 객체 생성 직후 ----" << endl;
	father.show();						// (3) father 객체 출력
	daughter.show();					// (3) daughter 객체 출력

	daughter.changeName("Grace"); // (4) 	// daughter의 이름을 "Grace"로 변경
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
	father.show();						// (5) father 객체 출력
	daughter.show();					// (5) daughter 객체 출력

	return 0;								// (6), (7) daughter, father 객체 소멸
}