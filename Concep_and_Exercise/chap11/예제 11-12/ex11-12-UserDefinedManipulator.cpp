/*
	조작자의 실행 과정
		cout << endl;
		cout ,<< (endl);
*/

#include <iostream>

using namespace std;
ostream& fivestar(ostream& outs) {
	return outs << "*****";
}
ostream& rightarrow(ostream& outs) {
	return outs << "---->";
}
ostream& beep(ostream& outs) {
	return outs << '\a';
}
int main() {
	cout << "C" << rightarrow << "C++" << rightarrow << "Java" << endl;
	cout << "Visual" << fivestar << "C++" << endl;
}