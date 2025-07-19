#include <iostream>
#include <iterator>
#include <ostream>
int main (int argc, char *argv[]) {
  std::cout << sizeof(int) << std::endl;
  std::cout << "Size of a char " << sizeof(char) << std::endl;
  std::cout << "Size of a bool " << sizeof(bool) << std::endl;
  std::cout << "Size of a short " << sizeof(short) << std::endl;
  std::cout << "Size of a int " << sizeof(int) << std::endl;
  std::cout << "Size of a long " << sizeof(long) << std::endl;
  std::cout << "Size of a long long " << sizeof(long long) << std::endl;
  std::cout << "Size of a float " << sizeof(float) << std::endl;
  std::cout << "Size of a double " << sizeof(double) << std::endl;
  std::cout << "Size of a long double " << sizeof(long double) << std::endl;
  std::cout << "Size of int* " << sizeof(int*) << std::endl;
  std::cout << "Size of char* " << sizeof(char*) << std::endl;
  std::cout << "Size of unsigned int " << sizeof(unsigned) << std::endl;
  std::cout << "Size of unsigned long " << sizeof(unsigned long) << std::endl;

  return 0;
}
