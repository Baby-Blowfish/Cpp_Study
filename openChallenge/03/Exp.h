#ifndef EXP_H
#define EXP_H

class Exp
{
private:
  int base;
  int exp;

public:
  Exp() : Exp(1, 1){};
  Exp(int b) : Exp(b, 1){};
  Exp(int b, int e) : base(b), exp(e){};

  int getValue();
  int getBase();
  int getExp();
  bool equal(Exp &b);
};

int Exp::getValue()
{
  int value = 1;
  for (int i = 0; i < exp; i++)
    value *= base;
  return value;
}
int Exp::getBase()
{
  return base;
}
int Exp::getExp()
{
  return exp;
}
bool Exp::equal(Exp &b)
{
  if (b.getValue() == this->getValue()) 
    return true;
  else
    return false;
}
#endif