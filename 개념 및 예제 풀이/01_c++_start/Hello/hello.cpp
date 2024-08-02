
#include <iostream>
#include <fstream>
using namespace std;

long getFileSize(ifstream& fin)
{
	fin.seekg(0,ios::end);
	long length = fin.tellg();
	return length;
}

int main() {
	const char* file = "c:\\temp\\data.dat";


	ifstream fin(file,ios::in);
	if(!fin){
		cout << "열기 오류";
		return 0;
	}

	cout << file <<"크기는 : " << getFileSize(fin) <<endl;
	fin.close();
}