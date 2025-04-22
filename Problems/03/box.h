#ifndef BOX_H
#define BOX_H
#include <iostream>
using namespace std;

class Box {
	int width, height;
	char fill;
public:
	Box(int w, int h);
	void setFill(char f);
	void setSize(int w, int h);
	void draw();
};

#endif