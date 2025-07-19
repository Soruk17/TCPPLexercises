#include <iostream>
#include <iterator>
#include <ostream>
#include <type_traits>
int main (int argc, char *argv[]) {
  std::cout << sizeof(int) << std::endl;
  std::cout << "Align Size of a char " << alignof(char) << std::endl;
  std::cout << "Align Size of a bool " << alignof(bool) << std::endl;
  std::cout << "Align Size of a short " << alignof(short) << std::endl;
  std::cout << "Align Size of a int " << alignof(int) << std::endl;
  std::cout << "Align Size of a long " << alignof(long) << std::endl;
  std::cout << "Align Size of a long long " << alignof(long long) << std::endl;
  std::cout << "Align Size of a float " << alignof(float) << std::endl;
  std::cout << "Align Size of a double " << alignof(double) << std::endl;
  std::cout << "Align Size of a long double " << alignof(long double) << std::endl;
  std::cout << "Align Size of int* " << alignof(int*) << std::endl;
  std::cout << "Align Size of char* " << alignof(char*) << std::endl;
  std::cout << "Align Size of unsigned int " << alignof(unsigned) << std::endl;
  std::cout << "Align Size of unsigned long " << alignof(unsigned long) << std::endl;

  return 0;
}
