/*
	stream(��Ʈ��) : �������� �������� �帧�� Ȥ�� �����͸� �����ϴ� ����Ʈ���� ���
					���α׷��� ��ġ�� �����ϸ� ����Ʈ ������ �����

	input stream	: Ű����, ��Ʈ��ũ, ���� �� �Է���ġ�κ��� �Էµ� �����͸� ������� ���α׷��� �����ϴ� ��ü
	output stream	: ���α׷����� ����� �����͸� ������, �ϵ��ũ,��ũ��,��Ʈ��ũ, ���� ������ �����ϴ� ��ü

	ǥ�� �Է� ��Ʈ�� ��ü : cin
	ǥ�� ��� ��Ʈ�� ��ü : cout
	�Է� ��Ʈ�� ����
	��� ��Ʈ�� ����

	ostream  class ��� �Լ�
	
	ostream& put(char ch) : ch�� ���ڸ� ��Ʈ���� ���
	ostream& write(char* str, int n) : str�迭�� �ִ� n���� ���ڸ� ��Ʈ���� ���
	ostream& flush()	: ���� ��Ʈ�� ���ۿ� �ִ� ���� ���� ���


*/
#include <iostream>
using namespace std;

int main() {
	// "Hi!"�� ����ϰ� ���� �ٷ� �Ѿ��.
	cout.put('H');
	cout.put('i');
	cout.put(33);
	cout.put('\n');
	
	// "C++ "�� ����Ѵ�.
	cout.put('C').put('+').put('+').put(' ');

	char str[]="I love programming";
	cout.write(str, 6); // str �迭�� 6 ���� ���� "I love"�� ��Ʈ���� ���
}