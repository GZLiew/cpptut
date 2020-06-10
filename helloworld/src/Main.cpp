#include <iostream>
#include "Log.h"

int Multiply(int x, int y);

int main()
{
  // std::cout.print("Hello world").printf(std::endl);
  Log("Hello World");
  std::cout << Multiply(2, 2) << std::endl;
  std::cin.get();

  return 0;
}
