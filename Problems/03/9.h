#ifndef __9_H__
#define __9_H__

class Oval
{
  int width, height;

public:
  Oval() : Oval(1,1) {}
  Oval(int width, int height) : width(width), height(height) {}
  Oval::~Oval();
  
  int getWidth();

  int getHeight();

  void setWidth(int width);

  void setHeight(int height);

  void show();

};

#endif
