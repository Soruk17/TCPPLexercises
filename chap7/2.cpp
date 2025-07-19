#include <iostream>
#include <limits>
#include <ostream>
int main (int argc, char *argv[]) {
  std::cout << "char is signed" << std::numeric_limits<char>::is_signed << std::endl;
  return 0;
}
