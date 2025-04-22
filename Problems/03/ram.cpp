#include "ram.h"

Ram::Ram()
{
  memset(mem, 0, sizeof(mem));
  size = 100*1024;
}

Ram::~Ram()
{
  cout << "memory is released" << endl;
}

char Ram::read(int address)
{
  if (address < 0 || address >= 100*1024)
  {
    cout << "Error: Invalid address" << endl;
    return -1;
  }
  return mem[address];
} 

void Ram::write(int address, char value)
{
  if (address < 0 || address >= 100*1024)
  {
    cout << "Error: Invalid address" << endl;
    return;
  }
  mem[address] = value;
}