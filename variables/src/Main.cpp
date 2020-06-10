#include <iostream>

int main()
{
  // char, short, int, long, long long
  // float, double

  // bool* variableB = true; // pointers
  // bool& variableB = false; // references
  bool variableB = !!(7 > 5);
  std::cout << sizeof(variableB) << std::endl;

  // float variableF = 5.5f;
  // std::cout << variableF << std::endl;

  // char a = 'A';
  // std::cout << a << std::endl;

  // unsigned int variable = 4; // store up to around 4bn
  // std::cout << variable << std::endl;
  // variable = 20;
  // std::cout << variable << std::endl;
  std::cin.get();
}
